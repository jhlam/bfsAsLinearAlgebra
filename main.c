#include "bfs.h"

int main(){
    int N = 7;
    int value = 2;
    int Y[7]={};
    int p_g = 30;
    int root[7]={1,0,0,0,0,0,0};
    int dist[7]={};
    int frontier[7]={};
    int A[][7]={
                {1,1,0,1,0,0,0},
                {1,1,0,0,1,0,1},
                {0,0,1,1,0,1,1},
                {1,0,1,1,0,0,1},
                {0,1,0,0,1,1,1},
                {0,0,1,0,1,1,0},
                {0,1,1,1,1,0,1}
                };

   // display_array(target, N);
    //display_array(target, N);
    //increas_array(target, N, value);
    //init_matrix(A,N);
        //print_matrix(A,N);

    //increas_matrix(A, N,  value);
    //print_matrix(A,N);
        //matrix_vector_multiplication(A, target, N,  Y, p_g);

//      display_array(Y,N);

    //test_rng(N,42);
    //test_rng_2(10,42);
  //  t_bfs_simulation(N, A, Y, root, frontier, dist, 30);

    int t_N = 16;
    int t_value = 2;
    int t_Y[16];
    int t_p_g = 30;
    int t_root[16]={1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1};
    int t_frontier[16]={};
    int t_dist[16]={};
    int t_A[][16]={
                {1,1,1,1,0,0,1,0,1,1,1,1,0,1,0,0},
                {1,1,1,1,1,1,0,0,1,0,0,0,1,0,0,0},
                {1,1,1,1,1,0,0,0,1,0,1,0,0,0,0,0},
                {1,1,1,1,1,0,0,0,1,0,0,0,0,1,0,0},
                {0,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0},
                {0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
                {1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0},
                {1,1,1,1,1,0,0,0,1,1,1,0,1,0,0,0},
                {1,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0},
                {1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0},
                {1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
                {0,1,0,0,1,0,0,0,1,0,0,0,1,1,0,0},
                {1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                };

    int t_matrix[16*16]={
                1,1,1,1,0,0,1,0,1,1,1,1,0,1,0,0,
                1,1,1,1,1,1,0,0,1,0,0,0,1,0,0,0,
                1,1,1,1,1,0,0,0,1,0,1,0,0,0,0,0,
                1,1,1,1,1,0,0,0,1,0,0,0,0,1,0,0,
                0,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,
                0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,
                1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,
                0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,
                1,1,1,1,1,0,0,0,1,1,1,0,1,0,0,0,
                1,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,
                1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,
                1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
                0,1,0,0,1,0,0,0,1,0,0,0,1,1,0,0,
                1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,
                0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
                0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
                };

  //  t_bfs_simulation(t_N,t_matrix,t_Y,t_root,t_frontier, t_dist, 15);
 /**
   test_simulation_1();
    test_simulation_2();
    test_simulation_3();
    test_simulation_4();
    test_simulation_5();
    test_simulation_6();
    test_simulation_7();
    test_simulation_8();
    test_simulation_9();
    test_simulation_10();
    test_simulation_11();
    test_matrix_1(N);
    test_matrix_2(N);
    test_matrix_3(N);
    test_matrix_4(N);
    test_matrix_5(N);
    test_matrix_6(N);
    test_rng();
    test_rng_2();
**/
//test_simulation_10();
  //  test_simulation_11();

  int matrix_one[7*7]={
	1,1,0,1,0,0,0,
	1,1,0,0,1,0,1,
	0,0,1,1,0,1,1,
	1,0,1,1,0,0,1,
	0,1,0,0,1,0,1,
	0,0,1,0,0,1,0,
	0,1,1,1,1,0,1
	};
	int seeds[7]={1,0,0,0,0,0,0};
	int distance[7]={};
	int local_result[7]={};
	int frontier_one[7]={};

 clock_t start = clock(), diff;
    t_bfs_simulation(7,matrix_one,local_result,seeds,frontier_one,distance,100);
diff = clock() - start;

int msec = diff * 1000 / CLOCKS_PER_SEC;
printf("Time taken %d seconds %d milliseconds \n", msec/1000, msec%1000);


    return 0;


}
