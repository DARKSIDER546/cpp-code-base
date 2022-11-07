#include<stdio.h>
int main()
{
    int n;
    int r, sum = 0;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n > 0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    printf("sum of the number is = %d",sum);
}
