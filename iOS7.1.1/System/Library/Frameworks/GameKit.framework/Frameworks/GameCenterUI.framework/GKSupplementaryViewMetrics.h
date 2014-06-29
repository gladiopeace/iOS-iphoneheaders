/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GKSupplementaryViewMetrics : NSObject <NSCopying> {

	bool _shouldPin;
	bool _hidden;
	bool _shouldUseGlobalIndexing;
	bool _shouldPinGlobal;
	double _desiredWidth;
	double _desiredHeight;
	NSString* _kind;
	long long _animateWithSection;
	NSRange _globalSectionRange;

}

@property (assign,nonatomic) double desiredWidth;                       //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (assign,nonatomic) double desiredHeight;                      //@synthesize desiredHeight=_desiredHeight - In the implementation block
@property (assign,nonatomic) bool shouldPin;                            //@synthesize shouldPin=_shouldPin - In the implementation block
@property (nonatomic,retain) NSString * kind;                           //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isHidden,nonatomic) bool hidden;               //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) bool shouldUseGlobalIndexing;              //@synthesize shouldUseGlobalIndexing=_shouldUseGlobalIndexing - In the implementation block
@property (assign,nonatomic) bool shouldPinGlobal;                      //@synthesize shouldPinGlobal=_shouldPinGlobal - In the implementation block
@property (assign,nonatomic) NSRange globalSectionRange;                //@synthesize globalSectionRange=_globalSectionRange - In the implementation block
@property (assign,nonatomic) long long animateWithSection;              //@synthesize animateWithSection=_animateWithSection - In the implementation block
+(id)supplementaryMetrics;
-(void)setDesiredHeight:(double)arg1 ;
-(void)setShouldPin:(bool)arg1 ;
-(id)localDescription;
-(void)setGlobalSectionRange:(NSRange)arg1 ;
-(NSRange)globalSectionRange;
-(void)setShouldPinGlobal:(bool)arg1 ;
-(void)setShouldUseGlobalIndexing:(bool)arg1 ;
-(double)desiredHeight;
-(bool)shouldPin;
-(void)setDesiredWidth:(double)arg1 ;
-(void)setAnimateWithSection:(long long)arg1 ;
-(CGSize)sizeForCollectionView:(id)arg1 ;
-(double)desiredWidth;
-(bool)shouldUseGlobalIndexing;
-(bool)shouldPinGlobal;
-(long long)animateWithSection;
-(void)dealloc;
-(bool)isHidden;
-(void)setHidden:(bool)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)kind;
-(void)setKind:(id)arg1 ;
@end

