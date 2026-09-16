#include <stdio.h>
#include <stdbool.h>

int main(){
    if(20>18)
    printf("20 is greater that 18\n");

    int x=20;
    int y=18;

    bool isGreater=x>y;
    if(isGreater){
        printf("x is greater than y\n");
    }

    //else statement
    int time=20;

    if(time<18){
        printf("Good day\n");
    }
    else
    {
        printf("Good evening.\n");
    }
    //using boolean variable
    bool isDay=time<18;
    if(isDay){
        printf("Good day.");
    }
    else
    {
        printf("Good evening.\n");
    }
    
    //else if statement
    int Time=16;
    if(Time<12){
        printf("Good morning.");
    }
    else if(Time<18){
        printf("Good day.\n");
    }
    else{
        printf("Good evening.");
    }
    //using boolean variables
    bool isMorning=Time<12;
    bool isDay=Time<18;

    if(isMorning){
        printf("Good morning");
    }
    else if(isDay){
        printf("Good day.\n");
    }
    else{
        ("Good evening");
    }


    return 0;
}