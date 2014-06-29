/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImage.h>
#import <SpringBoard/SBCountedMapValue.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage <SBCountedMapValue> {

	SBIconLabelImageParameters* _parameters;
	CGPoint _maxSizeOffset;

}

@property (nonatomic,readonly) SBIconLabelImageParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) CGPoint maxSizeOffset;                                //@synthesize maxSizeOffset=_maxSizeOffset - In the implementation block
+(id)checkoutLabelImageForParameters:(id)arg1 ;
+(void)checkinLabelImage:(id)arg1 ;
+(void)applyKerning:(float)arg1 whitespaceKerning:(float)arg2 toAttributedString:(id)arg3 ;
+(CGRect)_rectWithDrawing:(BOOL)arg1 inRect:(CGRect)arg2 fromParameters:(id)arg3 ;
+(CGRect)rectFromParameters:(id)arg1 constrainedToRect:(CGRect)arg2 ;
+(void)drawImageInRect:(CGRect)arg1 fromParameters:(id)arg2 ;
+(id)_parametersWithDefaultStyle:(id)arg1 ;
+(id)_labelImageCountedMap;
+(id)_drawLabelImageForParameters:(id)arg1 ;
-(id)countedMapKey;
-(CGPoint)maxSizeOffset;
-(id)_initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 parameters:(id)arg4 maxSizeOffset:(CGPoint)arg5 ;
-(void)dealloc;
-(id)description;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
-(id)parameters;
@end

