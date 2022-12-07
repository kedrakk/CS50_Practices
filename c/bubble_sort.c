#include <stdio.h>

void bubbleSorting(int arr[],int count);
void printingArray(int arr[],int count);

int main(void)
{
    int originalArr[5]={5,3,4,7,2};
    int count=5;
    bubbleSorting(originalArr,count);
    printingArray(originalArr,count);
}

void bubbleSorting(int arr[],int count)
{
    int temp;
    for (int i = 0; i < count-1; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
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