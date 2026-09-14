//14-09-2026
#include <stdio.h>

int main(){
  const int BirthYear = 1980;
  printf("Birth Year: %d\n",BirthYear);

//c operators
    int myNum=50+60;
    printf("%d\n",myNum);

    //Arithmetic operators
    int x=10;
    int y=3;

    printf("+: %d\n",x+y);
    printf("-: %d\n",x-y);
    printf("*: %d\n",x*y);
    printf("/: %d\n",x/y);

    int z=5;
    ++z;    //Increment by 1
    printf("++: %d\n",z);
    int s=4; 
    --s;    //Decrement by 1
    printf("--: %d\n",s);
    //Example
    int peopleInroom=0;
    peopleInroom++;
    peopleInroom++;
    peopleInroom++;
    printf("People in room: %d\n",peopleInroom);
    peopleInroom--;
    printf("People in room: %d\n",peopleInroom);

    //assignment operator
    int g=10;
    g += 5; //addtion assignment
    printf("%d\n",g);
    //Example
    int savings=100;
    savings += 50;
    printf("%d\n",savings);


    //comparison operators
    int a=5;
    int b=3;
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    //Example
    int age=18;
    printf("%d\n",age>=18);
    printf("%d\n",age<=18);
    printf("%d\n",age<18);



  return 0;
}