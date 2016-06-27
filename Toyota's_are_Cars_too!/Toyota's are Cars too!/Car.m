//
//  Car.m
//  Toyota's are Cars too!
//
//  Created by Anthony Ma on 2016-06-23.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#import "Car.h"

@implementation Car

- (id)initWithModel:(NSString *)model {
    self = [super init];
    if (self) {
        _model = model;
    }
    return self;
}

- (void)drive{
    NSLog(@"%@", _model);
}

@end
