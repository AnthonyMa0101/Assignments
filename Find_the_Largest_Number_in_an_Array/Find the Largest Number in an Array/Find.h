//
//  Find.h
//  Find the Largest Number in an Array
//
//  Created by Anthony Ma on 2016-06-23.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Find : NSObject

@property NSArray *array;

@property NSNumber *large;

-(void)largest;

-(id)initNumber:(NSNumber *)large;

-(id)initLocate:(NSArray *)array;

@end
