#include <stdio.h>
void swap(char *p,char *q)
{
    char i;
    i=*p;
    *p=*q;
    *q=i;
}

int main()
{
   
    char a,b;
    printf("enter two character");
    scanf("%c %c",&a,&b);
    printf("a=%c b=%c\n", a ,b);
    
      swap(&a, &b);
    
    printf("\na=%c b=%c",a,b);
    return 0;
}