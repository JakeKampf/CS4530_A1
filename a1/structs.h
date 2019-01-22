#ifndef STRUCTS_H
#define STRUCTS_H 

typedef struct cityStruct { 
	unsigned int zip; 
	char * town; 
} city;

typedef struct zipTownsStruct {
	int * zips;		// indexs to main array cities sorted by zip
	city * * towns;	// pointers to main array cities sorted by town name
	city cities[1000];	// main array of cities in order from file not sorted
} zipTowns; 

/*
mystrcpy() was taken from an in class example, written by Professor Hardin at Western Michigan University
*/

#endif
