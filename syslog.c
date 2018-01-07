#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main()
{
	FILE* fp;
	fp = open("not_here", "r");
	if (!fp)
	{
		syslog(LOG_ERR | LOG_USER, "oops - %m\n");
	}
	getchar();
}