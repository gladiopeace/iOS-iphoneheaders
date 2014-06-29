/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, NSArray;

@interface ACAssistantAlternateProviderResultView : UIView {

	UILabel* _providerNameLabel;
	UIImageView* _providerLogoImageView;
	UIView* _containerView;
	UIImageView* _chevronImageView;
	NSArray* _commands;

}

@property (nonatomic,retain) NSArray * commands;              //@synthesize commands=_commands - In the implementation block
-(void)_configureUsingImage:(id)arg1 ;
-(id)initWithAlternateProviderResult:(id)arg1 usingPersistentStore:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void).cxx_destruct;
-(id)commands;
-(void)setCommands:(id)arg1 ;
@end

