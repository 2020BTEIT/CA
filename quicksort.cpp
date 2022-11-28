#include<iostream>
using namespace std;
void qSort(int[], int, int);
int breakdown(int[], int, int);
void swapping(int*, int*);
int main()
{
int n,i;
printf("Enter array size:\n");
scanf("%d",&n);
int array[n];

for(i=0;i<n;i++)
{ array[i]=rand();
}
qSort(array,0,n-1);
printf("After QuickSort\n");
for(i=0;i<n;i++)
printf("%d ",array[i]);
printf("\n");
return 0;
}
void qSort(int array[], int start, int end)

{
if(start < end)
{
int pIndex = breakdown(array, start, end);
qSort(array, start, pIndex-1);
qSort(array, pIndex+1, end);
}
}
int breakdown(int array[], int start, int end)
{
int pIndex = start;
int pivot = array[end];
int i;
for(i = start; i < end; i++)
{
if(array[i] < pivot)
{
swapping(&array[i], &array[pIndex]);
pIndex++;
}
}
swapping(&array[end], &array[pIndex]);
return pIndex;
}
void swapping(int *x, int *y)
{
int t = *x;
*x = *y;
*y = t;
}
