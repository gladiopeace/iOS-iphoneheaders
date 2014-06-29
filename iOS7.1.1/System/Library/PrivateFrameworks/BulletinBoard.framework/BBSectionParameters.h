/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSLock, BBSectionSubtypeParameters, NSMutableDictionary, NSString, BBSectionIcon;

@interface BBSectionParameters : NSObject <NSSecureCoding> {

	NSLock* _lock;
	bool _showsSubtitle;
	bool _usesVariableLayout;
	bool _orderSectionUsingRecencyDate;
	bool _showsDateInFloatingLockScreenAlert;
	bool _displaysCriticalBulletins;
	unsigned long long _messageNumberOfLines;
	BBSectionSubtypeParameters* _defaultSubtypeParameters;
	NSMutableDictionary* _allSubtypeParameters;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic) bool showsSubtitle;                                                 //@synthesize showsSubtitle=_showsSubtitle - In the implementation block
@property (assign,nonatomic) bool usesVariableLayout;                                            //@synthesize usesVariableLayout=_usesVariableLayout - In the implementation block
@property (assign,nonatomic) unsigned long long messageNumberOfLines;                            //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (assign,nonatomic) bool orderSectionUsingRecencyDate;                                  //@synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate - In the implementation block
@property (assign,nonatomic) bool showsDateInFloatingLockScreenAlert;                            //@synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) BBSectionIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) bool displaysCriticalBulletins;                                     //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,retain) BBSectionSubtypeParameters * defaultSubtypeParameters;              //@synthesize defaultSubtypeParameters=_defaultSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allSubtypeParameters;                         //@synthesize allSubtypeParameters=_allSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(bool)supportsSecureCoding;
+(void)addSectionParametersToCache:(id)arg1 ;
+(void)removeSectionParametersFromCache:(id)arg1 ;
+(id)copyCachedSectionParametersWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setIcon:(id)arg1 ;
-(id)displayName;
-(id)uniqueIdentifier;
-(void)setUniqueIdentifier:(id)arg1 ;
-(bool)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(bool)arg1 ;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(void)setDefaultSubtypeParameters:(id)arg1 ;
-(void)setAllSubtypeParameters:(id)arg1 ;
-(void)setShowsSubtitle:(bool)arg1 ;
-(void)setUsesVariableLayout:(bool)arg1 ;
-(void)setOrderSectionUsingRecencyDate:(bool)arg1 ;
-(void)setShowsDateInFloatingLockScreenAlert:(bool)arg1 ;
-(id)defaultSubtypeParameters;
-(id)allSubtypeParameters;
-(bool)showsSubtitle;
-(unsigned long long)messageNumberOfLines;
-(bool)usesVariableLayout;
-(bool)orderSectionUsingRecencyDate;
-(bool)showsDateInFloatingLockScreenAlert;
-(id)parametersForSubtype:(long long)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)icon;
@end

