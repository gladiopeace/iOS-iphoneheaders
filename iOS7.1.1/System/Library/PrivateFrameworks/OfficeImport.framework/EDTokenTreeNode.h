/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDTokenTreeNode : NSObject {

	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;

}
+(id)tokenTreeNodeWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id)firstChild;
-(unsigned)tokenIndex;
-(id)sibling;
-(void)setFirstChild:(id)arg1 ;
-(void)setSibling:(id)arg1 ;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
@end

