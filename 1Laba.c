#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
int pid = 0;

void p(){

    int childpid = 0; 
    while(1){
        pid = fork();
        if (pid < 0) {
        p();
        } else if (pid > 0) {
            p();
        } else {
        p();
        }
    }
}

int main () {
    p();
    return 0; 
}