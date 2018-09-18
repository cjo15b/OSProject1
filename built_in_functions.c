#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include "shell_functions.h"

//exits shell
void exitShell(struct timeval beginTime)
{
    //needed variables
    struct timeval endTime;
    struct timeval startTime = beginTime;
    double elapsedTime;

    //get end time
    gettimeofday(&endTime, NULL);

    elapsedTime = (endTime.tv_sec - startTime.tv_sec);      // sec to ms
    //elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
    printf("\n%s\n%s%f%s\n", "Exiting...", "Elapsed time: ", elapsedTime, "s");
    exit (0);
}