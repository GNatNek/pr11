//
//  addViewController.h
//  pr11
//
//  Created by Hartawan Effendy on 8/31/16.
//  Copyright © 2016 Hartawan Effendy. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol addContactDelegate <NSObject>
- (void)contactDidSaved:(id)sender;
@end


@interface addViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *namaDepanTxt;
@property (weak, nonatomic) IBOutlet UITextField *namaBlkTxt;
@property (weak, nonatomic) IBOutlet UITextField *telpTxt;
@property (weak, nonatomic) IBOutlet UITextField *alamatTxt;
@property (weak, nonatomic) IBOutlet UIButton *saveBtn;
@property (nonatomic, weak) id<addContactDelegate> delegate;
- (IBAction)saveContact:(id)sender;
@end
