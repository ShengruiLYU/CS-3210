#include "types.h"
#include "user.h"
#include "date.h"


int
main(int argc, char *argv[])
{
  struct rtcdate r;

  if (date(&r)) {
    printf(2, "date failed\n");
    exit();
  }

  // your code to print the time in any format you like...
  date(&r);
  printf(1,"%d-%d-%d, %d:%d:%d",r.year,r.month,r.day,r.hour,r.minute,r.second);

  exit();
}