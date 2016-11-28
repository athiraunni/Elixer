#include <pthread.h>
#include <stdio.h>
#define N 40000000
int count = 0;
void *inc(void *a)
{
	int i, tmp;
	for(i = 0; i < N; i++) {
		tmp = count;
		tmp++;
		count = tmp;
	}
}
main()
{
	pthread_t t1, t2;
	pthread_create(&t1, 0, inc, 0);
	pthread_create(&t1, 0, inc, 0);
	
	pthread_join(t1,0);
	pthread_join(t2,0);

	printf("count = %d\n", count);
}
