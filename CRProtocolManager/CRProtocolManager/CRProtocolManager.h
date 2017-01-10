//
//  CRProtocolManager.h
//  CRProtocolManager
//
//  Created by 牛投邦 on 2017/1/10.
//  Copyright © 2017年 牛投邦. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRProtocolManager : NSObject

+ (void)registServiceProvide:(id)provide forProtocol:(Protocol*)protocol;

+ (id)serviceProvideForProtocol:(Protocol *)protocol;

@end
