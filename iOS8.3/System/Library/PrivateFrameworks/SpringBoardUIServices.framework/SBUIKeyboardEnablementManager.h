/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject {

	NSHashTable* _disabledContexts;
	char _disabled;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)disableAutomaticAppearanceForContext:(id)arg1 ;
-(void)enableAutomaticAppearanceForContext:(id)arg1 ;
@end

