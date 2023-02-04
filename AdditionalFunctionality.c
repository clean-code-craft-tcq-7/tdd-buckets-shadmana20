#include <stdio.h>
#include <math.h>
#define twoToPowerTwelve 4096

int A2DConverter(int LSBValue)
{
  
    float f,ReturnVal = 0;
    
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
