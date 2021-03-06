#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define _GUN_SOURCE
#include <getopt.h>

int main(int argc, char* argv[])
{
    int opt;
    struct option longopts[] = {
        {"initialize", 0, NULL, 'i'},
        {"file", 1, NULL, 'f'},
        {"list", 0, NULL, 'l'},
        {"restart", 0, NULL, 'r'},
        {0, 0, 0, 0}
    };

    while((opt = getopt_long(argc, argv, ":if:lr", longopts, NULL)) != -1)
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