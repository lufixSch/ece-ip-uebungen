// Beispielprogramm
// Bin�rbaum - Baum Ausgabe
// Thomas Messner

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define TREE_ARRAY_SIZE 31 //max number of nodes for the tree_array

struct node
{
  int value;
  struct node *parent;
  struct node *left_child;
  struct node *right_child;
};

struct node *wurzel = NULL;

int tree_array[TREE_ARRAY_SIZE];
//number of spaces each line
int tree_spaces_begin[5] = {30, 14, 6, 2, 0};
int tree_spaces_between[5] = {0, 30, 14, 6, 2};
//lookup table: power of 2
int power[] = {1, 2, 4, 8, 16, 32, 64, 128, 256};

int insertNode(int value);
int searchNode(int value);
int deleteNode(int value);
int printDataSorted();
int debugPrint();
int fillPrintArray(int, struct node *);
int printTree(int);
int destroyTree();

main()
{

  // build tree here

  // print tree - node with value 15 will be highlighted
  printTree(15);
}

void fillPrintArray(int index, struct node *temp_node)
{
  // recursive function:  fills all tree nodes into the array tree_array

  int i;

  //initialize tree_array
  if (index == 0)
    for (i = 0; i < TREE_ARRAY_SIZE; i++)
      tree_array[i] = -1;

  if (temp_node)
  {
    // node present
    if (index < TREE_ARRAY_SIZE)
    {
      tree_array[index] = temp_node->value;
      printf("write number %i to index %i\n", temp_node->value, index);
    }
    //recursive calls
    if (temp_node->left_child)
      fillPrintArray(2 * index + 1, temp_node->left_child);
    if (temp_node->right_child)
      fillPrintArray(2 * index + 2, temp_node->right_child);
  }
}

void printTree(int temp_val)
{
  int i, j, index;
  int start_index;
  int last_index;

  HANDLE hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  // prepare tree_array
  fillPrintArray(0, wurzel);

  SetConsoleTextAttribute(hConsole, 7); // standard colour

  for (i = 0; power[i] < TREE_ARRAY_SIZE; i++)
  {
    // i ... number of row

    // initial spaces of row
    for (j = 0; j < tree_spaces_begin[i]; j++)
      printf(" ");

    //calculate start and last index of row
    start_index = power[i] - 1;
    last_index = power[i + 1] - 2;
    for (index = start_index; index <= last_index; index++)
    {
      if (index < TREE_ARRAY_SIZE) // just print array elements
      {
        // switch colour
        if (tree_array[index] == temp_val)
          SetConsoleTextAttribute(hConsole, 12); // red colour
        else
          SetConsoleTextAttribute(hConsole, 7); // standard colour

        // print value
        if (tree_array[index] < 0)
          printf("  "); // no value to print
        else
          printf("%2i", tree_array[index]); // print value of node

        // print spaces between numbers
        for (j = 0; j < tree_spaces_between[i]; j++)
          printf(" ");
      }
    }
    printf("\n");
  }
  SetConsoleTextAttribute(hConsole, 7); // switch back to standard colour
}