#include <stdio.h>
#include <time.h>

int main()
{
  time_t now;
  time(&now);
  printf("The computer thinks the time is %ld\n", now);
  printf("%s", ctime(&now));

  return(0);
}