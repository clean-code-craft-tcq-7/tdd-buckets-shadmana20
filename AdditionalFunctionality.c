#include <stdio.h>
#include <math.h>

#include "Functionality.h"
#define twoToPowerTwelve 4094
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
int * RemoveUnwanted(int arr[])
{
    static int r[7];
    for(int i=0;i<7;i++)
    {
        if(arr[i]<=4094)
        {   
            r[i] = arr[i];
        }
        else{
           r[i] = 4095;
          
        }
    }
    return r;
}
