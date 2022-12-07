#include <stdio.h>

void selectionSorting(int arr[],int count);
void printingArray(int arr[],int count);

int main(void)
{
    int originalArr[5]={5,3,4,1,2};
    int count=5;
    selectionSorting(originalArr,count);
    printingArray(originalArr,count);
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSorting(int arr[],int count)
{
    int minIndex;int temp;
    for (int i = 0; i < count-1; i++)
    {
        minIndex=i;
        for (int j = i+1; j < count; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(arr[minIndex]<arr[i]){
            temp=arr[minIndex];
            arr[minIndex]=arr[i];
            arr[i]=temp;
        }
    }
}

void printingArray(int arr[],int count)
{
    printf("Sorted Array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%i ",arr[i]);
    }
    printf("\n");
}