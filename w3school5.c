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
    //OR
    if(a>b||a>c){
        printf("At least one condition is true\n");
    }
    //NOT
    if(!(b>a)){
        printf("b is NOT grater than a\n\n");
    }
    
    //Example
    bool isLoggedIn=true;                               
    bool isAdmin=false;
    int securityLevel=3;//1 = highest
    if(isLoggedIn && (isAdmin||securityLevel<=2)){
        printf("Access granted\n");
    }else{
        printf("Access denied\n");
    }
    // securityLevel 1 = Access granted
    // securityLevel 2 = Access granted
    // securityLevel 3 = Access denied
    // securityLevel 4 = Access denied
    // If isAdmin = true, access is granted.

    //Real-Life Examples
    int doorCode=1337;
    if(doorCode==1337){
        printf("\nCorrect code.\nThe door is now open.\n\n");
    }
    else{
        printf("Wrong code.\nThe door remains closed.\n\n");
    }
    //Find out if a number is even or odd
    int myNum=5;

    if(myNum%2==0){
        printf("%d is even.\n",myNum);
    }
    else{
        printf("%d is odd.\n",myNum);
    }
    //Check temperature (Celsius)
    int temperature=30;
    if(temperature<0){
        printf("It's freezing!\n");
    }
    else if(temperature<20){
        printf("It's cool.\n");
    }
    else{
        printf("It's warm.\n");
    }

      // Write age here
int age1=19;
  // Write an if statement that checks if age >= 18
if(age1>=18){
  // If true, print "Allowed" inside the if block
printf("Allowd");
}
  // Write an else statement
else{
  // Inside the else block, print "Not allowed"
printf("Not allowd");
}



    return 0;
}