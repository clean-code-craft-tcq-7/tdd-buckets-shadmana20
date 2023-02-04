
#define CSVFormat   "Range, Readings"
void doSort(int *A,int len );
int CountValue(int *A,int len, int low,int high);
void CreateInformat(int lowLimit,int highLimit,int counter, char* buff);
void PerformTest(int *A,int len,int min,int max,char* buff);
#define LEN(A) sizeof(A)/sizeof(A[0])
#define Converter(x)  ((int)(x*1000)%1000)
int A2DConverter(int LSBValue);


