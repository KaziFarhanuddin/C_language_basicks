// Self calling function or Recursion//
#include <stdio.h>

int fact(int a);

int main()
{
    int a;
    printf("Enter a number :" );
    scanf("%d",&a );
    printf("%d",fact(a) );
}

int fact(int a)
{
    if (a<=1)
        return 1;
    else
        return a*fact(a-1);
}


