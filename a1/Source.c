#define _CRT_SECURE_NO_WARNINGS // you can remove this line
#include <stdlib.h>   // For _MAX_PATH definition
#include <stdio.h>
//#include <malloc.h>
#include "structs.h"
#include "readfile.h"
#include "interactive.h"

void getArrs(zipTowns * arrs, int size) {  // mallocs arrays of size elements
	arrs->zips = (int *) malloc(sizeof(int) * size);
	// two more lines
	// zips[0] is an int
	// towns[0] is a (citie *)
	// city[0] is a citie
}

extern int getArgsInfoOpenFile(int argc, char * argv[], FILE * * infile, int * size); // 0 ok, !0 error

int main(int argc, char * argv[]) {
	zipTowns arrs; // all the arrays in one struct
	int length = 0;		// current count of items in arrays 
	char * name = NULL;
	FILE * infile = fopen(argv[1], "r"); 
	
	/*
		make sure file was entered correctly
	*/
	while(!infile){
		printf("Please enter a properly formatted file name. Ex: test.txt\n");
    	scanf("%s", name); 
		FILE * infile = fopen(argv[1], "r");
	}

	int ret=0, size; 
	size = atoi(argv[2]);

	if (getArgsInfoOpenFile(argc, argv, &infile, &size)) {
		printf("error in command line arguments\n");
		ret = -1;
	}

	else {
		getArrs(&arrs, size);
		readFile(arrs, infile, &length);
		fclose(infile);
		doInteractive(arrs, size);
	} // end else no error in command line 
	
	
	return ret;
}

int getArgsInfoOpenFile(int argc, char * argv[], FILE ** infile, int * size) // 0 ok else !0 error
{
	int retval = 0;
	// test for correct arguments number 3: exename, filename, size
	// attempt to open file
	
	// return file and size in parameters or error
	return retval;
}
