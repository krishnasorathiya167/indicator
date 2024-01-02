#include<stdio.h>

main()
{
	int a[100],n,i;
	int *p;
	p = &a[100];
	
	printf("Enter Size Of Array = ");
	scanf("%d",&n);
	
	printf("Enter value Of Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nReverse Array Of Pointer : \n");
	
	for(i=n-1;i>=0;i--)
	{
		p = &a[i];
		printf("%d\n",*p);
	}
}