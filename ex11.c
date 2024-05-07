#include <stdio.h>

int main()
{
    int a;
    scanf(" %d", &a);
    if( a > 1969 )
    {
        printf(" dopo il 1969\n");
        printf("anni trascorsi: %d\n" , a-1969);
    }
    else if(a==1969 )
    {
        printf("stesso anno\n");
        
    }
    else
    {
        printf("prima dell 1969\n");
        printf("differenza: %d\n" , 1969-a);
    }
}