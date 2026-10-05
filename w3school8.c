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
//stop the loop completely.
for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
//skip this round, but keep looping.
for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
//Example
int myNumbers[] = {3, -1, 7, 0, 9};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);


for (i = 0; i < length; i++) {
  if (myNumbers[i] < 0) {
    continue; // skip negative numbers
  }
  if (myNumbers[i] == 0) {
    break; // stop loop when zero is found
  }
  printf("%d\n", myNumbers[i]);
}
    return 0;
}