
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "Functionality.h"


int main(void)
{
 
 int current_samples[]={1,1,1,1,1};
 int storecount;
 char output[100];
 memset(output, 0, 100);
 


 
PerformTest(current_samples,LEN(current_samples),1,1,output);
printf("%s", output);
//assert(strcmp(output,"Range, Readings\n10-12, 3\n") == 0);
  
return 0;
  
}
