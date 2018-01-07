#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main()
{
	char computer[256];
	struct utsname uts;

	if (gethostname(computer, 256) != 0 || uname(&uts) < 0)
	{
		fprintf(stderr, "Could not get host information\n");
		exit(1);
	}

	printf("Coumputer host name id %s\n", computer);
	printf("System is %s on %s hardware\n", uts.sysname, uts.machine);
	printf("Nodename id %s\n", uts.nodename);
	printf("Version is %s, %s\n", uts.release, uts.version);

	getchar();
}