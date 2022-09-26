#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

FILE* inptr;
FILE* outptr;

	
//get name of input file and store in a string

printf("please enter the name of the input file \n");

char input[32];

scanf("%s", input);




//get name of output file and store in a string
printf(" \nplease enter the name of the output file \n");

char output[32];

scanf("%s", output);




//ensure both files are oppened correctly 

inptr = fopen(input, "r");

if(inptr == NULL){
	printf("Couldn't open file, aborting \n");
	exit(1);

}


outptr = fopen(output, "w");

if(outptr == NULL){
	printf("Couldn't open file, aborting \n");
	exit(1);

}



//get the starting or next character in the input file, 
//copy it to the output file, and repeat until the end of the input file

char c = fgetc(inptr);

	while(c != EOF){

	fputc(c, outptr);
	c = fgetc(inptr);

}







//close both files


fclose(inptr);

fclose(outptr);




return 0;

}
