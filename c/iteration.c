#include <stdio.h>

void drawHag(int count);

int main(void)
{
    int count=5;
    drawHag(count);
}

void drawHag(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}