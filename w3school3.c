#include <stdio.h>
#include <stdbool.h>

int main()
{
bool isProgrammingFun=true;
bool isFishTasty=false;

printf("%d\n",isProgrammingFun);
printf("%d\n",isFishTasty);
bool isFishTasty1=true;
printf("%d\n",isProgrammingFun==isFishTasty1);

int x=10;
int y=9;

printf("%d\n",x>y);
printf("%d\n",10==10);
printf("%d\n",15==5);

bool isGreater=x>y;
printf("%d\n",isGreater);
return 0;
}