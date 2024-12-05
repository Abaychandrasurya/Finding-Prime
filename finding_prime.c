#include<stdio.h>
int main()
{
    int m,n,i,j,flag=0;
    printf("enter the start range:");
    scanf("%d",&m);
    printf("enter the upto range:");
    scanf("%d",&n);
    for(j=m;j<=n;j++)
    {
        flag=0;
        for(i=2;i*i<=j;i++)
        {
          if(j%i==0)
          {
            flag=1;
            break;
          }
        if(flag=1)
        printf("%d\t",j);
        }
    }
}

