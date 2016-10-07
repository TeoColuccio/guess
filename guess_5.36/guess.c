#include <stdio.h>

#include "guess.h"
#include "random.h"

void guess_init() 
{
  random_init();
}
int guess_extract()
{
  return random_extract(1, 10);
}
char* guess_welcome()
{
  return "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.";
}
char* guess_high()
{
  return "Too high. Try again!";
}
char* guess_low()
{
  return "Too low. Try again!";
}
char* guess_victory()
{
  return "Excellent! You guessed the number!\nWould you like to play again (y or n)?";
}
char* guess_count(int conta)
{
  if (conta < 10) {
    return "Either you know the secret or you got lucky!";
  }
  else if (conta > 10) {
    return "You should be able to do better!";
  }
  else {
    return "Ahah! You know the secret!";
  }
 
  return 0;
}
