#include "bfs.h"

//Need to add a printf where we say finish with test number.

int test_matrix_1(int N){
    int seed[7] = {1,1,1,1,1,1,1};
    int vector[7] = {};
    int A[14]={
                1,1,0,1,0,0,0,
                1,1,0,0,1,0,1,
                0,0,1,1,0,1,1,
                1,0,1,1,0,0,1,
                0,1,0,0,1,1,1,
                0,0,1,0,1,1,0,
                0,1,1,1,1,0,1
                };

    int anwser[7]={1,1,1,1,1,1,1};
    t_matrix_vector_multiplication(N, A, seed, vector, 0);
    for(int i = 0; i<N; i++){
        if(vector[i]!=anwser[i]){
            printf("Error, 1");
            return 0;}
    }
    printf("Matrix test 1, passed\n");
    return 0;
}

int test_matrix_2(int N){
    int seed[7] = {1,0,0,0,0,0,0};
    int vector[7] = {};
    int A[][7]={
                {1,1,0,1,0,0,0},
                {1,1,0,0,1,0,1},
                {0,0,1,1,0,1,1},
                {1,0,1,1,0,0,1},
                {0,1,0,0,1,1,1},
                {0,0,1,0,1,1,0},
                {0,1,1,1,1,0,1}
                };
   int anwser[7]={1,1,0,1,0,0,0};
    matrix_vector_multiplication(N, A, seed, vector, 100);
    for(int i = 0; i<N; i++){
        if(vector[i]!=anwser[i]){
            printf("Error, 2");
           return 0;
        }
    }
    printf("Matrix test 2, passed \n");
    return 0;

}
int test_matrix_3(int N){
    int vector[7]={};
    int A[][7]={
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0}
                };
    int anwser[7]={1,1,1,1,1,1,1};
    int seed[7]={0,1,0,0,0,0,0};

    matrix_vector_multiplication(N, A, seed, vector, 100);
    for(int i = 0; i<N; i++){
        if(vector[i]!=anwser[i]){
            printf("Error, 3");
            return 0;
        }
    }

    printf("Matrix test 3, passed \n");
    return 0;

}
int test_matrix_4(int N){
    int A[][7]={
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0}
                };
    int seed[7]={1,0,0,0,0,0,0};
    int anwser[7]={0,0,0,0,0,0,0};
    int vector[]={};

    matrix_vector_multiplication(N, A, seed, vector, 100);
    for(int i = 0; i<N; i++){
        if(vector[i]!=anwser[i]){
            printf("Error, 4");
            return 0;
        }
    }

    printf("Matrix test 4, passed \n");
    return 0;
}

int test_matrix_5(int N){
    int A[][7]={
                {1,1,1,1,1,1,1},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0}
                };
    int seed[7]={1,0,0,0,0,0,0};
    int anwser[7]={1,0,0,0,0,0,0};
    int vector[]={};

    matrix_vector_multiplication(N, A, seed, vector, 100);
    for(int i = 0; i<N; i++){
        if(vector[i]!=anwser[i]){
            printf("Error, 5");
            return 0;
        }
    }

    printf("Matrix test 5, passed \n");
    return 0;
}
int test_matrix_6(int N){
    int A[][7]={
                {0,1,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0}
                };
    int seed[7]={0,1,0,0,0,0,0};
    int anwser[7]={1,0,0,0,0,0,0};
        int vector[]={};

    matrix_vector_multiplication(N, A, seed, vector, 100);
    for(int i = 0; i<N; i++){
        if(vector[i]!=anwser[i]){
            printf("Error, 6");
            return 0;
        }
    }

    printf("Matrix test 6, passed \n");
    return 0;
}

int test_matrix_7(int N){
    int A[][7]={
                {0,1,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0}
                };
    int seed[7]={0,1,0,0,0,0,0};
    int anwser[7]={1,0,0,0,0,0,0};
        int vector[]={};

    matrix_vector_multiplication(N, A, seed , vector, 100);
    for(int i = 0; i<N; i++){
        if(vector[i]!=anwser[i]){
            printf("Error, 7");
            return 0;
        }
    }

    printf("Matrix test 7, passed \n");
    return 0;
}

int test_rng(int N,int seed){
    srand((unsigned)seed);
    int a[10]={};

    for(int i = 0; i<N; i++){
        a[i]=rand()%100;
    }

    srand((unsigned)seed);
    int b[10]={};
    for(int i = 0; i<N; i++){
        b[i]=rand()%100;
    }

    for(int i =0; i<N; i++){
        if(a[i]!=b[i]){
            printf("RNG failure");
                return 0;
        }
    }
    printf("RNG test done\n");
}


int test_rng_2(int N,int seed){
    int pass =1;
    srand((unsigned)seed);

    int a[10]={};

    for(int i = 0; i<N; i++){
        a[i]=rand();
    }

    srand((unsigned)seed+1);

    int b[10]={};

    for(int i = 0; i<N; i++){
        //srand((unsigned)time(NULL));
        b[i]=rand();
    }

    for(int i =0; i<N; i++){
        //printf("%i =",a[i]);
        //printf( "%i \n", b[i]);
        if(a[i]==b[i]){
            printf("RNG_2 failure \n");
            return 0;
        }
    }

    printf("RNG_2 test done, success \n");
//    return 0;
}

int test_simulation_1(){
    int A[][7]={
        {1,1,1,1,1,1,1},
        {0,1,0,0,0,0,0},
        {0,0,1,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,0,1,0,1},
        {0,0,0,0,0,1,0},
        {0,0,0,0,1,0,1}
    };
    int v[7]={1,0,0,0,0,0,0};
    int result[7]={};
    int N = 7;
    int anwser[7]= {1,0,0,0,0,0,0};
int dist[7]= {};
    bfs_simulation(N, A,result, v,dist, 100);
    for(int i = 0; i<N; i++){
        if(anwser[i]!= result[i]){
            printf("\nSimulation test 1 failed\n");
            return 0;
        }
    }
        printf("\nSimulation 1 passed\n");
    return 0;
}

int test_simulation_2(){
    int A[][7]={
        {1,0,1,0,0,0,0},
        {0,1,0,0,0,0,0},
        {1,0,1,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,0,1,0,1},
        {0,0,0,0,0,1,0},
        {0,0,0,0,1,0,1}
    };
    int v[7]={1,0,0,0,0,0,0};
    int result[7]={};
    int N = 7;
    int anwser[7]= {1,0,1,0,1,0,1};
int dist[]= {};
    bfs_simulation(N, A,result, v, dist, 100);
    for(int i = 0; i<N; i++){
        if(anwser[i]!= result[i]){
            printf("\nSimulation test 2 faield\n");
            return 0;
        }
    }
    printf("\nSimulation 2 passed\n");
    return 0;
}

int test_simulation_3(){
    int A[][7]={
        {1,1,1,1,1,1,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0}
    };
    int v[7]={1,0,0,0,0,0,0};
    int result[7]={};
    int N = 7;
    int anwser[7]= {1,0,0,0,0,0,0};
int dist[]= {};
    bfs_simulation(N,A,result, v, dist, 100);
    for(int i = 0; i<N; i++){
        if(anwser[i]!= result[i]){
            printf("\nSimulation test 3 faield\n");
            return 0;
        }
    }
    printf("\nSimulation 3 passed\n");
    return 0;
}
int test_simulation_4(){
    int A[][7]={
        {0,1,1,1,1,1,0},
        {0,1,1,1,1,1,0},
        {0,1,1,1,1,1,0},
        {0,1,1,1,1,1,0},
        {0,1,1,1,1,1,0},
        {0,1,1,1,1,1,0},
        {0,1,1,1,1,1,0}
    };
    int v[7]={1,0,0,0,0,0,1};
    int result[7]={};
    int N = 7;
    int anwser[7]= {0,0,0,0,0,0,0};
int dist[]= {};
    bfs_simulation(N,A,result, v,dist, 100);
    for(int i = 0; i<N; i++){
        if(anwser[i]!= result[i]){
            printf("\nSimulation test 4 faield\n");
            return 0;
        }
    }
    printf("\nSimulation 4 passed\n");
    return 0;
}
int test_simulation_5(){
    int A[][7]={
        {1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1}
    };
    int v[7]={1,1,1,1,1,1,1};
    int result[7]={};
    int N = 7;
    int anwser[7]= {1,1,1,1,1,1,1};
int dist[]= {};
    bfs_simulation(N, A,result, v,dist, 0);


    for(int i = 0; i<N; i++){
        if(anwser[i]!= result[i]){
            printf("\nSimulation test 5 faield\n");
            return 0;
        }
    }
    printf("\nSimulation 5 passed\n");
    return 0;
}
int test_simulation_6(){
    int A[][7]={
        {0,1,1,1,1,1,1},
        {1,0,1,1,1,1,1},
        {1,1,0,1,1,1,1},
        {1,1,1,0,1,1,1},
        {1,1,1,1,0,1,1},
        {1,1,1,1,1,0,1},
        {1,1,1,1,1,1,0}
    };
    int v[7]={1,1,1,1,1,1,1};
    int result[7]={};
    int N = 7;
    int anwser[7]= {0,0,0,0,0,0,0};
int dist[]= {};
    bfs_simulation(N,A,result, v,dist, 0);
            //print_vector(result,N);


    for(int i = 0; i<N; i++){
        if(anwser[i] != result[i]){
            printf("\nSimulation test 6 faield\n");
            return 0;
        }
    }
    printf("\nSimulation 6 passed\n");
    return 0;
}
int test_simulation_7(){
    int A[][7]={
        {1,0,0,0,0,0,0},
        {0,1,0,0,0,0,0},
        {0,0,1,0,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,0,1,0,0},
        {0,0,0,0,0,1,0},
        {0,0,0,0,0,0,1}
    };
    int v[7]={1,1,1,1,1,1,1};
    int result[7]={};
    int N = 7;
    int anwser[7]= {1,1,1,1,1,1,1};
int dist[]= {};
    bfs_simulation(N, A,result, v,dist, 0);
            //print_vector(result,N);


    for(int i = 0; i<N; i++){
        if(anwser[i] != result[i]){
            printf("\nSimulation test 7 faield\n");
            return 0;
        }
    }
    printf("\nSimulation 7 passed\n");
    return 0;
}


int test_simulation_8(){
    int A[][7]={
        {1,1,1,1,1,1,1},
        {0,1,0,0,0,0,0},
        {0,0,1,0,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,0,1,0,0},
        {0,0,0,0,0,1,0},
        {0,0,0,0,0,0,1}
    };
    int v[7]={1,0,0,0,0,0,0};
    int result[7]={};
    int N = 7;
    int anwser[7]= {1,0,0,0,0,0,0};
int dist[]= {};
    bfs_simulation(N, A,result, v,dist, 0);
            //print_vector(result,N);


    for(int i = 0; i<N; i++){
        if(anwser[i] != result[i]){
            printf("\nSimulation test 8 faield\n");
            return 0;
        }
    }
    printf("\nSimulation 8 passed\n");
    return 0;
}
int test_simulation_9(){
    int A[][7]={
        {0,1,1,1,1,1,1},
        {1,0,1,1,1,1,1},
        {1,1,0,1,1,1,1},
        {1,1,1,0,1,1,1},
        {1,1,1,1,0,1,1},
        {1,1,1,1,1,0,1},
        {1,1,1,1,1,1,0}
    };
    int v[7]={1,1,1,1,1,1,1};
    int result[7]={};
    int N = 7;
    int anwser[7]= {0,0,0,0,0,0,0};
int dist[]= {};
    bfs_simulation(N, A,result, v,dist, 0);
            //print_vector(result,N);


    for(int i = 0; i<N; i++){
        if(anwser[i] != result[i]){
            printf("\nSimulation test 9 faield\n");
            print_vector(result,N);

            return 0;
        }
    }
    printf("\nSimulation 9 passed\n");
    return 0;
}

int test_simulation_10(){
    int A[][7]={
        {1,1,0,0,0,0,0},
        {1,1,0,0,1,0,0},
        {0,0,1,0,0,0,0},
        {0,0,0,1,0,0,0},
        {0,1,0,0,1,0,1},
        {0,0,0,0,0,1,0},
        {0,0,0,0,1,0,1}
    };
    int v[7]={1,0,0,0,0,0,0};
    int result[7]={};
    int N = 7;
    int anwser[7]= {1,1,0,0,1,0,1};
int dist[]= {};
    bfs_simulation(N, A,result, v, dist,100);
            //print_vector(result,N);


    for(int i = 0; i<N; i++){
        if(anwser[i] != result[i]){
            printf("\nSimulation test 10 faield\n");
            print_vector(result,N);

            return 0;
        }
    }
    printf("\nSimulation 10 passed\n");
    return 0;
}
int test_simulation_11(){
    printf("stage 1 \n");
    int A[][11]={
        {1,1,0,0,1,0,0,0,1,0,0},
        {1,1,0,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0,0,0,0,0},
        {1,0,0,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,0,0,1,0,1,0},
        {1,0,0,0,0,0,0,0,1,1,0},
        {0,0,0,0,0,0,0,1,1,1,1},
        {0,0,0,0,0,0,0,0,0,1,1}
    };
    int v[11]={1,0,0,0,0,0,0,0,0,0,0};
    int result[11]={};
    int dist[11]={};
    int N = 11;
    int anwser[11]= {1,1,0,1,1,0,0,1,1,1,1};

    bfs_simulation(N,A,result,v,dist , 100);
            //print_vector(result,N);


    for(int i = 0; i<N; i++){
        if(anwser[i] != result[i]){
            printf("\nSimulation test 11 faield\n");
            print_vector(result,N);

            return 0;
        }
    }
    printf("\nSimulation 11 passed\n");
    return 0;
}
