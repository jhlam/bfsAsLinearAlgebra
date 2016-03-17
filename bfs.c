#include "bfs.h"

int display_array(int target[], int N){
    for(int i=0; i<N; i++){
        printf("%i ", target[i]);
    }
    printf("\n");
    return 0;
}

int print_vector(int v[], int N){
    for (int i=0; i<N; i++){
        printf("%i ", v[i]);
    }
   // printf("\n");
}

int increas_array(int target[], int N, int value){
    for(int i=0; i<N; i++){
        target[i]=target[i]+value;
    }
    return 0;
}

int init_matrix(int N, int A[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            A[i][j] = 0;
        }
    }
    return 0;
}

int print_matrix(int N, int A[][N]){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
}

int increas_matrix(int N, int A[][N], int value){
    for(int i=0; i<N; i++){
        increas_array(A[i], N, value);
    }
    return 0;
}
int print_result(int x[],int steps, int N, char r){
    printf("%c_%i:[", r, steps);
    for(int i=0; i<N; i++){
        printf("%i ", x[i]);
    }
    printf("]");
}

int sub_vector(int total_node, int vector_1[],int vector_2[], int result_vector[]){
    int i;
    for(i=0; i<total_node;i++){
        if(vector_1[i] && !(vector_2[i])){
            result_vector[i]=1;
        }
        else{
            result_vector[i]=0;
        }
    }

}int add_vector(int total_node, int vector_1[],int vector_2[], int result_vector[]){
    int i;
    for(i=0; i<total_node; i++){
        if(vector_1[i] ||  vector_2[i]){
            result_vector[i]=1;
        }
        else{
            result_vector[i]=0;
        }
    }
    return 0;
}



int matrix_vector_multiplication(int total_node, int matrix[][total_node], int vect[total_node], int result[total_node], int global_probability ){
    int seed = 42; //Just a random number chosen as seed for RNG
    srand((unsigned)time(NULL));

    int coin;
    int local_result = 0;

    for(int i=0; i<total_node; i++){
        for(int j=0; j<total_node; j++){
            //Can make this more sparse, might save a lot of computation steps.
            if(vect[j]== 1 && matrix[i][j]==1){
                coin= (rand()%100)+1;
                //printf("coin: %i ", coin);

                    if(i==j){
                        local_result = (matrix[i][j] && vect[j]) ||local_result ;
                    }
                    else{
                        local_result = (matrix[i][j] && vect[j] && (coin<=global_probability)) ||result ;
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
int distGen(int total_node, int dist[total_node], int level, int x_vector[total_node], int y_vector[total_node]){
	int update = 0;
	for (int i= 0; i<total_node; i++){
		if(x_vector[i]== 0 && y_vector[i]==1){
			dist[i] = level;
			update=update+1;
		}
	}
	return update==0;
}




int bfs_simulation(int total_node, int matrix[][total_node], int y_vector[total_node], int x_vector[total_node], int dist[total_node], int global_probability){
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
    print_matrix(total_node, matrix);
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


