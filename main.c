#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	struct hostent *host;
	int erro, i, sock, inicio, fim;
	// char hostname[100];
	struct sockaddr_in sa;

	if (argc != 2)
	{
		printf("Usage: epiaknet <IP Address or hostname>\n\n");
		printf("Epiaknet is a simple network tool in order to discovery ports opened.\n\n");
		printf("Example: epiaknet 192.168.0.1\n\n");
		printf("Epiaknet V 0.001 - A network mapper\n");
	}

	return(0);
}
