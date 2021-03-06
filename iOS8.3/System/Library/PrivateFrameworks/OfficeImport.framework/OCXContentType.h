/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface OCXContentType : NSObject {

	NSString* mContentType;
	NSString* mPath;
	NSString* mExtension;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * path; 
-(void)dealloc;
-(NSString *)path;
-(void)writeToStreamWriter:(id)arg1 ;
-(id)initWithContentType:(id)arg1 path:(id)arg2 ;
-(char)isOverride;
-(id)initWithContentType:(id)arg1 extension:(id)arg2 ;
-(NSString *)contentType;
@end

