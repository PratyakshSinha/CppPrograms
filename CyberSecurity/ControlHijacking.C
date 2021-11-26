#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main(int arg, char **argv){

    volatile int modified;
    char buffer[64];

    modified = 0;
    gets(buffer);

    if(modified != 0)
        {
            printf("You have changed the modified variable to %d\n", modified);
        }
    else
        {
            printf("Try again.\n");
        }
}