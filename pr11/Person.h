//
//  Person.h
//  pr11
//
//  Created by Hartawan Effendy on 8/31/16.
//  Copyright © 2016 Hartawan Effendy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
@property (weak,nonatomic) NSString* firstName;
@property (weak,nonatomic) NSString* lastName;
@property (weak,nonatomic) NSString* phone;
@property (weak,nonatomic) NSString* address;
@end
