#include<stdio.h>
int big (int *,int *,int *);
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	big(&a,&b,&c);
}
int big (int *a,int* b,int *c)
{
	if(*a>*b && *a>*c)
	{
		printf("%d is bigger",*a);
	}
	else if(*b>*a && *b>*c)
	{
		printf("%d is bigger",*b);
	}
	else
	{
		printf("%d is bigger",* c);
	}
}
