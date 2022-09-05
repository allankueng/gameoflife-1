#include <stdlib.h>
#include <string.h>
#include <stdio.h>


// a function to display an error message and then exit
void fatal(const char* message){
    char error_message[100];
    strcpy(error_message, "[!!] fatal error ");
    strncat(error_message, message, 83);
    perror(error_message);
    exit(-1);
}

// an error-checked malloc() wrapper function
void* ec_malloc(unsigned int size){
    void* ptr = malloc(size);
    if(ptr == NULL){
        fatal("in ec_malloc() on memory allocation");
    }
    return ptr;
}

// comment