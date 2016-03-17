#include "bfs.h"


int get_element(int total_node, int *matrix, int x, int y){
    return  matrix[x+ (y*total_node)];
}

int set_element(int total_node, int *matrix, int x, int y, int target){
    matrix[x+(y*total_node)]= target;
    return 0;
}


int t_matrix_vector_multiplication(int total_node, int *matrix, int vect[total_node], int result[total_node], int global_probability ){
    int seed = 42; //Just a random number chosen as seed for RNG
    srand((unsigned)time(NULL));

    int coin;
    int local_result = 0;

    for(int i=0; i<total_node; i++){
        for(int j=0; j<total_node; j++){
            //Can make this more sparse, might save a lot of computation steps.
            if(vect[j]== 1 && get_element(total_node, matrix,j,i)==1){

                coin= (rand()%100)+1;
                //printf("coin: %i ", coin);

                    if(i==j){
                        local_result = 1 ||local_result ;

                      //  printf("yoho ");
                    }
                    else{
                        local_result = (coin<=global_probability) || local_result ;

                    }
                 //temp = temp && ((coin%100)<p_g);
                 }
        }
     //   printf("\n");

        result[i] = local_result;
        local_result =0;
        //printf("\n");
    }
    return 0;
}

//Need fixings, this is just a copy-paste
int t_distGen(int total_node, int dist[total_node], int level, int x_vector[total_node], int y_vector[total_node]){
	int update = 0;
	for (int i= 0; i<total_node; i++){
		if(x_vector[i]== 0 && y_vector[i]==1){
			dist[i] = level;
			update=update+1;
		}
	}
	return update==0;
}


int t_print_matrix(int N, int *A){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%i ", get_element(N, A, i,j));
        }
        printf("\n");
    }
}

int t_bfs_simulation(int total_node, int *matrix, int   y_vector[total_node], int x_vector[total_node], int frontier[total_node], int dist[total_node], int global_probability){
//---------declare variable that will be used.-------------
	int level = 1;
	int converged = 0;
    int steps=0;
//-----------initiate some of the vectors---------------
	 for(int i = 0; i<total_node; i++){
            dist[i]= -1;
            frontier[i]=x_vector[i];
	}
//---------------Main computation-------------------

    printf("Matrix A: \n");
    t_print_matrix(total_node, matrix);
    printf("Vector x: \n");
    print_vector(x_vector,total_node);
    printf("\n");

	while(!converged){
        //printf("%i steps", steps);

        //should calculate the frontier.

		t_matrix_vector_multiplication(total_node, matrix, frontier, y_vector, global_probability);
		//----------after the first matrix vector multiplication,

		//----------Print matrix for reference
        print_result(frontier,steps,total_node,'F');

        printf(" => ");
        print_result(y_vector,steps,total_node,'Y');
        printf("\n");


        sub_vector(total_node,y_vector,x_vector, frontier);

        converged = distGen(total_node,dist, level, x_vector, y_vector);

        add_vector(total_node, x_vector, y_vector, x_vector);
        print_result(x_vector,steps++,total_node,'X');

        printf("\n");




		level += 1;
	}

    return dist;

}



