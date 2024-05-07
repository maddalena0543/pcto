#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            printf(" triangolo equilatero\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf(" triangolo isoscele\n");
        }
        else
        {
            printf("triangolo scaleno\n");
        }
    }
    else 
    {
        printf("non è un triangolo");
    }
}
