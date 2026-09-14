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
    
    //logical operators
    int isLoggedIn=1;
    int isAdmin=0;
    printf("regular user: %d\n",isLoggedIn && isAdmin);
    printf("has acess: %d\n",isLoggedIn || isAdmin);
    printf("not lofffed in: %d\n", !isLoggedIn);

    //operator Precedence
    int result1=2+3*4;
    int result2=(2+3)*4;
    printf("%d\n",result1);
    printf("%d\n",result2);
    /*
    () - Parentheses
    *, /, % - Multiplication, Division, Modulus
    +, - - Addition, Subtraction
    >, <, >=, <= - Comparison
    ==, != - Equality
    && - Logical AND
    || - Logical OR
    = - Assignment 
    */



  return 0;
}