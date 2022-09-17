//
//  main.c
//  palindrome
//
//  Created by Shubham Kumar Singh on 17/09/22.
//

#include <stdio.h>
int main()
{
    int num,rev=0,ld,temp=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while (num!=0) {
        ld=num%10;
        num=num/10;
        rev=rev*10+ld;
        
        if(temp==rev)
        {
            printf("\n Number %d is plindrome ",rev);
        }
        else{
            printf("\n Number %d isn't palindrome ",rev);
        }
    }
}
