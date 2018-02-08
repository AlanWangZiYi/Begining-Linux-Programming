#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

#define PASSWORD_LEN 8

int main()
{
	struct termios initsetting, newsetting;
	char password[PASSWORD_LEN+1];

	tcgetattr(fileno(stdin), &initsetting);
	newsetting = initsetting;
	newsetting.c_lflag &= ~ECHO;

	printf("Enter password: ");
	if (tcsetattr(fileno(stdin), TCSAFLUSH, &newsetting) != 0)
		fprintf(stderr, "Could not see attributes\n");
	else
	{
		fgets(password, PASSWORD_LEN, stdin);
		tcsetattr(fileno(stdin), TCSAFLUSH, &initsetting);
		fprintf(stdout, "\nYou entered %s\n", password);
	}
	getchar();
}