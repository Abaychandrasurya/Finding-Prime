#include<stdio.h>
int main()
{
    long int n,i,d=0;
    printf("enter the number:");
    scanf("%ld",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        d++;
    }
    if(d!=0)
    printf("not prime");
    else
    printf("prime");
}

