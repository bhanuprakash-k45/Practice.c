#include <stdio.h>
#include <stdbool.h>

int main()
{
bool isProgrammingFun=true;
bool isFishTasty=false;

printf("%d\n",isProgrammingFun);
printf("%d\n",isFishTasty);
bool isFishTasty1=true;
printf("%d\n",isProgrammingFun==isFishTasty1);

int x=10;
int y=9;

printf("%d\n",x>y);
printf("%d\n",10==10);
printf("%d\n",15==5);

bool isGreater=x>y;
printf("%d\n",isGreater);

int myAge=25;
int votingAge=18;
printf("%d\n",myAge>=votingAge);
if(myAge >= votingAge){
    printf("Old enough to vote!");
}else{
    printf("Not old enough to vote.");
}
  // Declare and assign age
int age=19;
  // Declare and assign minAge
int minAge=18;
  // Print the result of: age >= minAge
printf("%d",age >= minAge);

return 0;
}