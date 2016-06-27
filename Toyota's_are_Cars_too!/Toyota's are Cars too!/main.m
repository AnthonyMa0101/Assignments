//
//  main.m
//  Toyota's are Cars too!
//
//  Created by Anthony Ma on 2016-06-23.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"
#import "Toyota.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        // Instantiating object
        Car *nissan = [[Car alloc] initWithModel:@"Rogue"];
        [nissan drive];
       
        Car *toyota = [[Toyota alloc] init];
        [toyota drive];
        
    }
 return 0;
}
