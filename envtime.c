#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
    int i;
    time_t the_time;

    for(i = 0; i < 10; i++)
    {
        the_time = time(( time_t*)NULL );
        printf("The time is %ld \n", the_time);
        sleep(2);
    }
    exit(0);
}