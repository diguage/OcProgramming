//
//  main.c
//  BMICalc
//
//  Created by diguage on 14-5-24.
//  Copyright (c) 2014年 D瓜哥，http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>

//struct Person {
//    float heightInMeters;
//    int weightInKilos;
//};

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[])
{
//    struct Person person;
    Person person;
    person.weightInKilos = 74;
    person.heightInMeters = 1.74;
    printf("person weights %i kilograms \n", person.weightInKilos);
    printf("person is %.2f meters tall\n", person.heightInMeters);
    
    float bmi = bodyMassIndex(person);
    printf("person has a BMI of %.2f.\n", bmi);
    
    return 0;
}

