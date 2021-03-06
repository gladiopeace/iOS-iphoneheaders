/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSAttributedString;

@interface MNRefittedFrame : NSObject {

	float _width;
	unsigned _maximumNumberOfLines;
	float _minimumLineHeight;
	CTFrameRef _frame;
	BOOL _measured;
	unsigned _numberOfLines;
	float _maxLineHeight;
	float _maxLineWidth;
	NSRange _fittedRange;
	NSAttributedString* _string;

}

@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) float width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) float widthUsed; 
@property (nonatomic,readonly) NSRange fittedRange; 
@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) unsigned numberOfLines; 
@property (nonatomic,readonly) BOOL textFitsEntirely; 
@property (nonatomic,readonly) CTFrameRef CTFrame; 
@property (nonatomic,copy) NSAttributedString * string;                            //@synthesize string=_string - In the implementation block
-(CTFrameRef)CTFrame;
-(id)getLayersForBounds:(CGRect)arg1 ;
-(id)initWithAttributedString:(id)arg1 width:(float)arg2 maximumNumberOfLines:(unsigned)arg3 minimumLineHeight:(float)arg4 ;
-(BOOL)textFitsEntirely;
-(NSRange)fittedRange;
-(float)widthUsed;
-(CTFrameRef)newFrameFromFramesetter:(CTFramesetterRef)arg1 ;
-(void)measureIfNeeded;
-(void)dealloc;
-(id)string;
-(float)width;
-(float)height;
-(id)attributedString;
-(unsigned)numberOfLines;
-(void)setString:(id)arg1 ;
-(void).cxx_destruct;
@end

