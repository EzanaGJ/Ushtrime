#include <stdio.h>

int main(){

int celsix1 = 0;
int celsix2 = 0;
int celsix3 = 0;
int n;
int piket = 0;
int dalja = 0;

printf("Numri i hedhjeve te topit eshte: ");
scanf("%d", &n);
  
  int i;

  for (i = 0; i < n; i++) {
        if (celsix1 != dalja) {
            celsix1 = dalja;
            piket++;
        } else {
            celsix3 = dalja;
            piket++;
        }

        if (i > 0) {
            if (celsix2 != dalja) {
                celsix2 = dalja;
                piket++;
            }
        }

        if (celsix1 == dalja || celsix2 == dalja || celsix3 == dalja) {
            dalja = 1 - dalja;
        }
    }
     printf("Numri i pikeve te fituara nga hedhjet e topit eshte:%d\n ", piket);
  
  return 0;
}