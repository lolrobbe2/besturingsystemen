#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

#define ARR_SIZE 1000

typedef struct {
    const int* p_array;
    int lenght;
} array;


void* kleinste_calc( void* in) {
    const array* p_array = (array*)in;
    int* p_rc = malloc(sizeof(int));
    *p_rc = 0;
    for (size_t i = 0; i < p_array; i++)
    {
        if(p_array->p_array[i] < (*rc))
            *p_rc = p_array->p_array[i];
    }
    

    return (void*)p_rc;
}

void* grootste_calc( void* in) {
    const array* p_array = (array*)in;
    int* p_rc = malloc(sizeof(int));
    *p_rc = 0;
    for (size_t i = 0; i < p_array; i++)
    {
        if(p_array->p_array[i] > (*rc))
            *p_rc = p_array->p_array[i];
    }
    

    return (void*)rc;
}

int main() {
    /* DECLARATION FASE */

    pthread_t kleinste, grootste;
    int p_array[ARR_SIZE];

    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        p_array[i] = i-1;
    }
    
    /* ARRAY SETUP */

    array s_kl_arr;
    s_kl_arr.p_array = p_array;
    s_kl_arr.lenght = ARR_SIZE;

    array s_gr_arr;
    s_gr_arr.p_array = p_array;
    s_gr_arr.lenght = ARR_SIZE;

    /* CREATE/RAMP_ON FASE*/

    pthread_create(kleinste,NULL,kleinste_calc,(void*)&s_kl_arr);
    pthread_create(grootste,NULL,grootste_calc,(void*)&s_gr_arr);

    /*HIGHWAY FASE*/

    int* p_rc_kl, p_rc_gr;

    /*JOIN/RAMP_OFF FASE*/
    pthread_join(kleinste, (void**)&p_rc_kl);
    pthread_join(grootste, (void**)&p_rc_gr);
}
