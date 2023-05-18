#include<stdio.h>
int main()
{
    float u,c=0;
    printf("Units Consumed:");
    scanf("%f",&u);
    if(u<200)
    {
        printf("\nCost per Unit:1.20");
        c=c*1.20;
        printf("\nBill:%0.2f",c);
    }
    else if(u>=200&&u<400)
    {
        printf("\nCost per Unit:1.40");
        c=c*1.40;
        printf("\nBill:%0.2f",c);
    }
    else if(u>=400&&u<600)
    {
        printf("\nCost per Unit:1.60");
        c=c*1.60;
        printf("\nBill:%0.2f",c);
    }
    else if(u>=600&&u<800)
    {
        printf("\nCost per Unit:1.80");
        c=c*1.80;
        printf("\nBill:%0.2f",c);
    }
    else if(u>=800)
    {
        printf("\nCost per Unit:2.00");
        c=c*2.00;
        printf("\nBill:%0.2f",c);
    }
    if(c>400)
    {
        printf("\nSurcharge:%0.2f",c*0.15);
        c=c+c*0.15;
    }
    else
    {
        printf("\nSurcharge:0.00");
    }
    printf("\nTotal Amount:%0.2f",c);
    
}
