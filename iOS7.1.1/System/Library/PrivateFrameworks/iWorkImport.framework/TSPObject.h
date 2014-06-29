/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPObjectDelegate;
@class TSPUnknownContent, TSPComponent, TSPObjectContext, NSString;

@interface TSPObject : NSObject {

	long long _identifier;
	long long _modifyObjectToken;
	long long _unarchiverIdentifier;
	TSPUnknownContent* _unknownContent;
	TSPComponent* _component;
	<TSPObjectDelegate>* _delegate;

}

@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) bool isComponentRoot; 
@property (nonatomic,readonly) bool storeOutsideObjectArchive; 
@property (nonatomic,readonly) bool allowsDuplicatesOutsideOfDocumentPackage; 
@property (nonatomic,readonly) bool dirtiesDocumentPackage; 
@property (nonatomic,readonly) TSPObject * componentRootObject; 
@property (nonatomic,readonly) bool allowsImplicitComponentOwnership; 
@property (nonatomic,readonly) bool shouldDelayArchiving; 
@property (nonatomic,readonly) unsigned delayedArchivingPriority; 
@property (nonatomic,readonly) bool isCommandObject; 
@property (assign,nonatomic) long long tsp_identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long tsp_unarchiverIdentifier;                         //@synthesize unarchiverIdentifier=_unarchiverIdentifier - In the implementation block
@property (nonatomic,readonly) TSPUnknownContent * tsp_unknownContent;                     //@synthesize unknownContent=_unknownContent - In the implementation block
@property (assign,nonatomic) long long tsp_modifyObjectToken;                              //@synthesize modifyObjectToken=_modifyObjectToken - In the implementation block
@property (assign,nonatomic,__weak) TSPComponent * tsp_component;                          //@synthesize component=_component - In the implementation block
@property (assign,nonatomic,__weak) <TSPObjectDelegate> * tsp_delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) bool needsArchiving; 
+(id)newObjectForUnarchiver:(id)arg1 ;
+(bool)tsp_isTransientObjectIdentifier:(long long)arg1 ;
-(id)documentRoot;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(bool)needsArchiving;
-(id)initDocumentObjectWithContext:(id)arg1 ;
-(void)willModify;
-(void)willModifyForUpgrade;
-(bool)isComponentRoot;
-(bool)storeOutsideObjectArchive;
-(id)componentRootObject;
-(bool)allowsImplicitComponentOwnership;
-(bool)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(bool)isCommandObject;
-(void)saveToArchiver:(id)arg1 ;
-(bool)allowsDuplicatesOutsideOfDocumentPackage;
-(bool)dirtiesDocumentPackage;
-(void)didFinishUnarchiving;
-(long long)tsp_identifier;
-(void)setTsp_identifier:(long long)arg1 ;
-(long long)tsp_unarchiverIdentifier;
-(id)tsp_unknownContent;
-(long long)tsp_modifyObjectToken;
-(void)setTsp_modifyObjectToken:(long long)arg1 ;
-(id)tsp_component;
-(void)setTsp_component:(id)arg1 ;
-(id)tsp_delegate;
-(void)setTsp_delegate:(id)arg1 ;
-(id)init;
-(id)context;
-(id)initWithContext:(id)arg1 ;
-(void).cxx_destruct;
@end

