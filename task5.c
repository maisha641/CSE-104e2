#include<stdio.h>
int main()
{
    int i=0;
    for(;;)
    {
        printf("%d ",i+=2);
        if(i>=66)
        {
            break;
        }
    }
}
