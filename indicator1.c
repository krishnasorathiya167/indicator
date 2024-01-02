#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter Value A = ");
	scanf("%d",&a);
	
	printf("Enter Value B = ");
	scanf("%d",&b);
	
	int *p1 , *p2;
	
	p1 = &a;
	p2 = &b;
	
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("\n Swapping Value Of A And B :-\n\n");
	
	printf("Value Of A = %u = %d\n",p1,*p1);
	printf("Value Of B = %u = %d",p2,*p2);

}