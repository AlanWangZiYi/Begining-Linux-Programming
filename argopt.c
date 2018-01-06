#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int opt;

    while((opt = getopt(argc,argv,":if:lr")) != -1)
    {
        switch(opt)
        {
            case 'i': 
            case '1': 
            case 'r': 
                printf("Option: %c\n", opt);
                break;
            case 'f':
                printf("Filename: %s\n", optarg);
                break;
            case ':': 
                printf("Option needs a value\n");
                break;
            case '?': 
                printf("Unknown option: %c\n", optopt);
        }
    }
    for(;optind < argc; optind++)
        printf("argument: %s\n", argv[optind]);
    exit(0);
}