#ifndef READFILE_H
#define READFILE_H
#include "structs.h"

extern void readFile(zipTowns arrs, FILE * infile, int * length);

void readFile(zipTowns arrs, FILE * infile, int * length){
    infile = fopen("test.txt", "r");

    if(infile == NULL){
        printf("file does not exist");
    }
    
    while (fscanf(ptr,"%*s %*s",buf)==1) 
        printf("%s\n", buf); 
  
    
        
}
#endif // last line of file
