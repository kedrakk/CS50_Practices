#include <stdio.h>

void draw(int count);

int main(void){
    int count=5;
    draw(count);
}

void draw(int count){
    if(count<=0){
        return;
    }
    draw(count-1);
    for(int i=0;i<count;i++)
    {
        printf("*");
    }
    printf("\n");
}