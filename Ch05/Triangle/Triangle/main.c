//
//  main.c
//  Triangle
//
//  Created by diguage on 14-5-24.
//  Copyright (c) 2014年 D瓜哥，http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float angleA, float angleB)
{
    return 180.0 - angleA - angleB;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    
    return 0;
}



