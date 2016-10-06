/* Il programma propone il gioco "Indovina il numero".
 * Verra' estratto un numero casuale da 1 a 1000
 * e voi dovrete indovinare. Ovviamente se non indovinate 
 * al primo colpo vi verranno dati dei suggerimenti per 
 * raddrizzare la mira */

#include <stdio.h>

#include "guess.h"

int main() {

  int num, guess, scelta = 'y';

  guess_init();

  do {
       
    printf("%s\n", guess_welcome());
    num = guess_extract();

    do {
      scanf("%d", &guess); /* Acquisisce il tentativo dell'utente */
    
      if (guess >= 1 && guess < 1000) { /* Controlla se il numero inserito e' consentito */
        
        if (guess < num) {
          printf("%s\n", guess_low());
        }
        else if (guess > num) {
          printf("%s\n", guess_high()); 
        }
      } else 
        printf("Il numero non e' consentito!\n"); /* Nel caso non e' consentito  */
    
    } while (guess != num); /* Quando indovini esce dal ciclo */
    
      printf("%s\n", guess_victory());
      scanf("%d", &scelta); /* Chiede se vuoi rigiocare */
  } while (scelta != 'n'); /* Acquisisce la scelta */

  return 0;
}
