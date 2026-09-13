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
    return 0;
    
}
