//
//  main.c
//  Degrees
//
//  Created by diguage on 14-5-24.
//  Copyright (c) 2014年 http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float fahrenheitFromCelsius(float cel)
{
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

float celsiusFromFahrenheit(float fahr)
{
    float cel = (fahr - 32.0) * 5.0 / 9.0;
    printf("%f Fahrenheit is %f Celsius\n", fahr, cel);
    return cel;
}

int main(int argc, const char * argv[])
{
    float cel = 26.0;
    float fahr = fahrenheitFromCelsius(cel);
    float result = celsiusFromFahrenheit(fahr);
    printf("The origin is %f, The result is %f.\n", cel, result);
    return EXIT_SUCCESS;
}

