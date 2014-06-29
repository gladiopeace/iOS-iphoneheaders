/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme;

@interface CMState : NSObject {

	NSMutableDictionary* components;
	NSMutableDictionary* htmlResource;
	NSString* mResourceUrlPrefix;
	OADColorMap* mColorMap;
	OADColorScheme* mColorScheme;
	id mResources;
	int mSrcFormat;
	bool mIsThumbnail;
	bool mIsOnPhone;
	long long _textLevel;

}
-(void)dealloc;
-(id)init;
-(id)resources;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(bool)isOnPhone;
-(long long)textLevel;
-(void)pushTextLevel;
-(void)popTextLevel;
-(void)setIsOnPhone:(bool)arg1 ;
-(void)setSrcFormat:(int)arg1 ;
-(bool)isThumbnail;
-(void)setIsThumbnail:(bool)arg1 ;
-(id)colorMap;
-(void)copyFromCMStateWithoutComponents:(id)arg1 ;
-(id)getHtmlResource;
-(void)setHtmlResource:(id)arg1 ;
-(id)resourceUrlPrefix;
-(int)sourceFormat;
-(id)componentByName:(id)arg1 ;
-(void)setComponentWithName:(id)arg1 value:(id)arg2 ;
-(void)setResourceUrlPrefix:(id)arg1 ;
-(void)setColorMap:(id)arg1 ;
-(void)setResources:(id)arg1 ;
-(bool)isOffice12;
@end

