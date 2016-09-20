//
//  Person.h
//  pr11
//
//  Created by Hartawan Effendy on 9/19/16.
//  Copyright © 2016 Hartawan Effendy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
@property (weak,nonatomic) NSString* first;
@property (weak,nonatomic) NSString* last;
@property (weak,nonatomic) NSString* phone;
@property (weak,nonatomic) NSString* address;
@end
