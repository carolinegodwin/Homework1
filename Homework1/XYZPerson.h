//
//  XYZPerson.h
//  Homework1
//
//  Created by Caroline Godwin on 5/8/14.
//  Copyright (c) 2014 Caroline Godwin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZPerson : NSObject

@property NSString *firstName;
@property NSString *lastName;
@property NSDate *birthday;

+ (NSObject *)person;

- (void)sayHello;

@end
