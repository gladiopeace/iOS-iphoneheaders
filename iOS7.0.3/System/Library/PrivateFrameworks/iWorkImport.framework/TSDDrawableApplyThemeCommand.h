/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSApplyThemeChildCommand.h>

@class TSDDrawableInfo, TSSStyle;

@interface TSDDrawableApplyThemeCommand : TSSApplyThemeChildCommand {

	TSDDrawableInfo* mInfo;
	TSSStyle* mStyle;

}

@property (nonatomic,readonly) TSDDrawableInfo * info; 
@property (nonatomic,readonly) TSSStyle * style; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(DrawableApplyThemeCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const DrawableApplyThemeCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_do;
-(id)initWithDrawable:(id)arg1 parentCommand:(id)arg2 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(id)style;
-(void)commit;
-(id)info;
-(BOOL)process;
@end
