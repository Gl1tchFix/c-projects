// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Változók deklarálása. Mivel mind szám így gyorsabb
    int start, end, tmp, prime;
    
    //Tartomány végpontjainak meghatározása
    printf("Adja meg a tartomány végpontjait: ");
    scanf("%d %d", &start, &end);
    //Rendezéssel megadjuk hogy a tartomány a kissebb értékkel kezdődjön
    if (start > end) {
      tmp = start;
      start = end;
      end = tmp;
    }
   printf("A prím számok %d és %d között: ", start, end);
   while (start < end) {
      prime = 0;

        // 2-nél kissebb számok figyelmen kívül hagyása
        if (start <= 1) {
            start++;
            continue;
        }

        for (int i = 2; i <= start / 2; i++) {
            if (start % i == 0) {
                prime = 1;
                break;
            }
        }
        if (prime == 0)
            printf("%d ", start);
        start++;
    }
        return 0;
}