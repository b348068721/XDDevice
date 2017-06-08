//
//  ViewController.m
//  XDDevice
//
//  Created by winter on 2017/6/8.
//  Copyright © 2017年 winter. All rights reserved.
//

#import "ViewController.h"
#import "XDDevice.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSLog(@"%@",[XDDevice freeDiskSpaceInBytes]);
    NSLog(@"%@",[XDDevice totalDiskSpaceInBytes]);
    NSLog(@"%@",[[XDDevice singleton]mobileOperator]);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
