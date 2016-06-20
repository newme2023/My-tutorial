#include<stdio.h>
void main()
{
	char string[10];
	char *string2=string;
	int j,string_length=0;
	printf("Enter the the string\n");
	scanf("%s",string2);
	while(string2[string_length]!='\0')
	{
		string_length++;
	}
	printf("\n After String reversal");
	for (j=string_length;j>=0;j--)
        {
                printf("\n%c",string2[j]);
        }
}
