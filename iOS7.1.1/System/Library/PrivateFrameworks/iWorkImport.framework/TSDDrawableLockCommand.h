/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@class TSDDrawableInfo;

@interface TSDDrawableLockCommand : TSKCommand {

	TSDDrawableInfo* mInfo;
	bool mLock;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)p_do;
-(id)initWithDrawableInfo:(id)arg1 lock:(bool)arg2 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(bool)process;
@end

