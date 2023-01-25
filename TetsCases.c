
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "Functionality.h"


int main(void)
{
 char output[100];
 memset(output, 0, 100);
 
CreateInformat(4,5,2, output);
 
 assert(strcmp(output,"Range, Readings\n4-5, 2\n") == 0);
  
return 0;
  
}
