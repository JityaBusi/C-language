#include<stdio.h>
int main()
{
    int min,n,i;
    int a[n];
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            printf("%d",a[0]);
        }
        else
        {
            min=a[i];
        }
    }
}
