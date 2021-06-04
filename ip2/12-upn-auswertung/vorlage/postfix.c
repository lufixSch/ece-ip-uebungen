// Titel: Postfix Calculator - Rumpf


#include <stdio.h>
//#include <stdlib.h>
#include "stack.h"

// Seperation of character types from input string
enum Types {DIGIT, DELIMITER, OPERATOR, INVALID};

const char INPUT_STR[ ] = "3,13,4,5,*,+,4,6,+,*,+";

// main
int main(){
    
	int i=0;
	
    printf("\nPostfix Calculator\n");
    printf("Intput to parse: <%s>\n", INPUT_STR);
	
    while (INPUT_STR[i] != '\0')
	{
		printf("got: <%c>\n", INPUT_STR[i]);
		i++;
	}
	
	// testing push
	if (push(i))
		printf("\n PUSH ERROR\n");
	else
		printf("\n PUSH successful\n");
	
	// testing pop
	if (pop(&i))
		printf("\n POP ERROR\n");
	else
		printf("\n POP successful\n");
    
   
    
    return 0;
}
