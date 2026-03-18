#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

#define NUM_THTREADS 4

void* worker( void* in) {
    sleep(60);
    return NULL;
}

int main(){
    pthread_t threads[NUM_THTREADS];
    for (size_t i = 0; i < NUM_THTREADS; i++)
    {
        pthread_create(&threads[i],NULL,worker,(void*)&i);
    }
        //WORKERS BUSSY
    for (size_t i = 0; i < NUM_THTREADS; i++)
    {
        pthread_join(&threads[i],NULL);
    }
    
}
