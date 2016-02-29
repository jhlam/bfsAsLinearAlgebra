#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int display_array(int target[], int N);
int increas_array(int target[], int N, int value);
int init_matrix(int N, int A[][N]);
int print_matrix(int N, int A[][N]);
int print_vector(int v[], int N);
int increas_matrix(int N, int A[][N], int value);

//--------------The simulation that is critical------------------
int matrix_vector_multiplication(int total_node, int A[][total_node], int V[total_node], int Y[total_node], int global_probability );
int bfs_simulation(int total_node, int A[][total_node], int result[total_node], int root[total_node], int dist[total_node],int global_probability);
int distGen(int total_node,int dist[total_node], int level, int x[total_node], int y[total_node]);

//----------------test for a larger matrix------------------
int test_matrix_vector_multiplication( int N,int A[][N], int V[], int Y[], int p_g );
int test_distGen(int dist[], int level, int x[], int y[], int N);
int test_bfs_simulation( int N,int A[][N], int result[], int root[], int dist[], int p_g);

//----------------function for bfs_v2------------------------
int get_element(int total_node, int *matrix, int x, int y);
int set_element(int total_node, int *matrix, int x, int y, int target);
int t_matrix_vector_multiplication(int total_node, int *matrix, int vect[total_node], int result[total_node], int global_probability );
int t_bfs_simulation(int total_node, int *matrix, int y_vector[total_node], int x_vector[total_node], int dist[total_node], int global_probability);
int t_distGen(int total_node, int dist[total_node], int level, int x_vector[total_node], int y_vector[total_node]);
