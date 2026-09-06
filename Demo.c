#include <stdio.h>

int main() {
  char a = 65, b = 66, c = 67;
  printf("ASCII value of 65 is %c\n ", a);
  printf("ASCII value of 66 is %c\n", b);
  printf("ASCII value of 67 is %c\n", c);
  



//student data

int studentId=07;
int studentAge=19;
double studentFee=12;
char studentGrade='B';

printf("Student id %i\n",studentId);
printf("student age %i\n",studentAge);
printf("student fee %lf\n",studentFee);
printf("student grade %c\n",studentGrade);
char letter[]="hello world";
printf("hello %s\n",letter);
printf("Hello world\n");
int myInt;
float myFloat;
double myDouble;
char myChar;
printf("%zu\n", sizeof(myInt));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n",sizeof(myDouble));
printf("%zu\n", sizeof(myChar));
return 0;
}