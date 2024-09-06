/*lo renombre por que mi memoria muscular 
siempre escribe lo del gcc con main jeje*/

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define CLEAR printf("\033[0;0H\033[2J");

void ex01();
void ex02();
void ex03();
void ex04();

int main()
{
  ex01();
  ex02();
  ex03();
  ex04();
  return 0;
}

void ex01()
{
  /* Excerice 01:
  Create an array of 10 integers, set their value (whatever you want)
  Using pointer arithmetic and a for loop traverse and print all the array

  DO NOT USE BRACKETS [ ]
  
  Print both the value and the address.
  
  ie
    int array = [ 2 , 3 , 5 , 6]

    array[0] = 2 -> addr = 0x00001
    array[1] = 3 -> addr = 0x00004
    array[2] = 5 -> addr = 0x00008
    array[3] = 6 -> addr = 0x0000B
*/
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int *p_array = array;
  for (int i = 0; i <= 9 ; i++, p_array++)
  {
      printf("array[%d] = %d\t->   addr = %p\n", i , *p_array, p_array);
  }
}

int mylenght(char *s)
{
  char *str = s;
  while(*s != '\0')
  {
    s++;
  }
  return s - str;
}

void ex02()
{
  /* Excercise 02:
  Implement a function mylenght() that returns the size of the passed 
  string (char array). DO NOT USE strlen(), use only pointer arithmetic.

  DO NOT USE BRACKETS [ ]

  TIP: all strings are array of chars, terminated by '\0' character.
*/
  char S[] = "Hola jeje";
  int l = mylenght(S);
  printf("Longitud: %d\n", l);
}

/* More practice excerises (similar to Ex02)

  NOTA :    No utilizar arreglos o corchetes dentro de
            ninguna de las 2 funciones.*/

void toLowerCase(char *s)
{
  while (*s != '\0')
  {
    if (*s >= 'A' && *s <= 'Z')
    {
      (*s = *s + 32);
    }
    s++;
  }
}

void ex03()
{
  char S[] =  "YA NO SE QUE ESCRIBIR";
  toLowerCase(S);
  printf("Minusculas: %s\n", S);

}

  /*Excercise 03
  Implementa una funcion, que reciba por referencia un arreglo,
  recorra este arreglo y cambie cualquier mayuscula a minuscula, 
  el arreglo se debe de imprimir de vuelta en el main  Tip: ASCII table*/

int isBinary(char *s)
{
  while (*s != '\0')
  {
    if (*s != '0' && *s != '1') 
    //Jajaja mi mente por el while se fue a que el 0 tenia que ser \0 y no me salia jsjsjsj
    {
      return 0;
    }
    s++;
  }
  return 1;
}

void ex04()
{
  char S[] = "1001110101";
  if (isBinary(S))
  {
    printf("Es binario\n");
  }
  else 
  {
    printf("No es binario\n");
  }
}
  /*Exercise 04
  Implementa una función isBinary que reciba una cadena de texto de consola
  y determine si está formada exclusivamente por dígitos binarios (0, 1). 
  
*/
