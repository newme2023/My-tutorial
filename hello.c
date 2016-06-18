#include<stdio.h>
void main()
{
	char reference[]="";//Initialising character array 
	char *input=reference;	//Point to reference  
	int i=0; //counter variable
/*Loop to get input variable*/
	while( input !="\n")
	{
		input[i]=getchar();
		i++;
	}
	printf("%s",input);
}
