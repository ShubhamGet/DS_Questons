//
//  main.c
//  countnumber
//
//  Created by Shubham Kumar Singh on 17/09/22.
//

#include <stdio.h>
int main()
{
    int num,count=0;
    printf("Enter number\n");
    scanf("%d",&num);
    while (num!=0) {
        count=count+1;
        num=num/10;
        printf("Total number is %d\n",count);
    }
    return 0;
}
