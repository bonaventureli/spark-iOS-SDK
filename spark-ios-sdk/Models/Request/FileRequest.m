//
//  FileRequest.m
//  spark-ios-sdk
//
//  Created by Tomer Har Yoffi on 6/15/15.
//  Copyright (c) 2015 Tomer Har Yoffi. All rights reserved.
//

#import "FileRequest.h"

@implementation FileRequest

-(instancetype)initWithFileRequest:(BOOL)zipEnable publicEnable:(BOOL)publicEnable path:(NSString*)path fileData:(NSData*)fileData{
    self = [super init];
    if (self) {
        _zipEnable = zipEnable;
        _publicEnable = publicEnable;
        _path = path;
        _fileData = fileData;
    }
    return self;
}

@end
