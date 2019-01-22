#ifndef READFILE_H
#define READFILE_H
#include "structs.h"
#include <string.h>


extern void readFile(zipTowns arrs, FILE * infile, int * length); 

void mystrcpy(char * dest, char src[]){
	while ((*dest = *src)) {
		dest++; src++;
	}
}
void insertInt(int x, int * A, int length, zipTowns arrs) {
	int j = length-1;
   
	while (j>=0 && A[j] > x) {
		A[j + 1] = A[j];
		j--;
	}
    // if(length!=0)
    if(x!=0){
	A[j + 1] = x;
    }
} 
void insertPointer(city * x, city ** A, int length, zipTowns arrs) {
	int j = length - 1;
	while (j >= 0 && strcmp(arrs.cities[j].town, x->town)>0) {
		A[j + 1] = A[j];
		j--;
	}
	A[j + 1] = x;
}

void readFile(zipTowns arrs, FILE * infile, int * length){
    
    char buf[sizeof(arrs)];  
    int i2 = 0;
    int i = 0;
    

   //struct cityStruct * c1 = (struct cityStruct*)malloc(sizeof(struct cityStruct));  

        city c1; 
        

  while (fscanf(infile,"%s",buf)==1)
  { 
        
        //printf("%s\n",buf); 

        if(i%2==0){ 
       
            c1.zip  = atoi(buf); 
             //printf("%d\n",c1.zip);
        }

        else{ 
          i2++;
            c1.town=buf;  

           arrs.cities[i2-1].town = c1.town;
           arrs.cities[i2].zip = c1.zip;
            if(i2!=0)
           insertInt(c1.zip, arrs.zips, i2, arrs);
          //insertPointer(&c1, arrs.towns, i2, arrs);
           
            
        }    
        
        i++;
    
  }
        //free(c1);
    
        
}

#endif // last line of file
