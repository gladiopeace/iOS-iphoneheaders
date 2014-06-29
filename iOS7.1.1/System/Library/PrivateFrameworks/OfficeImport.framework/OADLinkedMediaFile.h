/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADMovie.h>

@class NSURL;

@interface OADLinkedMediaFile : OADMovie {

	NSURL* mUrl;
	bool mIsExternal;

}

@property (retain) NSURL * url; 
@property (assign) bool isExternal; 
-(void)dealloc;
-(bool)isExternal;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setIsExternal:(bool)arg1 ;
@end

