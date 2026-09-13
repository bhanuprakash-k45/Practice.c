//13-09-2026
#include <stdio.h>

int main(){
    int normalInt=1000;
    double normalDouble=3.14;

    short int small=-100;
    unsigned int count=25;
    long int big=1234567890;
    long long int veryBig=36746768467687;
    unsigned long long int huge=54578874341357896U;
    double precise = 3.141592653589793238L;
    
    printf("Normal int: %d\n",normalInt);
    printf("Normal double: %lf\n",normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %.15f\n", precise);

//checking the size of data types
    printf("Size of int: %zu bytes\n",sizeof(int));
    printf("size of double: %zu bytes\n", sizeof(double));
    printf("size of short int: %zu bytes\n", sizeof(short int));
    printf("size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("size of long int: %zu bytes\n", sizeof(long int));
    printf("size of long long int: %zu bytes\n", sizeof(long long int));
    printf("size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("size of long double: %zu bytes\n", sizeof(long double));

//small code challenge by w3schools
    int main() {
  // Write studentID here
int studentID=07;
  // Write score here
float score=64.20;
  // Write grade here
char grade='A';

  // Print studentID
printf("%d\n",studentID);
  // Print score
printf("%f\n",score);
  // Print grade
printf("%c\n",grade);

    return 0;
    
}
