/*Es 14. Scrivere un programma che lancia 100 monete e dice quante volte
 è uscita testa e quante volte è uscita croce.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int moneta=0, testa =0, croce=0;

    srand(time(NULL));

    for(int i=0; i<101; i++){
         moneta = rand() % 2;
         if(moneta==0)
            testa=testa+1;
        else 
            croce=croce+1;
    }

    printf("testa è uscita %d volte, croce è uscita %d volte\n", testa, croce);
    return 0;

}