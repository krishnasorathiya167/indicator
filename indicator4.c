#include<stdio.h>
#include<string.h>
void main()
{
	char name[100];
	char *p;
	int n,i,count=0;
	p=&name;
	
	printf("Enter Of String = ");
	gets(name);
	
	for(i=0;*(p+i)!=NULL;i++)
	{
		count++;	
	}	
	printf("Length Of String Using Pointer = %d",strlen(p));
}