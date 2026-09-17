#include <stdio.h>
#include <stdbool.h>

int main(){
    //Nested if
    int age=20;
    bool isCitizen=true;
    if(age >=18){
        printf("Old enough to vote.\n");

        if(isCitizen){
            printf("And you are a citizen, so you can vote!\n");
        }
        else{
            printf("But you must be a citizen to vote.\n");
        }
    }else{
        printf("Not old enough to vote.\n");
    }

    //logical operators in conditions
    int a=200;
    int b=33;
    int c=500;

    if(a>b&&c>a){
        printf("Both conditions are true\n");
    }


    return 0;
}