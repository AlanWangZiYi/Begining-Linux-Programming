#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t timeval;

    (void)time(&timeval);
    printf("The data is: %s", ctime(&timeval));
    exit(0);
}