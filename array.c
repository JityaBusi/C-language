#include<stdio.h>
int main()
{
	int s,i;
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		printf("address:%d  index:a[%d]----> value:%d\n",&a[i],i,a[i]);
	}
}
