/*
Arvin Ay-ay
get_path.h
*/
#include "get_path.h"

int pid;
int sh( int argc, char **argv, char **envp);
char *which(char *command, struct pathelement *pathlist);
char *where(char *command, struct pathelement *pathlist);
void list ( char *dir );
void printenv(char **envp);
void checkWildcard(char ** args);
int endsInAmpersand(char **args);
void sigchld_handler(int sig);
void redirectToScreen();
int redirectPosition(char **args);
void checkRedirect(char *redirectSymbol, char *filename, int noclobber);
int ipcPosition(char **args);
void cutArray(char **rightArgs, char **args, int index);

#define PROMPTMAX 32
#define MAXARGS 10
