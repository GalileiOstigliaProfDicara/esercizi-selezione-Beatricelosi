/*Esercizio A5) Il programma deve continuare a lanciare dadi e a scriverne
 il risultato, fermandosi quando esce un sei*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main() {

    srand(time(NULL));
    int numero = 1, min = 1, max = 6;

    while(numero<6){
    numero = rand() % (max - min + 1) + min;
    printf("ti è uscito il numero:%d\n", numero);

    }
    return 0;
 }