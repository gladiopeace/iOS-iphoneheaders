/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Mail.siriUIBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MessageStatusIndicatorManager.h>

@class NSMutableArray, NSArray;

@interface MessageListStatusIndicatorManager : MessageStatusIndicatorManager {

	NSMutableArray* _statusIndicatorViews;

}

@property (nonatomic,readonly) NSArray * statusIndicatorViews; 
-(void)layoutStatusIndicatorViewsInRect:(CGRect)arg1 ;
-(id)statusIndicatorViews;
-(id)primaryStatusIndicatorImage;
-(void)hideIndicators;
-(void)dealloc;
@end

