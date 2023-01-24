#include <stdio.h>
#include <string.h>
#include "Functionality.h"

void createFormat(void)
{
sprintf(Data,"%s\n%d-%d, %d\n",CSVFormat,lowLimit,highLimit,counter);
strncpy(buff,Data,strlen(Data));
}
