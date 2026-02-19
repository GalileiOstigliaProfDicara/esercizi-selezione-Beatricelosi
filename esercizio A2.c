/*Esercizio A2) L’utente deve continuare a inserire dei caratteri
 fino a che non inserisce uno dopo l’altro due caratteri consecutivi 
 (ad esempio si ferma dopo aver letto uno dopo l’altro ‘a’ e ‘b’).*/

 #include <stdio.h>

int main(){

    char primo, secondo;
    printf("inserisci caratteri desiderati, il programma terminera se scrive due caratteri consecutivi come ‘a’ e ‘b’\n");
    scanf(" %c", &primo );
    while(1){
        scanf(" %c", &secondo );
        if(primo=='a' && secondo=='b')
        {
         break;    
        }
         primo=secondo;
        
    }
    printf("Hai inserito 'a' seguito da 'b'!\n");

    return 0;
}
