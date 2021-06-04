/* ************************************************************
*	FH JOANNEUM - ECE - IP2
*
*   Array Generator
*   generates an randomly filled array with approximately ARRAY_SIZE elements without duplicates
*
************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARRAY_SIZE ((unsigned long)(100000 / 0.987))

unsigned long *number_array;
unsigned long *sorted_array;
FILE *my_file;

void fillArrayRandomly(unsigned long *sort_array, unsigned long size, unsigned long min_number, unsigned long max_number);
unsigned long *allocArray(unsigned long *array_ptr, unsigned long size);
static int compareInt(const void *i1, const void *i2);
unsigned long removeDuplicates(unsigned long *number_array, unsigned long *sorted_array, unsigned long array_size);
void radixSort(long sort_array[], size_t array_size);

int main()
{
  unsigned long new_size;
  unsigned long min_number;
  unsigned long max_number;

  printf("allocating memory ...\n");
  number_array = allocArray(number_array, ARRAY_SIZE);
  sorted_array = allocArray(sorted_array, ARRAY_SIZE);
  if ((number_array == NULL) || (sorted_array == NULL))
  {
    printf("Fehler beim Allokieren des Speichers ");
    return 1;
  }

  my_file = fopen("DataWODuplicates.csv", "w");
  if (my_file == NULL)
  {
    printf("Fehler beim oeffnen der Datei.");
    return 1;
  }

  min_number = 0;
  max_number = 20 * ARRAY_SIZE;

  printf("generating %ld random numbers (min=%ld, max=%ld)...\n", ARRAY_SIZE, min_number, max_number);
  fillArrayRandomly(number_array, ARRAY_SIZE, min_number, max_number);

  memcpy(sorted_array, number_array, ARRAY_SIZE * sizeof(unsigned long));

  printf("sorting %ld numbers ...\n", ARRAY_SIZE);
  //qsort(number_array, ARRAY_SIZE, sizeof(unsigned long), compareInt);
  radixSort((long *)sorted_array, ARRAY_SIZE);

  printf("removing duplicates ...\n", ARRAY_SIZE);
  new_size = removeDuplicates(number_array, sorted_array, ARRAY_SIZE);
  printf("reduced size of array from %ld to %ld (%3.1f%%) (due to duplicates)\n", ARRAY_SIZE, new_size, ((float)new_size / ARRAY_SIZE) * 100);
  free(sorted_array);

  // ************************************ INFO ********************************************
  // this is the generated array :
  // number_array ... array
  // new_size ... number of elements

  printf("writing file ...\n");
  for (unsigned long i = 0; i < new_size; i++)
    fprintf(my_file, "%ld,\n", number_array[i]);

  printf("array ready to use ...\n");

  // you can use the generated array now ***************************************************
  // Array name: number_array
  // number of elements: new_size
  //****************************************************************************************

  free(number_array);

  fclose(my_file);
  return 0;
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

static int compareInt(const void *i1, const void *i2)
{
  //will be needed in qsort
  return *(int *)i1 - *(int *)i2;
}

unsigned long removeDuplicates(unsigned long *number_array, unsigned long *sorted_array, unsigned long array_size)
{
  unsigned long i = array_size, j = 0;
  unsigned long number_to_delete;
  unsigned long del_pos;

  while (j < (array_size - 1))
  {
    j++;
    if (sorted_array[j - 1] == sorted_array[j])
    {
      i--;
      //sorted_array[j] kommt mehrfach vor
      number_to_delete = sorted_array[j];
      printf("DUP: %ld\n", number_to_delete);
      // suche number_to_delete

      for (del_pos = 0; del_pos < array_size; del_pos++)
      {
        if (number_array[del_pos] == number_to_delete)
          break;
      }

      // lösche number_to_delete
      for (unsigned long indx = del_pos; indx < array_size; indx++)
        number_array[indx] = number_array[indx + 1];
    }
  }

  //printf("FERTIG - %d, %d\n", i, j);

  return i;
}

#define CHAR_BIT 8
#define R (1 << CHAR_BIT)
#define MASK ((1 << CHAR_BIT) - 1)

void radixSort(long sort_array[], size_t array_size)
{
  long *aux_array = malloc(array_size * sizeof(long));
  if (aux_array == NULL)
  {
    printf("Error: Out of memory\n");
    exit(1);
  }

  for (long d = 0; d < sizeof(long); d++)
  {
    // compute frequency counts
    long *count = calloc(R + 1, sizeof(long));
    if (count == NULL)
    {
      printf("Error: Out of memory\n");
      exit(1);
    }

    for (long i = 0; i < array_size; ++i)
    {
      long c = (sort_array[i] >> CHAR_BIT * d) & MASK;
      ++count[c + 1];
    }

    // compute cumulates
    for (long r = 0; r < R; ++r)
      count[r + 1] += count[r];

    // for most significant byte, 0x80-0xFF comes before 0x00-0x7F
    if (d == sizeof(long) - 1)
    {
      long shift1 = count[R] - count[R / 2];
      long shift2 = count[R / 2];
      for (long r = 0; r < R / 2; ++r)
        count[r] += shift1;
      for (long r = R / 2; r < R; ++r)
        count[r] -= shift2;
    }

    // move data
    for (long i = 0; i < array_size; ++i)
    {
      long c = (sort_array[i] >> CHAR_BIT * d) & MASK;
      aux_array[count[c]++] = sort_array[i];
    }

    // copy back
    memcpy(sort_array, aux_array, array_size * sizeof(long));

    free(count);
  }

  free(aux_array);
}