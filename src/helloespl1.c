#include <stdio.h>

#include "espl_lib.h"

int main()
{
	int ch;
	
	do{
		unsigned int number;
		char* word;
		printf("Enter a number: ");
		scanf("%d", &number);
		word =  num_to_words(number);
		printf("%s \n", word);
		printf("Do you want to replay or exit? Enter 1 for replay or 0 for exit: ");
		scanf("%d", &ch);
		} while(ch == 1);
}