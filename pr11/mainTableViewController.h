//
//  mainTableViewController.h
//  pr11
//
//  Created by Hartawan Effendy on 9/19/16.
//  Copyright © 2016 Hartawan Effendy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "addViewController.h"
#import "Person.h"
@interface mainTableViewController : UITableViewController <addContactDelegate>
@property (weak, nonatomic) IBOutlet UIButton *addBtn;

@end
