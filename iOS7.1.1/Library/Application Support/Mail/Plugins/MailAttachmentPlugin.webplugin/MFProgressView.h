/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <UIKit/UIView.h>

@protocol MFProgressViewDelegate;
@class CADisplayLink, UIColor, NSTimer;

@interface MFProgressView : UIView {

	double _stroke;
	CADisplayLink* _displayLink;
	double _displayedProgress;
	double _targetProgress;
	UIColor* _tintColor;
	NSTimer* _simulateActivityTimer;
	<MFProgressViewDelegate>* _delegate;

}

@property (assign,nonatomic) <MFProgressViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
+(id)progressViewWithDefaultStyleStrokeAndRect;
-(void)progressDidFinish;
-(id)initWithProgressViewStyle:(int)arg1 stroke:(double)arg2 frame:(CGRect)arg3 ;
-(CGRect)scaleBaselineBoundsToScale:(CGSize)arg1 ;
-(void)simulateActivity;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
@end

