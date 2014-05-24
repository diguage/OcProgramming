//
//  main.c
//  Addresses
//
//  Created by diguage on 14-5-24.
//  Copyright (c) 2014年 D瓜哥，http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    
    printf("i stores ites values at %p.\n", addressOfI);
    printf("this function starts at %p.\n", main);
    printf("The int stored at addressOfI is %d.\n", *addressOfI);
    
    *addressOfI = 89;
    printf("Now i is %d.\n", i);
    
    printf("An int is %zu bytes.\n", sizeof(int));
    printf("A pointer is %zu bytes.\n", sizeof(int*));
    
    printf("short \t int \t long \t longlong \t float \t double\n");
    printf("%zu \t\t %zu \t\t %zu \t\t %zu \t\t\t %zu \t\t %zu\n", sizeof(short), sizeof(int),
           sizeof(long), sizeof(long long), sizeof(float), sizeof(double));
    
    printf("The NULL starts at %p.\n", NULL);
    
    return 0;
}

