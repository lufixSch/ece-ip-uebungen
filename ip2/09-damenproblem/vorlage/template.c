//----------------------------------------------------------------------------//
//                                                                            //
//  exercise: Ladies Problem                                                  //
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

clock_t time_diff, time_start; // for measuring calculation time
unsigned int n_cnt_collisiontests = 0;
unsigned int n_cnt_removes = 0;

int main()
{
  int n_loopcount;

  time_start = clock(); // getting start time
  printf("\nStart at Time : %f \n", (double)time_start / CLOCKS_PER_SEC);

  // YOUR CODE

  //BEGIN +++++ just for test
  n_cnt_collisiontests = 1;

  for (n_loopcount = 0; n_loopcount < BOARD_SIZE; n_loopcount++)
  {
    printf("   testing row %i\n", n_loopcount);
    n_cnt_collisiontests = n_cnt_collisiontests * 2;
    n_cnt_removes++;
  }
  //END +++++++ just for test

  time_diff = (clock() - time_start); // calculating time difference

  printf("\n");
  printf("counted collisions:   %u\n", n_cnt_collisiontests);
  printf("counted lady removes: %u \n", n_cnt_removes);
  printf("End Time:             %f seconds \n", (double)time_diff / CLOCKS_PER_SEC); // needed time in seconds

  return -1;

} // main