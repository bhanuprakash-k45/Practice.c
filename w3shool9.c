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


    return 0;
}