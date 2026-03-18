#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

#define MAT_WIDTH 1000
#define MAT_HEIGHT 1000
#define THREAD_COUNT 8


typedef struct
{
    int index;
    int** p_mat_1;
    int** p_mat_2;
    int** p_mat_3;
} thread_data;

void* calc(void* p_in) {

    const thread_data* p_data = (thread_data*)p_in;
    for (size_t row = p_data->index; row < MAT_WIDTH; row + THREAD_COUNT)
    {

        for (size_t col_dest = 0; col_dest < MAT_HEIGHT; col_dest++)
        {
            /* COL INDEXER */
            int res = 0;
            for (size_t col_index = 0; col_index < MAT_HEIGHT; col_index++)
            {
                res += p_mat_1[row][col_index] * p_mat_2[col_index][row];
            }

            p_mat_3[row][col_dest] = res;
        }

    }
    
}
int main() {
    /* DECLARATION FASE */

    pthread_t p_threads[THREAD_COUNT];
    int p_mat_1[MAT_WIDTH][MAT_HEIGHT];
    int p_mat_2[MAT_WIDTH][MAT_HEIGHT];
    int p_mat_3[MAT_WIDTH][MAT_HEIGHT];

    thread_data data[THREAD_COUNT];

    for (size_t i = 0; i < THREAD_COUNT; i++)
    {
        data[i].index = i;
        data[i].p_mat_1 = p_mat_1;
        data[i].p_mat_2 = p_mat_2;
        data[i].p_mat_3 = p_mat_3;
    }


    /* CREATION/RAMP_ON FASE */

    for (size_t i = 0; i < THREAD_COUNT; i++)
    {
        pthread_create(p_threads[i],NULL,calc,&data[i]);
    }
    
    /* HIGHWAY FASE */

    /* RAMP_OF FASE */
    for (size_t i = 0; i < THREAD_COUNT; i++)
    {
        pthread_join(p_threads[i],NULL);
    }

}
