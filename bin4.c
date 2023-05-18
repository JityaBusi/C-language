#include<stdio.h>
int bin(int *a,int n,int s)
{
	int l=0,h=n-1;
	if(l<=h)
	{
		int m=(l+h)/2;
		if(s==a[m]) return m;
		else if(s>a[m])
		l=m+1;
		else if(s<a[m])
		h=m-1;
		return -1;
	}	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s;
	scanf("%d",&s);
	int r=bin(a,n,s);
	if(r==-1)
	printf("element not found");
	else
	{
		printf("element found at %d index",r);
	}
}
