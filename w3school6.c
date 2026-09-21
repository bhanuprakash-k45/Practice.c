#include <stdio.h>

int main(){
    int i=0;

    while(i<5){
        printf("%d\n",i);
        i++;
    }
    int countdown=3;
    while (countdown>0){
        printf("%d\n",countdown);
        countdown--;
    }
    printf("Happy New Year!!\n");

    //do while loop
    int i1=0;
    do{
        printf("%d\n",i1);
        i1++;
    }
    while(i1<5);
    //if condtion is false
    int i2=10;
    do{
        printf("i is %d\n",i2);
        i2++;
    }
    while(i2<5);
    //Example
    int number;
    do{
        printf("Enter a positive number: ");
        scanf("%d",&number);
    }
    while(number>0);


    return 0;
}