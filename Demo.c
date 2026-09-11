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

// Create variables of different data types
int items = 50;
float cost_per_item = 9.99;
float total_cost = items * cost_per_item;
char currency = '$';

// Print variables
printf("Number of items: %d\n", items);
printf("Cost per item: %.2f %c\n", cost_per_item, currency);
printf("Total cost = %.2f %c\n", total_cost, currency);
return 0;
}
