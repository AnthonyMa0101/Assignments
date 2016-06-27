//
//  Find.m
//  Find the Largest Number in an Array
//
//  Created by Anthony Ma on 2016-06-23.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#import "Find.h"

@implementation Find

-(id)initNumber:(NSNumber *)large{
self = [super init];
if (self) {
    _large = large;
}
    return self;
}

-(id)initLocate:(NSArray *)array{
    _large = [array valueForKeyPath:@"@max.self"];
    return self;
}

//- (id)initSortedNumbers:(NSArray *)array {
  //  for (int i=0; i < [array count]; i++) {
    //    if (array[i+1] > array[i]){
      //      _large = array[i+1];
        //}
        //else {
         //   _large = array[i];
        //}
//}
  //  return self;
   // }

- (void)largest{
    NSLog(@"%@", _large);
}



@end
