//
//  KeyChainStore.h
//  
//
//  Created by winter on 16/8/22.
//  Copyright © 2016年 winter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XDChainStore : NSObject

+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteKeyData:(NSString *)service;
@end
