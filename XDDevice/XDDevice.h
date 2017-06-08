//
//  XDDevice.h
//  XDDevice
//
//  Created by winter on 2017/6/8.
//  Copyright © 2017年 winter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include <sys/param.h>
#include <sys/mount.h>

@interface XDDevice : NSObject

@property (nonatomic, readonly) NSString *deviceID;//UUID,keyChainStore
@property (nonatomic, readonly) NSString *deviceModel;//iPhone 6
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *osVersion;//OS9.3.1
@property (nonatomic, readonly) NSString *resolution;

@property (nonatomic, copy) NSString *availableRAM;//可用内存
@property (nonatomic, copy) NSString *usedRAM;//已用内存
@property (nonatomic, copy) NSString *totalRAM;//全部内存
@property (nonatomic, copy) NSString *batteryLevel;//电池电量
@property (nonatomic, copy) NSString *batteryState;//电池状态：0未识别 1充电中 2少于100% 3充满
@property (nonatomic, copy) NSString *mobileOperator;//运营商
+ (XDDevice *) singleton;

+ (NSString *)freeDiskSpaceInBytes;//手机剩余空间（磁盘）
+ (NSString *)totalDiskSpaceInBytes;//手机总空间（磁盘）
+ (NSString *)folderSizeAtPath:(NSString*) folderPath;//某个文件夹占用空间的大小
+ (BOOL)isSIMInstalled;//是否有sim卡
- (float)getCpuUsage;//CPU使用率

@end
