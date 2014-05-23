//
//  main.c
//  Turkey
//
//  Created by diguage on 14-5-23.
//  Copyright (c) 2014年 http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // 声明变量，变量明名是‘weight’，类型是float
    float weight;
    
    // 为weight变量赋值
    weight = 14.2;
    
    // 向控制台输出weight变量，以便查看
    printf("The turkey weight is %f.\n", weight);
    
    // 再声明一个类型为float的变量
    float cookingTime;
    
    // 计算烹饪时间，将结果赋值给cookingTime变量
    // 这行代码中的‘*’代表‘乘上某个数字’
    cookingTime = 15.0 + 15.0 * weight;
    
    // 向控制台输出cookingTime变量，以便查看
    printf("Cook it for %f minutes.\n", cookingTime);
    
    return 0;
}

