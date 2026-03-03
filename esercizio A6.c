/*Esercizio A6) Il programma genera un numero naturale casuale compreso tra 1 e 10 e
 l’utente deve indovinare il numero generato, il programma termina quando viene indovinato.*/

 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int numero, tentativo = 0;

    numero = rand() % 10 + 1;

    while(tentativo == 0){
        printf("Indovina il numero (1-10): ");
        scanf("%d", &tentativo);

        if(tentativo == numero){
            break;
        }

        tentativo = 0;
    }

    printf("Hai indovinato! Il numero era: %d\n", numero);

    return 0;
}