//
//  main.c
//  BeerSong
//
//  Created by diguage on 14-5-24.
//  Copyright (c) 2014年 http://www.diguage.com/. All rights reserved.
//

#include <stdio.h>

void singTheSong(int numberOfBottles)
{
    if (numberOfBottles == 0) {
        printf("There are simply no more bottles of beer on the wall.\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer.\n", numberOfBottles, numberOfBottles);
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n", oneFewer);
        singTheSong(oneFewer);
        printf("Put a bottle in the recycling, %d empty bottles in the bin.\n", numberOfBottles);
        
    }
}

int main(int argc, const char * argv[])
{
    singTheSong(99);
    return 0;
}

