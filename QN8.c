#include <stdio.h>

int main()
{
    int a[50],b[50],c[100];
    int n1,n2,n,i,j,temp;

    printf("Enter size of first array: ");
    scanf("%d",&n1);

    printf("Enter elements of first array:\n");
    for(i=0; i<n1; i++)
        scanf("%d",&a[i]);
    
    printf("Enter size of second array: ");
    scanf("%d",&n2);

    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    
    /*Merge arrays*/
    for(i=0;i<n1;i++)
        c[i]=a[i];
    for(i=0;i<n2;i++)
        c[n1+i]=b[i];

    n=n1+n2;

    /*Sort merged array*/
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    printf("Sorted merged array:\n");
    for(i=0;i<n;i++)
        printf("%d",c[i]);
    return 0;
}
