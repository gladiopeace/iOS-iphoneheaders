/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
-(id)httpMethod;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)requestBody;
@end

