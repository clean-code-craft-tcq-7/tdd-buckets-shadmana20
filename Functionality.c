#include <stdio.h>
void doSort(int *A ,int len);
int CountValue(int *A,int low,int high);
int main()
{  
    int A[] = {1,2,3,3,5,4,10,11,12};
    int len = sizeof(A) /sizeof(A[0]);
    doSort(A,len);
    int cnt = CountValue(A,10,12);
    printf("%d ",cnt);
    return 0;
} 
int CountValue(int *A,int low,int high)
{
    int cnt = 1;
    for(int i=low;i<=high;i++)
    {
        if(A[i]==low || A[i]<=high)
        {
            cnt++;
        }
    }
    return cnt;
}  void doSort(int *A,int len )
{
    //int len = sizeof(A[0]/A);
    int tmp;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<(len-i-1);j++)
        {
            if(A[j]>A[j+1])
            {
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }
}

[Yesterday 5:13 PM] Maigur Kallappa Gundappa (MS/ESA-PP2-CC)
Hi


