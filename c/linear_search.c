#include <stdio.h>

int linear_search(int intArray[],int numberToSearch,int arraySize);

int main(void){
    int intArray[6]={4,2,6,1,5,3};
    int numberToSearch=0;
    int arraySize=sizeof(intArray)/sizeof(intArray[0]);
    int searchOne=linear_search(intArray,numberToSearch,arraySize);
    if(searchOne!=-1){
        printf("Found %i\n",numberToSearch);
    }else{
        printf("Not Found!\n");
    }
}

int linear_search(int arrayToSearch[],int numberToSearch,int arraySize){
    for (int i = 0; i < arraySize; i++)
    {
        if(arrayToSearch[i]==numberToSearch){
            return 1;
        }
    }
    return -1;
}

//! Tip -> select the first element, and compare it with the ajdacent, and search the itme