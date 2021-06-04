/* ************************************************************
*	FH JOANNEUM - ECE - IP2
*
*   Array Generator
*   generates an randomly filled array with ARRAY_SIZE elements
*
************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 1000000

unsigned long *number_array;

void fillArrayRandomly(unsigned long *sort_array, unsigned long size, unsigned long min_number, unsigned long max_number);
unsigned long *allocArray(unsigned long *array_ptr, unsigned long size);

void main()
{
  number_array = allocArray(number_array, ARRAY_SIZE);

  if (number_array)
  {
    // OK - got memory for the array

    fillArrayRandomly(number_array, ARRAY_SIZE, 0, ARRAY_SIZE);
    for (unsigned long i = 0; i < ARRAY_SIZE; i++)
      printf("%d\n", number_array[i]);
  }
  else
  {
    // ERROR - did not get memory
  }
}

void fillArrayRandomly(unsigned long *sort_array, unsigned long size, unsigned long min_number, unsigned long max_number)
{
  srand(time(NULL));
  for (unsigned long i = 0; i < size; ++i)
  {
    // rand() generates a number between 0 and 32767 (15 bit)
    sort_array[i] = min_number + (((unsigned long)rand() << 15) + rand()) % (max_number + 1);
  }
}

unsigned long *allocArray(unsigned long *array_ptr, unsigned long size)
{
  array_ptr = (unsigned long *)malloc(size * sizeof(unsigned long));
  return array_ptr;
}