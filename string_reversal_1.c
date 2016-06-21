#include<stdio.h>
int main(int argc ,char *argv[])
{
	int j,string_length=0;
	while(argv[1][string_length]!='\0')
	{
		string_length++;
	}
	printf("\n After String reversal\n");
	for (j=string_length;j>=0;j--)
        {
        	printf("%c",argv[1][j]);
        }
	printf("\n");
}
