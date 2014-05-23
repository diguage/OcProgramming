//
//  main.c
//  TwoFloats
//
//  Created by diguage on 14-5-23.
//  Copyright (c) 2014年 http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float pi = 3.14;
    float radius = 42.0;
    
    double perimeter = 2 * pi * radius;
    
    printf("The perimeter of the circle is %f.\n", perimeter);
    return 0;
}

