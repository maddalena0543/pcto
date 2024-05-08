#include <stdio.h>


int main()
{
    char scelta;
    char scelta1;
    char scelta2;
    char nomeutente[50];
     printf("Benvenuto nel gioco!\n");
     printf("Dovrai sceglere tra diverse opzioni per portare avanti la storia, in base alle tue scelte la storia cambierà!\n ");

     printf("Inserisci il tuo Nome\n");

    scanf(" %s" ,nomeutente);
    printf(" Ciao %s iniziamo il racconto, sei pronto?\n" , nomeutente); 
    scanf(" %s" ,nomeutente);
   
    printf(" inizio del racconto\n");
    printf(" ora scegli tra l'Opzione A e l'Opzione B\n");

    scanf(" %c" , &scelta);

    if(scelta == 'A' || scelta == 'a')
    {
        printf(" continuo racconto\n");
        
        scanf(" %c" , &scelta1);

        if(scelta1 == 'A' || scelta1 == 'a')
        {
            printf("continuo testo\n");
            printf("per creare una nuova storia scrivi RESTART\n ");
        }
        else if( scelta1 == 'B' || scelta1 == 'b')
        {
            printf(" continuo del testo2\n");
            printf("per creare una nuova storia scrivi RESTART\n ");
        }
    }
    else if( scelta == 'B' || scelta == 'b')
    {
        printf("ontinuo testo\n");
        
        scanf(" %c" , &scelta2);

        if(scelta2 == 'A' || scelta2 == 'a')
        {
            printf(" continuo testo1\n");
            printf("per creare una nuova storia scrivi RESTART\n ");
        }
        else if(scelta2 == 'B' || scelta2 == 'b')
        {
            printf(" continuo testo2\n");
            printf("per creare una nuova storia scrivi RESTART\n ");
        }
    }
    
    

}