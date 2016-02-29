#include "bfs.h"

int test_matrix_vector_multiplication(int N,int A[][N], int V[],  int Y[], int p_g ){
    int seed = 42; //Just a random number chosen as seed for RNG
    srand((unsigned)time(NULL));

    int coin;
    int result = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            //Can make this more sparse, might save a lot of computation steps.
            if(V[j]== 1 && A[i][j]==1){
                coin= (rand()%100)+1;
              //  printf("coin: %i ", coin);

                    if(i==j){
                        result = (A[i][j] && V[j]) ||result ;
                    }
                    else{
                        result = (A[i][j] && V[j] && (coin<p_g)) ||result ;
                    }
                 //temp = temp && ((coin%100)<p_g);
                 }
        }
     //   printf("\n");
        Y[i] = result;

        result =0;
        //printf("\n");
    }
    return 0;
}

//Need fixings, this is just a copy-paste
int test_distGen(int dist[], int level, int x[], int y[], int N){
	int update = 0;
	for (int i= 0; i<N; i++){
		if(x[i]== 0 && y[i]==1){
			dist[i] = level;
			update=update+1;
		}
	}
	return update==0;
}


int test_bfs_simulation(int N,int A[][N], int result[], int root[], int dist[], int p_g){
//---------declare variable that will be used.-------------
	int level = 1;
	int converged = 0;
    int steps=0;
//-----------initiate some of the vectors---------------

//---------------Main computation-------------------

    printf("Matrix A: \n");
    test_print_matrix(N, A);
    printf("Vector x: \n");
    print_vector(root,N);
    printf("\n");

	while(!converged){
        //printf("%i steps", steps);

		test_matrix_vector_multiplication(N, A,root, result, p_g);
		//----------Print matrix for reference

        print_result(root,steps,N,'X');
        printf(" => ");
        print_result(result,steps++,N,'Y');
        printf("\n");

        converged = test_distGen(dist, level, root,result, N);

		for(int i=0; i<N ; i++){
            root[i]=result[i];
		}
		level += 1;
	}

    return dist;

}

int test_print_matrix(int N,int A[][N]){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
}
