/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {

	int mSlideLayoutType;
	PDSlideMaster* mSlideMaster;

}
-(void)dealloc;
-(id)background;
-(id)defaultTheme;
-(id)slideMaster;
-(id)parentSlideBase;
-(void)doneWithContent;
-(int)slideLayoutType;
-(void)setSlideMaster:(id)arg1 ;
-(id)initWithSlideMaster:(id)arg1 ;
-(void)setSlideLayoutType:(int)arg1 ;
-(id)parentTextStyleForTables;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(char)arg4 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(char)hasMappableSlideNumberShape;
@end

