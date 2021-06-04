//----------------------------------------------------------------------------//
//                                                                            //
//  exercise: Ladies Problem (advanced template)                              //
//                                                                            //
//  Informatik & Programmieren                                                //
//                                                                            //
//----------------------------------------------------------------------------//
//                                                                            //
//  Name: xxxxxxx yyyyyyyyy                                                   //
//  Datum: xx.xx.xxxx                                                         //
//                                                                            //
//----------------------------------------------------------------------------//

#include <stdio.h>
#include <time.h>

#define BOARD_SIZE 28

int trace_depth = 0; // define trace depth

clock_t time_diff, time_start; // for measuring calculation time
unsigned int n_cnt_collisiontests = 0;
unsigned int n_cnt_removes = 0;

int main()
{
  int n_loopcount;

  time_start = clock(); // getting start time

  if (trace_depth >= 0)
    printf("\nStart at Time : %f \n", (double)time_start / CLOCKS_PER_SEC);
  if (trace_depth > 0)
    printf("Board Size: %3d \n\n", BOARD_SIZE);

  // YOUR CODE

  //BEGIN +++++ just for test
  for (n_loopcount = 0; n_loopcount < BOARD_SIZE; n_loopcount++)
  {
    if (trace_depth > 1)
      printf("t2: testing row %i\n", n_loopcount);
    if (trace_depth > 2)
      printf("  t3: collision test\n");
  }
  //END +++++++ just for test

  time_diff = (clock() - time_start); // calculating time difference

  // demonstrate tracing

  if (trace_depth > 0)
    printf("\n");
  if (trace_depth > 0)
    printf("depth 1 traced\n");
  if (trace_depth > 1)
    printf("depth 2 traced\n");
  if (trace_depth > 2)
    printf("depth 3 traced\n");
  if (trace_depth > 3)
    printf("depth 4 traced\n");

  if (trace_depth > 0)
    printf("\n");
  if (trace_depth > 0)
    printf("counted collisions:   %u\n", n_cnt_collisiontests);
  if (trace_depth > 0)
    printf("counted lady removes: %u \n", n_cnt_removes);
  if (trace_depth >= 0)
    printf("End Time:             %f seconds \n", (double)time_diff / CLOCKS_PER_SEC); // needed time in seconds

  return -1;

} // main