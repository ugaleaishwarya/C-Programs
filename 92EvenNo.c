//Write a C program to print all even numbers between 1 to 100

#include<stdio.h>
void main()
{
    int i;

    printf("Even Numbers 1 to 100 is :\n");

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
