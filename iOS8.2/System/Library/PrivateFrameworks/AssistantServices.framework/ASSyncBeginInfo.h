/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistant_service/AFSyncBeginInfo.h>

@class NSString;

@interface ASSyncBeginInfo : NSObject <AFSyncBeginInfo> {

	NSString* _validity;

}

@property (nonatomic,copy) NSString * validity;              //@synthesize validity=_validity - In the implementation block
-(void)resetWithValidity:(id)arg1 ;
-(id)description;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
@end

