#include<stdio.h>
#include<math.h>
int main()
{
    int n, count=0,sum=0,r,n1;
    printf("enter a number");
    scanf("%d", &n);
    n1=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("number of digit = %d", count);
    n=n1;
    while(n>0)
    {
        r=n%10;
        sum = sum + pow(r,count);
        n=n/10;
    }
    if(sum==n1)
    printf("number is an amstrong number");
    else
    printf("number is not an amstrong number");
    return 0;
}
    
