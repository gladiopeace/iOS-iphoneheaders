/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMState.h>

@class CMOutlineState, OADTablePartStyle;

@interface PMState : CMState {

	CMOutlineState* mListState;
	OADTablePartStyle* mCurrentRowStyle;

}
-(void)dealloc;
-(id)init;
-(id)currentRowStyle;
-(id)listState;
-(void)setCurrentRowStyle:(id)arg1 ;
@end

