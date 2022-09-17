//
//  main.c
//  AramStromnumber
//
//  Created by Shubham Kumar Singh on 17/09/22.
//

#include <stdio.h>
int main()
{
    int num,ld,sum,temp=0;
    printf("Enter number\n");
    scanf("%d",&num);
    temp=num;
    while (num!=0) {
        ld=num%10;
        num=num/10;
        sum=sum+ld*ld*ld;
        
        if(temp==sum)
        {
            printf("Number %d is palindrome ",sum);
        }
        else
        {
            printf("Number %d isn't palindrome ",sum);
        }
    }
    return 0;
}
