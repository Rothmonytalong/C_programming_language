//
//  main.c
//  Program_1
//
//  Created by Rothmonyta Long on 3/31/20.
//  Copyright © 2020 Rothmonyta Long. All rights reserved.
//
/**********************************************************************
  Author:         Rothmonta Long
  Date:            04/03/2020
  Purpose:       This program is creating a table of number
            by using Collatz formula
  Time Spent:   I spent three hours to solve this problem
****************************************************************************/

#include <stdio.h>
void generate_report(int start_value,int end_value);
int collatz(int n);

int main(int argc, const char * argv[]) {
    
    int start_value;
    int end_value;
    printf("Enter the start value:");
    scanf("%d",&start_value);
    printf("Enter the end value:");
    scanf("%d",&end_value);
    
    while(start_value <= 1 && start_value > 1000 )
    {
        
        printf("Enter the start value again:");
        scanf("%d",&start_value);
    }
    while(end_value > 1000 && end_value > start_value)
    {
        printf("Enter the end value again:");
        scanf("%d",&end_value);
    }
    
   generate_report(start_value,end_value);
    
    return 0;
}


void generate_report(int start_value,int end_value){
    int i;
    int count = 0;
    for(i = start_value ; i <= end_value; i++)
    {
        printf("%5d:%-5d",i,collatz(i));
        
        count++ ;
        if(count == 7)
        {
            printf("\n");
            count = 0;
        }
    }
}

int collatz(int n)
{
    int count = 0;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n/=2;
        }
        else
        {
            n= ((n*3)+1);
        }
        count++;
    }
    
    return count;
}

