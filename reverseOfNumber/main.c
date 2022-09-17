//
//  main.c
//  reverseOfNumber
//
//  Created by Shubham Kumar Singh on 17/09/22.
//

#include <stdio.h>
int main()
{
    int num,ld,rev=0;
    printf("Enter number \n");
    scanf("%d",&num);
    while (num!=0) {
        ld=num%10;
        num=num/10;
        rev=rev*10+ld;
        
        printf("Reverse of a number is %d\n",rev);
    }
}
