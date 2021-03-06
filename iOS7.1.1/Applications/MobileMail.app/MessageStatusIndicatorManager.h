/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MessageStatusIndicatorManager : NSObject {

	unsigned _indicatorOptions;
	unsigned _disabledIndicatorOptions;

}

@property (assign,nonatomic) BOOL hidesUnreadIndicator; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL hidesAttachmentIndicator; 
@property (assign,nonatomic) unsigned indicatorOptions;                         //@synthesize indicatorOptions=_indicatorOptions - In the implementation block
@property (nonatomic,readonly) unsigned effectiveIndicatorOptions; 
+(id)flagShapeImage;
+(id)dotIndicatorImage;
+(id)unreadFlaggedImageWithUnreadColor:(id)arg1 flaggedColor:(id)arg2 ;
+(void)initialize;
-(unsigned)effectiveIndicatorOptions;
-(id)statusIndicatorImageWithOptionsMask:(unsigned)arg1 ;
-(BOOL)hidesUnreadIndicator;
-(void)setHidesUnreadIndicator:(BOOL)arg1 ;
-(void)setIndicatorOptions:(unsigned)arg1 ;
-(void)_setIndicatorOptions:(unsigned)arg1 disabled:(BOOL)arg2 ;
-(BOOL)_indicatorOptionsAreDisabled:(unsigned)arg1 ;
-(unsigned)indicatorOptions;
-(void)setHidesAttachmentIndicator:(BOOL)arg1 ;
-(BOOL)hidesAttachmentIndicator;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1 ;
@end

