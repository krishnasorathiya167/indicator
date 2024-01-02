#include<stdio.h>

main()
{
	int a[100],n;
	
	int *p;
	p = &a[100];
	
	printf("Enter Array Size = ");
	scanf("%d",&n);
	
	int i;
	printf("Array Of Element = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nElement OF Array :-\n");
	for(i=0;i<n;i++)
	{
		p = &a[i];
		printf("%d\n",*p);
	}
}