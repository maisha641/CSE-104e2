#include<stdio.h>
int main()
{
    int a;
    a=10;
    printf("%d\n",a);

    unsigned int b;
    b=-10;
    printf("%u\n",b);

    float c=10.5;//in line declaration
    printf("%0.2f\n",c);

    char d='U';
    printf("The character is %c %d thank you %f very much\n",d,a,c);
    char e='Uap';
    printf("%c\n",e);
}
