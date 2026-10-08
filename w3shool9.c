#include <stdio.h>

int main(){
    int mynum[]={10,50,34};
    printf("%d\n",mynum[0]);
    //size of operator
    printf("%d\n",sizeof(mynum));
    //To find number of elements
    int length=sizeof(mynum)/sizeof(mynum[0]);
    printf("%d\n",length);
    //using for loop
    //int mynum[]={10,50,34};//
    int i;
    for(i=0;i<4;i++){
        printf("%d\n",mynum[i]);
    }
    //to work on any size of an array using length 
    //int mynum[]={10,50,34};//
    //int i;//
    for(i=0;i<length;i++){
        printf("%d\n",mynum[i]);
    }
printf("\\\\Example,avg age:\n");
int ages1[] = {20, 22, 18, 35, 48, 26, 87, 70};

float avg, sum = 0;
//int i;


int length1= sizeof(ages1) / sizeof(ages1[0]);
for (i = 0; i < length1; i++) {
  sum += ages1[i];
}
// Calculate the average by dividing the sum by the length
avg = sum / length1;
// Print the average
printf("The average age is: %.2f\n", avg);

printf("Example,lowest age\n");
  int ages2[] = {20, 22, 18, 35, 48, 26, 87, 70};
  
  //int i;
    int length2 = sizeof(ages2) / sizeof(ages2[0]);
    int lowestAge = ages2[0];

  for (i = 0; i < length2; i++) {
      if (lowestAge > ages2[i]) {
    
      lowestAge = ages2[i];
    }
  }
 
  // Output the value of the lowest age
  printf("The lowest age in the array is: %d\n", lowestAge);

//Multi dimentional array
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  printf("%d\n", matrix[0][2]);

  int matrix1[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i1, j;
  for (i1 = 0; i1 < 2; i1++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix1[i1][j]);
    }
  }
    return 0;
}