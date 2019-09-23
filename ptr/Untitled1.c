#include<stdio.h>

int fact(int x);
int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x * fact(x-1);

int main()
{
    int a,p;
    printf("take the value for factorial");
    scanf("%d", &a);
    p = fact(a);
    printf("the value is %d", p);
}
