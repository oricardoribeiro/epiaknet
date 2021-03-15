#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	system("reset");

	if (argc != 2)
	{
		printf("Epiaknet V 0.0.1 - A network mapper\n");
		printf("Error: Usage - epiaknet <IP Address>\n\n");
	}

	return(0);
}
