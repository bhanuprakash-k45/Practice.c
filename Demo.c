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

  int normalInt = 1000;                       // standard int 
double normalDouble = 3.14;                 // standard double

short int small = -100;                     // smaller int
unsigned int count = 25;                    // only positive int
long int big = 1234567890;                  // larger int
long long int veryBig = 9223372036854775807; // very large int
unsigned long long int huge = 18446744073709551615U; // very large, only positive
long double precise = 3.141592653589793238L; // extended precision

printf("Normal int: %d\n", normalInt);
printf("Normal double: %lf\n", normalDouble);
printf("Small: %hd\n", small);
printf("Count: %u\n", count);
printf("Big: %ld\n", big);
printf("Very Big: %lld\n", veryBig);
printf("Huge: %llu\n", huge);
printf("Precise: %Lf\n", precise);
return 0;
}
