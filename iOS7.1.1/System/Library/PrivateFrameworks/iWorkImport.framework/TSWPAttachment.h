/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSDOwningAttachment.h>
#import <iWorkImport/TSPCopying.h>

@class TSWPStorage;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying> {

	TSWPStorage* _parentStorage;

}

@property (assign,nonatomic) TSWPStorage * parentStorage;                       //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,readonly) bool isDrawable; 
@property (nonatomic,readonly) bool isAnchored; 
@property (nonatomic,readonly) bool isPartitioned; 
@property (nonatomic,readonly) bool isAttachedToBodyText; 
@property (nonatomic,readonly) Class positionerClass; 
@property (nonatomic,readonly) bool isSearchable; 
@property (nonatomic,readonly) bool specifiesEnabledKnobMask; 
@property (nonatomic,readonly) unsigned long long enabledKnobMask; 
+(int)attributeArrayKind;
+(id)allocWithZone:(NSZone)arg1 ;
-(bool)changesWithPageNumber;
-(id)copyWithContext:(id)arg1 ;
-(bool)isAttachedToBodyText;
-(Class)positionerClass;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(bool)isAnchored;
-(unsigned long long)enabledKnobMask;
-(bool)specifiesEnabledKnobMask;
-(bool)changesWithPageCount;
-(id)parentStorage;
-(unsigned long long)findCharIndex;
-(void)setParentStorage:(id)arg1 ;
-(bool)isPartitioned;
-(id)topLevelAttachment;
-(bool)isEqual:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(bool)isSearchable;
-(int)elementKind;
-(bool)isDrawable;
@end

