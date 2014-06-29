/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _EditScriptIndexedAtom : NSObject {

	long long _editOperation;
	unsigned long long _indexToEdit;
	unsigned long long _indexInArrayB;
	NSString* _replacementText;

}

@property (assign,nonatomic) long long editOperation;                       //@synthesize editOperation=_editOperation - In the implementation block
@property (assign,nonatomic) unsigned long long indexToEdit;                //@synthesize indexToEdit=_indexToEdit - In the implementation block
@property (assign,nonatomic) unsigned long long indexInArrayB;              //@synthesize indexInArrayB=_indexInArrayB - In the implementation block
@property (nonatomic,retain) NSString * replacementText;                    //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(void)dealloc;
-(id)description;
-(void)setEditOperation:(long long)arg1 ;
-(void)setIndexToEdit:(unsigned long long)arg1 ;
-(void)setIndexInArrayB:(unsigned long long)arg1 ;
-(void)setReplacementText:(id)arg1 ;
-(id)initWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(long long)editOperation;
-(unsigned long long)indexToEdit;
-(unsigned long long)indexInArrayB;
-(id)replacementText;
@end

