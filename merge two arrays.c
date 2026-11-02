#include<stdio.h>
 void merge(char *arr1,char *arr2,char *arr3)
 {
   
    while(*arr1!='\0')
    {
        *arr3=*arr1;
       arr1++;
        arr3++;
    }
    while(*arr2!='\0')
    {
        *arr3=*arr2;
        arr2++;
        arr3++;
    }
    
 }

 int main()
 {
   char size1[50],size2[50],size3[100];
    printf("enter first string");
    scanf("%49s",size1);
     printf("enter second string");
     scanf("%49s",size2);


    {
        merge(size1, size2, size3);
    }

    printf("merged array is %s",size3);
    return 0;
 }