/*Esercizio A7) Il programma genera un numero naturale casuale compreso tra 1 e 100 e 
l’utente deve indovinare il numero generato, ad ogni tentativo il programma dice se il 
numero inserito era troppo alto o troppo basso; il programma termina quando viene indovinato. 
Se l'utente indovina in meno di 3 tentativi mostrare "Aura", se ci mette tra 4 e 10 
tentativi mostrare "Bravino", altrimento mostrare "Brutto".*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int numero, tentativo = 0, numero_tentativi = 0;

    numero = rand() % 100 + 1;

    while(tentativo == 0){
        printf("indovina il numero compreso fra 1 e 100):\n");
        scanf("%d", &tentativo);
        numero_tentativi = numero_tentativi + 1;

        if(tentativo == numero){
            break;
        }
        else if(tentativo < numero)
          printf("il numero da trovare è più alto\n");
        else
            printf("il numero da trovare è più basso\n");

        tentativo = 0;
    }
    printf("il numero da trovare era: %d\n", numero);
    if(numero_tentativi <= 3)
        printf("aura\n");
    else if(numero_tentativi >= 4 && numero_tentativi <= 10)
        printf("bravino\n");
    else
        printf("brutto\n");

    return 0;
}
