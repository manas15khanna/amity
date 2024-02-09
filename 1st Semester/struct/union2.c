#include <stdio.h>
enum months{jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
int main()
{
  for (int i=jan; i<=dec; i++) 
  {
    printf("%d ", i);
  }
  printf("\n");
}
