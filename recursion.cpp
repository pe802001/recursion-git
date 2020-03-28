#include<stdio.h>
#include<stdlib.h>
double power(double,int);
int main(void)
{
    printf("power(2,3)=%f",power(2,3));
    
    system("pause");
    return 0;
    }

double power(double base,int n)
{
    if(n==0)
     return 1;
    else
     return (base*power(base,n-1));
    }
