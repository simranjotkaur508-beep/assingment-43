#include<stdio.h>
void movenumbers(int *p,int *q)
{
    if(*p>*q)
    {
        printf("moved numbers are %d %d",*q,*p);
    }
}

int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    movenumbers(&a,&b);
    printf("moved numbers are %d %d",a,b);
    return 0;
}