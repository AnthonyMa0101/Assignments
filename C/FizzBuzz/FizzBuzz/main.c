//
//  main.c
//  FizzBuzz
//
//  Created by Anthony Ma on 2016-06-17.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //for loop adds 1 until 100
    for (int a = 1; a <= 100; a++) {
        if (a % 15 == 0) {
            printf("FizzBuzz\n"); //prints FizzBuzz if divisble by 15 w/o remainder
        }
        else {
            if (a % 3 == 0) { //prints Fizz for numbers divisble by 3 w/o remainder
            printf("Fizz\n");
    }
        else {
            if (a % 5 == 0) {
                printf("Buzz\n"); //prints Buzz for numbers divisble by 5 w/o remainder
            }
            else {
            printf("%d\n", a); //prints number if all conditions fail
    }
    
}
    }
    }
        return 0;
}
