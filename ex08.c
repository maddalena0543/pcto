#include <stdio.h>


int main()
{
    int anni;
    int b;

    b=18;
    scanf(" %d" , &anni);
    if( anni > b )
    {
        printf("è maggiorenne\n");
    }
    else if(anni == b)
    {
        printf("ha 18 anni\n");
    }
    else
    {
        printf(" è minorenne\n");
    }
}