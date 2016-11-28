#include <pthread.h>
#include <assert.h>

#define N 10000

void* fun(void *a)
{
    sleep(60*60*12);
}

int main()
{
    pthread_t tids[N];
    int i, r;

    for(i = 0;i < N; i++) {
        r = pthread_create(&tids[i], 0, fun, 0);    
        if(r != 0) {
            perror("thread error");
            printf("%d\n", i);
            break;
        }
    }

    for(i = 0; i < N; i++) 
        pthread_join(tids[i], 0);
}




