#include<stdio.h>
int prime(int);
int main()
{
	int n,i,d1;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		if(prime(i))
		{
			d1=i-n;
			printf("%d\n",i);
			printf("%d",d1);
			break;
		}
	}
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}

if(c==2)
{
	return 1;
}
else
{
	return 0;
}
}
