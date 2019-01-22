#ifndef INTERACTIVE_H
#define INTERACTIVE_H

extern void doInteractive(zipTowns arrs, int length);

int searchZip(int x, zipTowns arrs, int length){ 
	int found = -1;
	int top = 1, btm = length, mid; 
   
	while (found == -1 && top <= btm) {
         
		mid = (btm + top) / 2;
		if (arrs.zips[mid] == x) found = mid;
		else if (x < arrs.zips[mid]) btm = mid - 1;
		else top = mid + 1;
	}
    if(found>-1)
    printf("%d ", arrs.zips[mid]);
    return found;

}
int searchTown(char * x, zipTowns arrs, int length){
     	int found = -1;
	int top = 1, btm = length, mid; 
   
	while (found == -1 && top <= btm) {
         
		mid = (btm + top) / 2;
		if (arrs.towns[mid]->town == x) found = mid;
		else if (x < arrs.towns[mid]->town) btm = mid - 1;
		else top = mid + 1;
	}
    return found;
}


void doInteractive(zipTowns arrs, int length){
    int input = 0; 
    char stringInput[100];

   do{ printf("1      Quit\n2      Search for zip\n3      Search for town\n");
    if(scanf("%d", &input) == 1) {
  
    } else {
        printf("Error: not a number.\n");
     input =1;
    }

    if(input==2){ 
        printf("Enter desired zip: ");
         scanf("%d", &input);

        if(searchZip(input, arrs, length)>0){
            printf("found\n"); 
        }
        else{
            printf("not found\n");
        }
    }
    if(input==3){ 
        printf("Enter desired town name: ");
        scanf("%s",stringInput);
        if(searchTown(stringInput, arrs, length)>-1){
            printf("found\n");
        }
        else{
            printf("not found\n");
        }
    }
   }while(input!=1);
} 

#endif // last line of file
