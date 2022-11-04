#include <stdio.h>
#include <string.h>

int main() {
    //Vizsgált e-mail cím változó a maximális hosszúság egy a feladatban leírt telefonszám átlag hossza. Pl.:(30) 123 45 67
    char phone[15] = "";
    //Telefonszám hosszúság változó
    int charlength;
    //Nem deffiniált karakter számláló
    int wrongChar = 0;
    //Zárójelpár számláló
    int openBracket = 0;
    int closeBracket = 0;
    //Telefonszám megadása és hosszúság érték hozzárendelése
    printf("Adja meg az e-mail címet: ");
    scanf("%[^\n]%n", phone, &charlength);
    for(int i = 0; i < charlength; i++){
        //Jó nyitva hagyni a lehetőséget arra hogy a különböző esetek különböző eredményt adjanak vissza emiatt érdemes itt switch...case-t használni.
        switch (phone[i]) {
          case ' ':
    
            break;
          case '(':
                openBracket++;
            break;
          case ')':
                closeBracket++;
            break;
          case '/':

            break;
            case '-':

            break;
          default:
           if ( isalpha(phone[i]) ) {
               wrongChar++;
           }
           else{
               
           }
        }
    } 
    if(openBracket - closeBracket > 0){
        printf("Egy zárójel bezárás hiányzik!\n");
        wrongChar++;
    }
    else if(openBracket - closeBracket < 0){ 
        printf("Egy zárójel nyitás hiányzik!\n");
        wrongChar++;
    }
    if(wrongChar > 0){
        printf("A telefonszám formátuma nem megfelelő!");
    }
    
    else{
        printf("A telefonszám formátuma megfelelő!");
    }
        
    
}