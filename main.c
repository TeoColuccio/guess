/* Il programma propone il gioco "Indovina il numero".
 * Verra' estratto un numero casuale da 1 a 1000
 * e voi dovrete indovinare. Ovviamente se non indovinate 
 * al primo colpo vi verranno dati dei suggerimenti per 
 * raddrizzare la mira */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int num, guess, scelta = 'y';

  srand(time(NULL));

  do {
    
    num = rand()%1000 + 1; /* Genera il numero casuale */
    
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");

    do {
      scanf("%d", &guess); /* Acquisisce il tentativo dell'utente */
    
      if (guess >= 1 && guess < 1000) { /* Controlla se il numero inserito e' consentito */
        
        if (guess < num) {
          printf("Too low. Try again!\n"); /* Nel caso e' consentito ma troppo basso.. */
        }
        else if (guess > num) {
          printf("Too high. Try again!\n"); /* Nel caso e' consentito ma troppo alto.. */
        }
      } else 
        printf("Il numero non e' consentito!\n"); /* Nel caso non e' consentito  */
    
    } while (guess != num); /* Quando indovini esce dal ciclo */
    
      printf("Excellent! You guessed the number!\nWould you like to play again (y or n)?\n");
      scanf("%d", &scelta); /* Chiede se vuoi rigiocare */
  } while (scelta != 'n'); /* Acquisisce la scelta */

  return 0;
}
