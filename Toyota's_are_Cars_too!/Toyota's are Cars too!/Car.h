//
//  Car.h
//  Toyota's are Cars too!
//
//  Created by Anthony Ma on 2016-06-23.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject

@property NSString *model;

- (void)drive;

- (id)initWithModel:(NSString *)model;

@end
