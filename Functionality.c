#include <stdio.h>
#include <string.h>
#include "Functionality.h"

#define checkrange(a, low, high)  (a>=low && a<=high)

static void swapelement(int a, int b);

void CreateInformat(int lowLimit,int highLimit,int counter, char* buff)
{
  sprintf(buff,"%s\n%d-%d, %d\n",CSVFormat,lowLimit,highLimit,counter);
}


void doSort(int *A,int len)
{
  int i,j;
 for(i=0;i<len;i++)
 {
   for(j=0;j<(len-i-1);j++)
   { 
    swapelement(A[j],A[j+1]);
   }
 }
}


int CountValue(int *A,int len, int low,int high)
{
int i,cnt = 0;
for(i=0;i<=len;i++)
{
  if(checkrange(A[i], low, high))
  {
      cnt++;
  }
}
  return cnt;
}


 static void swapelement(int a, int b)
 {
   int tmp;
   if(a>b)
   {
      tmp = a;
      a = b;
      b = tmp;
   }
 }

void PerformTest(int *A,int min,int max,char* buff)
{
int storecount;
int len =sizeof(A)/sizeof(A[0]);
doSort(A,len);
storecount = CountValue(A,len,min,max);
CreateInformat(min,max,storecount,buff);
}
