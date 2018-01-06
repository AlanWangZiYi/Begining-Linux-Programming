#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tmpname[L_tmpnam];
    char* filename;
    FILE* tmpfp;

//    filename = (char*)mkstemp(tmpname);
    mkstemp(tmpname, );
    printf("Temporary file name is: %s\n", filename);
    tmpfp = tmpfile();
    if(tmpfp)
        printf("Open OK\n");
    else
        perror("tmpfile");

    exit(0);
}