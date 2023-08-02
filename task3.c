#include<stdio.h>
int main()
{
    int n=65;
    if(n>=0 && n<=100)
    {
        if(n>=80 && n<=100)
        {
            printf("A+");
        }
        else if(n>=70 && n<=79)
        {
            printf("A");
        }
        else if(n>=60 && n<=69)
        {
            printf("B");
        }
        else if(n>=50 && n<=59)
        {
            printf("C");
        }
        else if(n>=40 && n<=49)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
    }
    else
    {
        printf("Invalid");
    }
}
