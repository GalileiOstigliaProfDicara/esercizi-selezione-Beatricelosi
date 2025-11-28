/*Il programma legge due numeri e controlla se il primo è maggiore del secondo.*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("definisci numero 1: \n");
    scanf("%d", &num1);
    printf("definisci numero 2: \n");
    scanf("%d", &num2);
    if(num1 > num2)
    {
        printf("%d è maggiore di %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d è minore di %d", num1, num2);
    }
    else
    printf("%d è uguale a %d", num1, num2);
    return 0;
}