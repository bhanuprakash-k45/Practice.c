#include <stdio.h>

int main(){
    int number=2;
    int i;

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }
//code challege Write the for loop here
for(i=1;i<=5;i++){
	printf("%d",i);
}
//break stops the loop when i is equal to 4
for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
    return 0;
}