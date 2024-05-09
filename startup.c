#include <stdio.h>
#include <string.h>


int main()
{
    int risposta0;
    int somma = 0;
    int somma1 = 0;
    int somma2 = 0;
    int a =0;

    while (a == 0)
    {
    
    

    printf("Ad ogni domanda inserisci un punteggio compreso fra 0 e 3, 0=per niente, 1 = poco, 2 = abbastanza 3= molto\n ");
        printf("Mi confondono grafici e diagrammi che non sono accompagnati da spiegazioni scritte\n");
    
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Preferisco imparare leggendo un libro piuttosto che ascoltando una lezione\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Capisco meglio le istruzioni di un compito se mi sono presentate per iscritto\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Prendo appunti durante le spiegazioni dell'insegnante e le discussioni in classe e li rileggo poi per conto mio\n ");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf(" Quando studio su un libro prendo appunti o faccio riassunti\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Mi risulta difficile capire un termine o un concetto se non mi vengono dati degli esempi\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Quando studio su un libro imparo di più guardando figure, grafici e mappe piuttosto che leggendo il testo scritto\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Quando leggo un testo mi creo mentalmente delle immagini sulla storia, i personaggi o le idee\n ");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Mi risulta più facile ricordare figure e illustrazioni in un libro se sono stampate a colori vivaci\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Per capire un testo che sto studiando mi aiuto facendo disegni e diagrammi\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Capisco meglio un argomento parlandone o discutendone con qualcuno piuttosto che soltanto leggendo un testo\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Riesco facilmente a seguire qualcuno che parla anche se non lo guardo in faccia\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Capisco meglio le istruzioni di un compito se mi vengono spiegate a voce e non soltanto fornite pe riscritto\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Quando studio mi concentro di più se leggo o ripeto ad alta voce\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;


        printf("Preferisco imparare vedendo e ascoltando un video piuttoisto che leggendo un libri\n ");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;
        
        printf("Quando studio, se sottolineo o evidenzio parole e frasi mi concentro di più\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Ricordo meglio un argomento se posso fare un esperienza diretta, per esempio facendo un esperimenti di laboratorio\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Durante una lezione o una discussione scrivere o disegnare qualcosa mi aiuta a concentrarmi\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Quando studio ho bisogno di pause frequeti e movimento\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("Non mi piace leggere o ascoltare le istruzioni per un compito; preferirei cominciare subito\n");
        scanf(" %d" , &risposta0);
        somma = somma + risposta0;

        printf("il tuo punteggio è: %d\n" , somma);

        if(somma>45)
        {
        printf("hai un metodo di studio visivo-verbale\n");
        }
        else if(somma>30 && somma<46)
        {
            printf("hai un metodo di studio visivo non verbale\n");
        }
        else if (somma>15 && somma <31)

        {
            printf("hai un metodo di studio uditivo\n");
        }
        else
        {
            printf("hai un metodo di studio cinestetico\n");
        }

        printf("esegui la seconda parte del questionario, rispondewndo sempre alle domande con 0, 1, 2, 3,\n");

        printf("Preferisco i lavori da svolgere passo per passo, completando un compito prima di completare il successivo\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Se devo raccontare o referire qualcosa mi soffermo molto sui dettagli\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Organizzo il mio tempo, sia nello studio che nelle altre attività\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Preferisco gli esercizi con una sola soluzione o risposta piuttosto che gli esercizi più aperti e creativi\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Preferisco che una regola o una teoria mi venga chiaramente spiegata prima di applicarla in esempi ed esercizi\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Mi piace lavorare senza pianificare tutto all'inizio, ma aggiustando il tiro man man che procede\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Sono soddisfatto se di un argomento capisco le idee generali, senza considerare i particolari\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Imparo meglio se parto da una visione generale dell'insieme piuttosto che da dettagli specifici\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Mi risulta abbastanza facile sintetizzare ciò che è stato detto in una discussione\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("Se devo decidere se qualcosa è giusto o corretto, mi baso più sull'istinto che sulla logica\n");
        scanf(" %d" , &risposta0);
        somma1 = somma1 + risposta0;

        printf("il tuo punteggio è: %d\n" , somma1);

        if(somma1>15)
        {
        printf("hai un metodo di studio analitico\n");
        }
        else
        {
            printf("hai un metodo di studio globale\n");
        }


        printf("Esegui la terza parte del questionario\n");

        printf("Preferisco che l'insegnante ci assegni lavori che ognuno di noi possa poi svolgere come preferisce\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Se si deve lavorare a gruppi, preferisco che sia l'insegnante a decidere come formare i gruppi\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Imparo e ricordo di più quando studio da solo\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Quando in classe lavoro con un compagno o in gruppo ho la senzazione di perdere tempo\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Imparo di più a casa che in classe\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Mi piace lavorare in gruppo\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("In unn lavoro di gruppo preferisco che l'insegnante ci lasci liberi di distribuirci i compiti all'interno del gruppo\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Alla fine di un lavoro di gruppo mi sento di avere imparato di più che se avessi lavorato da solo\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Imparo di più durante le lezioni in classe che studiando a casa\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;

        printf("Se un compito deve essere svolto a gruppi, preferisco che siano gli studenti stessi a decidere come formare i gruppi\n");
        scanf(" %d" , &risposta0);
        somma2 = somma2 + risposta0;


        printf("il tuo punteggio è: %d\n" , somma2);

        if(somma2>15)
        {
        printf("hai un metodo di studio individuale\n");
        }
        else
        {
            printf("hai un metodo di studio di gruppo\n");
        }

        printf("vuoi rifare il questionario?\n");
        scanf(" %d\n"  , somma);
        
    }


}