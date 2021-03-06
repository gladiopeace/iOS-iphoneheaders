/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment {

	TSDDrawableInfo* _drawableInfo;
	int _hOffsetType;
	float _hOffset;
	int _vOffsetType;
	float _vOffset;

}

@property (nonatomic,readonly) TSDDrawableInfo * drawable;              //@synthesize drawableInfo=_drawableInfo - In the implementation block
@property (assign,nonatomic) int hOffsetType;                           //@synthesize hOffsetType=_hOffsetType - In the implementation block
@property (assign,nonatomic) float hOffset;                             //@synthesize hOffset=_hOffset - In the implementation block
@property (assign,nonatomic) int vOffsetType;                           //@synthesize vOffsetType=_vOffsetType - In the implementation block
@property (assign,nonatomic) float vOffset;                             //@synthesize vOffset=_vOffset - In the implementation block
@property (nonatomic,readonly) float descent; 
+(void)setPositionerClass:(Class)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(Class)positionerClass;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(BOOL)isAnchored;
-(unsigned long long)enabledKnobMask;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)isHTMLWrap;
-(void)setParentStorage:(id)arg1 ;
-(BOOL)isPartitioned;
-(float)hOffset;
-(void)setHOffset:(float)arg1 ;
-(float)vOffset;
-(void)setVOffset:(float)arg1 ;
-(int)hOffsetType;
-(int)vOffsetType;
-(void)loadMessage:(const DrawableAttachmentArchive*)arg1 fromUnarchiver:(id)arg2 ;
-(void)saveMessage:(DrawableAttachmentArchive*)arg1 toArchiver:(id)arg2 ;
-(void)setHOffsetType:(int)arg1 ;
-(void)setVOffsetType:(int)arg1 ;
-(id)initWithContext:(id)arg1 drawable:(id)arg2 ;
-(id)detachDrawable;
-(void)attachDrawable:(id)arg1 ;
-(id)textStorages;
-(id)textRepresentationForCopy;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)invalidate;
-(float)descent;
-(BOOL)isSearchable;
-(id)drawable;
-(int)elementKind;
-(BOOL)isDrawable;
@end

