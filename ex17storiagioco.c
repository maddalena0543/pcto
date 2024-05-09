#include <stdio.h>
#include <string.h>


int main()
{
    char scelta;
    char scelta1;
    char scelta2;
    char nomeutente[50];
    char risposta[10];

    restart:
    printf("Benvenuto nel gioco!\n");
    printf("Dovrai sceglere tra diverse opzioni per portare avanti la storia, in base alle tue scelte la storia cambierà!\n ");

    printf("Inserisci il tuo Nome\n");

    scanf(" %s" ,nomeutente);
    
   
    printf("Un giorno nella cittadina di Greenhale, oltre la Dark Forest, era stata costruita una casa che a detta dei cittadini era stata infestata molti secoli prima. In quella casa risiedeva la famiglia Blackwood dal 1500, formata dal Signor e la Signora Blackwood e i loro due figli Sabrina e %s . Ma non era una famiglia normale, infatti i loro antenati avevano donato in passato le loro anime al re degli Inferi in cambio della loro partecipazione al Black Circle, un club per sole streghe e stregoni. Un pomeriggio d'estate a casa Blackwood arrivò una lettera da parte del Black Circle, che informava i coniugi Blackwood, che %s era stato \a accettato\a alla Witch Accademy che sarebbe iniziata i primi di settembre. Il primo di settembre %s si trovava nella sua stanza a preparare le valigie per andare nella sua nuova scuola, quando a un certo punto si avvicinò allo specchio e vide che qualcosa era cambiato, la sua figura riflessa si muoveva, così posò la mano sullo specchio e si ritrovò davanti a una porta con su scritto: è leggero come una piuma, eppure nessun uomo anche se robusto non può trattenerlo per più di alcuni minuti, cos’è?\n " , nomeutente, nomeutente , nomeutente);
    printf(" A. il respiro\n B. il vento\n ora scegli tra l'Opzione A e l'Opzione B\n");

    scanf(" %c" , &scelta);

    if(scelta == 'A' || scelta == 'a')
    {
        printf(" %s risolve l'enigma, riesce ad aprire la porta e si ritrova davanti un potente stregone che era stato intrappolato in uno specchio secoli prima. Il potente stregone offre a %s l'opportunità di apprendere magie oscure che erano state vietate a causa delle morti avvenute precedentemente, in cambio della sua anima. %s tenta di fuggire, ma lo stregone lo intrappola nello specchio, e gli dice che lo libererà se risolverà il suo indovinello, che solo le streghe più potenti sono riuscite a risolvere: L'inizio dell'eternità, la fine di ogni fine, l'inizio di un'epoca e la fine di ogni paese...\n" , nomeutente , nomeutente , nomeutente);
        printf("cos'è?\n");
        scanf(" %c" , &scelta1);

        if(scelta1 == 'E' || scelta1 == 'e')
        {
            printf(" liberato %s risolve l'enigma e cerca di tornare nella sua stanza ma mentre fugge viene intrappolato nello specchio. Qui scopre di poter viaggiare attraverso i vari specchi nel mondo e così con l'aiuto di sua sorella riuscirà a sconfiggere sia lo stregone che il re degli Inferi.\n" , nomeutente);
            printf("per creare una nuova storia scrivi RESTART\n ");
        }
        else if( scelta1 != 'E' || scelta1 != 'e')
        {
             printf("Imprigionato %s sbaglia la risposta e cosi lo stregone si impadronisce la sua anima e lo spedisce dal re degli Inferi, per passare un vita eteramente infelice.\n" , nomeutente);
            printf("per creare una nuova storia scrivi RESTART\n ");
        }
    }
    else if( scelta == 'B' || scelta == 'b')
    {
        printf(" %s non risolve l'enigma, torna a casa e decide di prepararsi per andare alla witch accademy sperando di poter trovare tutte le risposte alle sue domande sul perché la sua famiglia aveva venduto l'anima al re degli inferi. Durante la prima notte nella sua nuova scuola %s decide di andare ad esplorarla e scopre che quel luogo era pieno di segreti riguardanti la sua famiglia. Entra in una stanza piena di libri e ad un certo punto dagli scaffali cade un libro con su scritto: se vuoi aprire questo libro questo enigma devi risolvere, la parte di ogni uccello che mai è nel cielo che può solcare gli oceani e rimanere asciutta.\n A. anima\n B. ombra\n" , nomeutente,nomeutente);
        
        scanf(" %c" , &scelta2);

        if(scelta2 == 'A' || scelta2 == 'a')
        {
            printf(" Il libro rimane chiuso e cosi %s  tornerà nella sua stanza, affranto/a senza scoprire il passato e i segreti della sua famiglia.\n" , nomeutente);
            printf("per creare una nuova storia scrivi RESTART\n ");
        }
        else if(scelta2 == 'B' || scelta2 == 'b')
        {
            printf(" Il libro si apre su una pagina con su scritto i misteri della famiglia blackwood. Leggendo %s scopre che sulla sua casa era stata lanciata una maledizione: ogni 50 anni i primi geniti della famiglia sarebbero morti. Così torna dalla sua famiglia e raccontò quel che aveva trovato ad essi, e dopo alcuni giorni riuscirono a spezzare la maledizione solamente  grazie a %s che riusci a sconfiggere il re degli inferi.\n" , nomeutente, nomeutente);
            printf("per creare una nuova storia scrivi RESTART\n ");

        }
        
    }
     scanf(" %s" ,risposta);
    if (strcmp(risposta, "RESTART") == 0 || strcmp(risposta, "restart") == 0)
         {
               goto restart;
         }
    
    

}