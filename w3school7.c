#include <stdio.h>

int main(){
    int i;
    for(i=0;i<5;i++){
        printf("%d\n", i);
    }
    //for printing even numbers
    int i1;
    for(i1=0;i1<=10;i1=i1+2){
        printf("%d\n",i1);
    }
    //for sum of numbers
    int sum=0;
    int a;
    for(a=1;a<=5;a++){
        sum=sum+a;
    }
    printf("Sum is %d",sum);
    //for countdown
    int b;
    for(b=5;b>0;b--){
        printf("%d\n",b);
    }

    return 0;

}