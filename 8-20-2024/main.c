#include <stdio.h>
#define CLEAR printf("\033[0;0H\033[2J");
/* Excercise 1 : swap
  Create a function that "swaps" the contents of two variables.
  It should receive two intengers, return nothing and after it execution
  whatever what inside one variable should be inside the other and viceversa   
*/
void swap(int *x, int *y);

/* Excercise 2 : blackjack
Create a blackjack function that:
  -receives 2 numbers and a FLAG (char)
  -returns 1 of the sum of the numbers is positive (greater than 0).
  -returns 0 if the sum of the numbers is negative.
  -Stores the sum of the two numbers in number2.
  -If the sum is 21, set the FLAG to = 'W' (winner)

   IN  IN/OUT  OUT
 (num1, num2, flag)
*/
int blackjack(int *x, int *y, char *c);

int main()
{
  CLEAR
  /* Exercise 1:  swap num1 and num2 value */
  int num1 = 10;
  int num2 = 20;
  swap(&num1, &num2);
  printf("Valores ya cambiados de num1: %d y de num2: %d\n", num1, num2);

  /* Exercise 2:  Blackjack 
    Call and test your program here */
  int x, y; 
  char c = 'w';
  printf("Cual es tu valor de tus carta? \nx: ");
  scanf("%d", x);
  printf("\ny: ");
  scanf("%d", y);
  blackjack(&x, &y, &c);
  return 0;
}

void swap(int *x, int *y)
{
  *x = *x + *y;   //30=10+20
  *y = *x - *y;   //10=30-20
  *x = *x - *y;   //20=30-10
}

int blackjack(int *x, int *y, char *c)
{
  int x, y; 
  char c;
  if (*y = 21 - *x) 
  {
    return 0;
  }
  else 
  {
    return 1;
  }//aun no lo termino
}