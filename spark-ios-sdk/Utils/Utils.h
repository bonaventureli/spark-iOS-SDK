//
//  Utils.h
//  spark-ios-sdk
//
//  Created by Autodesk on 6/14/15.
//  Copyright (c) 2015 Autodesk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Utils : NSObject

+(BOOL)checkForPermissions;
+(NSString*)getBaseURL;
+(BOOL)needToUpdateAccessToken;
@end
