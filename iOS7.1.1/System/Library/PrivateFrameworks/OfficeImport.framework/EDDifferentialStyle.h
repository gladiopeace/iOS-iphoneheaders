/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class EDAlignmentInfo, EDBorders, EDFill, EDFont, EDProtection, EDContentFormat;

@interface EDDifferentialStyle : NSObject <NSCopying> {

	EDAlignmentInfo* mAlignmentInfo;
	EDBorders* mBorders;
	EDFill* mFill;
	EDFont* mFont;
	EDProtection* mProtection;
	EDContentFormat* mContentFormat;

}

@property (nonatomic,retain) EDAlignmentInfo * alignmentInfo; 
@property (nonatomic,retain) EDBorders * borders; 
@property (nonatomic,retain) EDFill * fill; 
@property (nonatomic,retain) EDFont * font; 
@property (nonatomic,retain) EDProtection * protection; 
@property (nonatomic,retain) EDContentFormat * contentFormat; 
+(id)differentialStyle;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)fill;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setFill:(id)arg1 ;
-(id)alignmentInfo;
-(id)contentFormat;
-(id)borders;
-(void)setContentFormat:(id)arg1 ;
-(void)setAlignmentInfo:(id)arg1 ;
-(void)setBorders:(id)arg1 ;
-(void)setProtection:(id)arg1 ;
-(id)protection;
@end

