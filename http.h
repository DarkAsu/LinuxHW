#ifndef _HTTP_
#define _HTTP_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sendfile.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <assert.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>
#include <sys/wait.h>


#define NORMAL 0
#define WARNING 1
#define FATAL 2

#define SIZE 4096

void Usage(const char* proc);
void print_log(const char* log_msg, int level);
pid_t waitpid(pid_t pid,int *status,int options);
int handle(int fd);
void echo_errno();

#endif