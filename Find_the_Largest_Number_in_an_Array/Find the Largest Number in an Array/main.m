//
//  main.m
//  Find the Largest Number in an Array
//
//  Created by Anthony Ma on 2016-06-23.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Find.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Find *a = [[Find alloc] initLocate: @[@5, @6, @9, @8, @10]];
        [a largest];
    }
    return 0;
}
