/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPReaderDelegate <NSObject>
@property (nonatomic,readonly) bool isReadingFromDocument; 
@property (nonatomic,readonly) bool isFromPasteboard; 
@property (nonatomic,readonly) bool isCrossDocumentPaste; 
@property (nonatomic,readonly) bool isCrossAppPaste; 
@optional
-(bool)isCrossAppPaste;
-(bool)isCrossDocumentPaste;
-(void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3;
-(void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
-(bool)isFromPasteboard;

@required
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(bool)arg4 allowUnknownObject:(bool)arg5 fromParentObject:(id)arg6 completion:(/*^block*/ id)arg7;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4 fromParentObject:(id)arg5 completion:(/*^block*/ id)arg6;
-(bool)isReadingFromDocument;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
-(id)contextForReader:(id)arg1;
-(id)lazyReferenceDelegateForReader:(id)arg1;
-(id)objectDelegateForReader:(id)arg1;
-(void)reader:(id)arg1 didReadLazyReference:(id)arg2;
@end

