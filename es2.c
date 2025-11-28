/*L’utente inserisce la propria età e il programma dice se è maggiorenne
 (ovvero con età maggiore uguale a 18 anni)*/

#include <stdio.h>

int main(){
int età;
printf("inserisci la tua età:");
scanf("%d", &età);
if(età > 18)
    {
        printf("%d è maggiore di 18", età);
    }
    else if (età < 18)
    {
        printf("%d è minore di 18", età);
    }
    else
    printf("%d è uguale a 18", età);

    return 0;
}