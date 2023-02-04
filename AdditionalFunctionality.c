#include <stdio.h>
#include <math.h>

#include "Functionality.h"
#define twoToPowerTwelve 4096
#define Converter(x)  ((int)(x*1000)%1000)

int A2DConverter(int LSBValue)
{
  
    float f,ReturnVal;
    
    ReturnVal = (LSBValue/twoToPowerTwelve)*10;
    f = Converter(ReturnVal);
    
    if(f>=500)
    {
        ReturnVal = ceil(ReturnVal);
    }
    else
    {
        ReturnVal = floor(ReturnVal);
    }
    
    return (int)ReturnVal;
  
}
