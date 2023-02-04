#include <stdio.h>
#include <math.h>

#include "Functionality.h"
#define twoToPowerTwelve 4094
#define Max12BitValue 4095

#define Converter(x)  ((int)(x*1000)%1000)

int A2DConverter(int LSBValue)
{
  
    float f,ReturnVal;
    
    ReturnVal = ((float)(LSBValue)*10)/twoToPowerTwelve;
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
int * RemoveUnwanted(int arr[],int len)
{
    static int r[len];
    for(int i=0;i<len;i++)
    {
        if(arr[i]<=4094)
        {   
            r[i] = arr[i];
        }
        else{
           r[i] = Max12BitValue;
          
        }
    }
    return r;
}
