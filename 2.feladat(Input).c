#include <stdio.h>
#include <string.h>

int main() {
    //Vizsgált e-mail cím változó
    char email[] = "";
    //E-mail cím hosszúság változó
    int charlength;
    //Az e-mailban szereplő @-ok száma
    int atCount = 0;
    //Az e-mail címben szereplő .-ok száma
    int dotCount = 0;
    //E-mail cím megadása és hosszúság érték hozzárendelése
    printf("Adja meg az e-mail címet: ");
    scanf("%49s%n", email, &charlength); 
    
    //E-mail cím karaktereinek vizsgálata
     for(int i = 0; i < charlength; i++) {  
        if(email[i] == '@')  
            atCount++; 
        if(email[i] == '.')
            dotCount++;
    }  
    //Vizsgálat eredményének feldolgozása
    //Ha az e-mail minden kritériumnak megfelel
    if(atCount == 1 && dotCount > 0 && email[0] != '@' && email[charlength-1] != '@' && email[0] != '.' && email[charlength-1] != '.'){
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
        if(email[0] == '.'){
            printf("Hiba: Az e-mail cím .-tal kezdődik!\n");  
        }
        
        if(email[charlength-1] == '.'){
            printf("Hiba: Az e-mail cím .-ra végződik!\n");  
        }
        
        if(atCount == 0){
            printf("Hiba: Az e-mail cím  nem tartalmaz @-karaktert!\n");  
        }
        
        if(atCount > 1){
            printf("Hiba: Az e-mail cím  egynél több @ karaktert tartalmaz!\n");  
        }
        if(dotCount <= 0){
            printf("Hiba: Az e-mail cím  nem tartalmaz . karaktert!\n");  
        }
        
    }
}