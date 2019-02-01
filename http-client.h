#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <winsock2.h>

char* ip_from_hostname(char*);
char** parseURL(char*);
SOCKET createSocket(WSADATA*, char*);

char* get(char* url);

#endif // HTTPCLIENT_H
