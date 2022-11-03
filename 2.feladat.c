#include <stdio.h>
#include <string.h>

int main() {
    //Vizsgált e-mail cím
    char email[] = "example@example.com";
    //E-mail cím hosszúsága
    int charlength = strlen(email);
    //Az e-mailban szereplő @-ok száma
    int count = 0;
    
    //E-mail cím karaktereinek vizsgálata
       for(int i = 0; i < charlength; i++) {  
        if(email[i] == '@')  
            count++;  
    }  
    //Vizsgálat eredményének feldolgozása
    //Ha az e-mail minden kritériumnak megfelel
    if(count == 1 && email[0] != '@' && email[charlength-1] != '@'){
        printf("Az e-mail cím helyes!");
    }
    //Ha az e-mail egy, vagy több kritériumnak nem felel meg. Fontos meghagyni a lehetőséget több hibaüzenet kiírására a lehető legpontosabb javítás érdekében.
    else{
        
        if(email[0] == '@'){
            printf("Hiba: Az e-mail cím @-al kezdődik!\n");  
        }
        
        if(email[charlength-1] == '@'){
            printf("Hiba: Az e-mail cím @-ra végződik!\n");  
        }
        
        if(count == 0){
            printf("Hiba: Az e-mail cím  nem tartalmaz @-karaktert!\n");  
        }
        
        if(count > 1){
            printf("Hiba: Az e-mail cím  egynél több @ karaktert tartalmaz!\n");  
        }
        
    }
}