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
	if (argc != 2)
	{
		printf("Usage: epiaknet <IP Address>\n\n");
		printf("Epiaknet is a simple network tool in order to discovery ports opened.\n\n");
		printf("Example: epiaknet 192.168.0.1\n\n");
		printf("Epiaknet V 0.0.1 - A network mapper\n");
	}

	return(0);
}
