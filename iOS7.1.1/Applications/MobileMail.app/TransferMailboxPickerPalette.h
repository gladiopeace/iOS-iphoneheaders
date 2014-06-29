/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/_UINavigationControllerPalette.h>

@class NSArray, UILabel, UIImageView, UIView, NSString;

@interface TransferMailboxPickerPalette : _UINavigationControllerPalette {

	NSArray* _senders;
	UILabel* _sendersLabel;
	UILabel* _subjectLabel;
	UIImageView* _messageThumbnailView;
	unsigned _messageCount;

}

@property (nonatomic,readonly) UIView * messageThumbnailView;              //@synthesize messageThumbnailView=_messageThumbnailView - In the implementation block
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSArray * senders;                              //@synthesize senders=_senders - In the implementation block
@property (assign,nonatomic) unsigned messageCount;                        //@synthesize messageCount=_messageCount - In the implementation block
+(float)defaultHeight;
-(void)setMessageThumbnailWithView:(id)arg1 ;
-(id)messageThumbnailView;
-(CGRect)messageThumbnailViewFrame;
-(void)_drawThumbnailInContext:(CGContextRef)arg1 view:(id)arg2 frame:(CGRect)arg3 ;
-(id)_senderStringForWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(unsigned)messageCount;
-(id)senders;
-(void)setSenders:(id)arg1 ;
-(void)setMessageCount:(unsigned)arg1 ;
@end

