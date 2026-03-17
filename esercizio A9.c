/*Es 9. Scrivere un programma che letto un numero scrive tutti i suoi divisori*/

 #include <stdio.h>

 int main() {

    int numero, divisore;
    printf("inserire un numero:\n");
    scanf("%d", &numero);
    

    divisore = numero;
    while(divisore != 0) {
        if(numero % divisore == 0)
            printf("il numero %d è un divisore del numero %d\n", divisore, numero);
            divisore = divisore - 1;
    }

return 0;
 }