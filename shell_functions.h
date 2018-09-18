#ifndef shell_functions_H_ 
#define shell_functions_H_
#include <stdio.h>
#include <sys/time.h>
#include <string.h>
#include <stdlib.h>

//parser functions
typedef struct parseResult {
    char** parseTokens;
    int tokenAmount;
} parseResult;

parseResult parse();
char** addToken(char** instr, char* tok, int numTokens);
void printTokens(char** instr, int numTokens);

//builtin functions
void exitShell(struct timeval beginTime);

#endif