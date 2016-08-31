//
//  addViewController.m
//  pr11
//
//  Created by Hartawan Effendy on 8/31/16.
//  Copyright © 2016 Hartawan Effendy. All rights reserved.
//

#import "addViewController.h"
#import "mainTableViewController.h"
#import "Person.h"



@interface addViewController ()

@end

@implementation addViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    
    
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)saveContact:(id)sender {
    
    Person* org = [[Person alloc] init];
    org.firstName = self.namaDepanTxt.text;
    org.lastName = self.namaBlkTxt.text;
    org.phone = self.telpTxt.text;
    org.address = self.alamatTxt.text;
    [self.delegate contactDidSaved:org];
    [self.navigationController popViewControllerAnimated:YES];
}
@end
