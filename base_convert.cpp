#include <stdio.h>
#include <stdlib.h>

int main ()
{
  long int i;
  char buffer [33];
  printf ("Enter a decimal number :\n");
  scanf ("%ld",&i);
  itoa (i,buffer,10);
  printf ("decimal: %s\n",buffer);
  itoa (i,buffer,16);
  printf ("hexadecimal: %s\n",buffer);
  itoa (i,buffer,2);
  printf ("binary: %s\n",buffer);
  return 0;
}
