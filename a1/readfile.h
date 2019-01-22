#ifndef READFILE_H
#define READFILE_H
#include "structs.h"

extern void readFile(zipTowns arrs, FILE * infile, int * length); 

void mystrcpy(char * dest, char src[]){
	while ((*dest = *src)) {
		dest++; src++;
	}
}

void readFile(zipTowns arrs, FILE * infile, int * length){
    char buf[sizeof(arrs)]; 
    int index = 0; 
    int i = 0;

  while (fscanf(infile,"%s",buf)==1)
  { 
        city c1; 
        printf("%s\n",buf); 

        if(index==0)
        c1.zip  = atoi(buf);

        if(index == 1)
        mystrcpy(c1.town,buf);

        

        arrs.cities[i] = c1;
        index++;
        i++;

        if(index==2)
        
        index=0;
  }
        
    
        
}

/*
mystrcpy() was taken from an in class example, written by Professor Hardin at Western Michigan University
*/


#endif // last line of file
