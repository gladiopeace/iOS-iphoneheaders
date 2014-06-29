/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSPCopying.h>

@class TSWPStorage;

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying> {

	TSWPStorage* _parentStorage;
	unsigned long long _lastTableIndex;

}

@property (assign,nonatomic) TSWPStorage * parentStorage;                //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,readonly) int attributeArrayKind; 
@property (nonatomic,readonly) int styleAttributeArrayKind; 
@property (nonatomic,readonly) NSRange range; 
+(id)defaultFieldStyleIdentifier;
+(id)allocWithZone:(NSZone)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(SmartFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const SmartFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)parentStorage;
-(void)setParentStorage:(id)arg1 ;
-(int)styleAttributeArrayKind;
-(bool)canCopy:(NSRange)arg1 ;
-(int)attributeArrayKind;
-(bool)allowsPasteAsSmartField;
-(void)dealloc;
-(id)text;
-(id)initWithContext:(id)arg1 ;
-(NSRange)range;
-(bool)allowsEditing;
-(int)elementKind;
@end

