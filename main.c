#include <stdio.h>
int main() {
    int n_prodotti;
    float prezzo_prodotti, prezzo_finale, sconto10, sconto20,sconto_totale, prezzo_non_scontato, prezzo_scontato;
    printf("Numero di prodotti acquistati: ");
    scanf("%d",&n_prodotti);
    printf("prezzo dei prodotti: ");
    scanf("%f",&prezzo_prodotti);
    prezzo_non_scontato = prezzo_prodotti*n_prodotti;
    printf("prezzo non scontato: %f",prezzo_non_scontato);
    if(prezzo_non_scontato<10) {
        printf("\ntotale: %f",prezzo_non_scontato);
    }else if(10<prezzo_non_scontato<50) {
        prezzo_non_scontato= prezzo_non_scontato-10;
        sconto10 = prezzo_non_scontato*0.10;
        printf("\nsconto: %f",sconto10);
        prezzo_finale = prezzo_non_scontato-sconto10+10;
        printf("\ntotale: %f",prezzo_finale);
    }else if (prezzo_non_scontato > 50) {
            sconto20 = 2;
            sconto10 = (prezzo_non_scontato - 20)*0,10;
            sconto_totale = sconto20 + sconto10;
        printf("il totale non scontato e' di %2f",&prezzo_non_scontato);
        printf("lo sconto e' di %2f",&sconto_totale);
        sconto_totale = prezzo_non_scontato - sconto_totale;
        printf(" il totale scontato e' di %2f",&sconto_totale);
    }
        }