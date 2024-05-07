#include <stdio.h>


int main() // && and || or (fra tonde) ! not
{
    int a;
    scanf(" %d" , &a);
    if(( a > 18 && a < 30) || ( a > 60 && a < 100 ))
    {
        printf(" hanno lo sconto\n");
    }

}