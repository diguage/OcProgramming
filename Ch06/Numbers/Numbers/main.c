//
//  main.c
//  Numbers
//
//  Created by diguage on 14-5-24.
//  Copyright (c) 2014年 D瓜哥，http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int x = 255;
    printf("x is %d.\n", x);
    
    // 按八进制和十六进制输出时，会假设数字是无符号的。
    printf("In octal, x is %o.\n", x);
    printf("In hexadecimal, x is %x.\n", x);
    
    long lx = 255;
    printf("x is %ld.\n", lx);
    // 按八进制和十六进制输出时，会假设数字是无符号的。
    printf("In octal, x is %lo.\n", lx);
    printf("In hexadecimal, x is %lx.\n", lx);
    
    unsigned long ulx = 255;
    printf("x is %ld.\n", ulx);
    // 按八进制和十六进制输出时，会假设数字是无符号的。
    printf("In octal, x is %lo.\n", ulx);
    printf("In hexadecimal, x is %lx.\n", ulx);
    
    return 0;
}

