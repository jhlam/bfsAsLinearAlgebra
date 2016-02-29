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
            if(vect[j]== 1 && get_element(total_node, matrix,i,j)==1){
                coin= (rand()%100)+1;
                //printf("coin: %i ", coin);

                    if(i==j){
                        local_result = 1 ||local_result ;
                    }
                    else{
                        local_result = (1 && (coin<=global_probability)) ||result ;
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

int t_bfs_simulation(int total_node, int *matrix, int y_vector[total_node], int x_vector[total_node], int dist[total_node], int global_probability){
//---------declare variable that will be used.-------------
	int level = 1;
	int converged = 0;
    int steps=0;
//-----------initiate some of the vectors---------------
	 for(int i = 0; i<total_node; i++){
            dist[i]= -1;
	}
//---------------Main computation-------------------

    printf("Matrix A: \n");
    t_print_matrix(total_node, matrix);
    printf("Vector x: \n");
    print_vector(x_vector,total_node);
    printf("\n");

	while(!converged){
        //printf("%i steps", steps);

		matrix_vector_multiplication(total_node, matrix, x_vector, y_vector, global_probability);
		//----------Print matrix for reference

        print_result(x_vector,steps,total_node,'X');
        printf(" => ");
        print_result(y_vector,steps++,total_node,'Y');
        printf("\n");

        converged = distGen(total_node,dist, level, x_vector, y_vector);

		for(int i=0; i<total_node ; i++){
            x_vector[i]=y_vector[i];
		}
		level += 1;
	}

    return dist;

}



