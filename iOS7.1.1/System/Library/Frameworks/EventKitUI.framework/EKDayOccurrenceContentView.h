/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, NSIndexSet, NSMutableAttributedString;

@interface EKDayOccurrenceContentView : UIView {

	NSString* _title;
	NSString* _location;
	UIColor* _color;
	UIColor* _titleTextColor;
	UIColor* _secondaryTextColor;
	UIColor* _textBackgroundColor;
	UIColor* _statusTextColor;
	NSIndexSet* _titleMetrics;
	CGPoint _titleEndPoint;
	double _textEndY;
	CGRect _titleRect;
	CGRect _fullTextRect;
	NSMutableAttributedString* _attributedContentString;
	bool _allDay;
	bool _birthday;
	bool _facebook;
	bool _cancelled;
	bool _tentative;
	bool _declined;
	bool _needsReply;
	bool _selected;
	bool _allDayDrawingStyle;
	bool _usesSmallText;
	bool _hideText;
	int _occurrenceBackgroundStyle;

}

@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * location;                                                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                  //@synthesize color=_color - In the implementation block
@property (assign,getter=isAllDay,nonatomic) bool allDay;                                      //@synthesize allDay=_allDay - In the implementation block
@property (assign,getter=isBirthday,nonatomic) bool birthday;                                  //@synthesize birthday=_birthday - In the implementation block
@property (assign,getter=isFacebook,nonatomic) bool facebook;                                  //@synthesize facebook=_facebook - In the implementation block
@property (assign,getter=isCancelled,nonatomic) bool cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isTentative,nonatomic) bool tentative;                                //@synthesize tentative=_tentative - In the implementation block
@property (assign,getter=isDeclined,nonatomic) bool declined;                                  //@synthesize declined=_declined - In the implementation block
@property (assign,nonatomic) bool needsReply;                                                  //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,nonatomic) bool selected;                                                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isAllDayDrawingStyle,nonatomic) bool allDayDrawingStyle;              //@synthesize allDayDrawingStyle=_allDayDrawingStyle - In the implementation block
@property (assign,nonatomic) bool usesSmallText;                                               //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (nonatomic,retain) UIColor * textBackgroundColor; 
@property (assign,nonatomic) bool hideText;                                                    //@synthesize hideText=_hideText - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle;                                    //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
+(Class)layerClass;
-(void)setBirthday:(bool)arg1 ;
-(bool)isAllDay;
-(void)setAllDay:(bool)arg1 ;
-(bool)isTentative;
-(bool)isFacebook;
-(void)setUsesSmallText:(bool)arg1 ;
-(void)setTitleTextColor:(id)arg1 ;
-(void)setTextBackgroundColor:(id)arg1 ;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(bool)usesSmallText;
-(void)setAllDayDrawingStyle:(bool)arg1 ;
-(bool)hasIcon;
-(bool)hideText;
-(void)setHideText:(bool)arg1 ;
-(void)setTentative:(bool)arg1 ;
-(bool)isDeclined;
-(void)setDeclined:(bool)arg1 ;
-(bool)needsReply;
-(void)setNeedsReply:(bool)arg1 ;
-(bool)isBirthday;
-(void)setFacebook:(bool)arg1 ;
-(double)textNaturalWidth;
-(double)minimumNaturalHeightAllText;
-(double)minimumNaturalHeightForPrimaryText;
-(id)titleTextColor;
-(id)textBackgroundColor;
-(bool)isAllDayDrawingStyle;
-(void)_invalidateMetrics;
-(id)stringDrawingContext;
-(id)_primaryTextFont;
-(id)_statusText;
-(id)_secondaryText;
-(id)strikethroughColor;
-(id)_secondaryTextFont;
-(id)statusTextColor;
-(id)attributedContentString;
-(id)_statusTextFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setSelected:(bool)arg1 ;
-(void)setCancelled:(bool)arg1 ;
-(bool)isCancelled;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id)location;
-(bool)selected;
-(void).cxx_destruct;
-(id)initWithContentView:(id)arg1 ;
-(id)secondaryTextColor;
-(void)setSecondaryTextColor:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

