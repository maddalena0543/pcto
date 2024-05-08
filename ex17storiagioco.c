#include <stdio.h>


int main()
{
    char scelta;
    char nomeutente[50];
     printf("Benvenuto nel gioco!\n");
     printf("Dovrai sceglere tra diverse opzioni per portare avanti la storia, in base alle tue scelta la storia cambierà!\n ");

     printf("Inserisci il tuo Nome\n");

    scanf(" %s" ,nomeutente);
    
    printf(" Ciao %s iniziamo il racconto" , nomeutente); 
    printf(" inizio del racconto\n");
    
    printf(" ora scegli tra l'Opzione A e l'Opzione B\n");

    scanf(" %c" , &scelta);

    if(scelta == 'A' || scelta == 'a')
    {
        printf("hai scelto l'opzione A, continuo racconto\n");
    
    }
    else if( scelta == 'B' || scelta == 'b')
    {
        printf("hai scelto l'opzione B, continuo testo\n");
    }
    

}