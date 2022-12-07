#include <stdio.h>
#include <string.h>

typedef struct person
{
    char* name;
    char* phonenumber;
}person;


int main(void)
{
    person people[2];
    people[0].name="Erling";
    people[0].phonenumber="+959123456789";
    people[1].name="Martin";
    people[1].phonenumber="+959123456788";

    char* nameToSearch="Erling";

    for (int i = 0; i < 2; i++)
    {
        if(people[i].name==nameToSearch){
            printf("Found %s\n",people[i].name);
            return 0;
        }
    }
    printf("Not Found!\n");
}