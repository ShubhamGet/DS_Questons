//
//  main.c
//  MinMaxElementInArray
//
//  Created by Shubham Kumar Singh on 16/09/22.
//
#include<stdio.h>
int main()
{
    int a[10],n,i;
    int max,min;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for (i=0; i<n; i++) {
        if (a[i]>max) {
            max=a[i];
        }
        else if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum value of array is %d\n",max);
    printf("Maximum value of array is %d\n",min);
    return 0;
}
