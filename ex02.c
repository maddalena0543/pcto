#include <stdio.h>


int main()
{
//variabili//

int a;
int b;
float c = 2.545764; // 6 numeri con la virgola massimo 
float d = 3.7898;
double e =8.7644654564; 
double f = 2.67557645343;// numeri virgola massimo 15 numeri dopo la virgola massimo

a=83;
b =45;
printf("somma: %d\n" , a+b);
printf("differenza: %d\n" , a-b);
printf("divisione: %d\n" , a/b);
printf("moltiplicazione: %d\n" , a*b);

printf("somma: %f\n" , c+d);
printf("differenza: %f\n" , c-d);
printf("divisione: %f\n" , c/d);
printf("moltiplicazione: %f\n" , c*d);

printf("somma: %lf\n" , e+f);
printf("differnza: %lf\n" , e-f);

}