#include <stdio.h>
#include <string.h>
#include "Functionality.h"


void CreateInformat(int lowLimit,int highLimit,int counter, char* buff)
{
  
char Data[100];
sprintf(Data,"%s\n%d-%d, %d\n",CSVFormat,lowLimit,highLimit,counter);
strncpy(buff,Data,strlen(Data));
}
