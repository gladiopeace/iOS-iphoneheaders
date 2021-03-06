/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class SSItem, NSMutableDictionary, NSString, NSArray, SSItemMedia, SSDialog, SSNetworkConstraints, NSSet;

@interface SSItemOffer : NSObject <NSCopying> {

	SSItem* _item;
	NSMutableDictionary* _offerDictionary;
	NSString* _offerIdentifier;
	NSArray* _supportedDevices;

}

@property (nonatomic,readonly) NSString * offerIdentifier;                                             //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * priceDisplay; 
@property (nonatomic,readonly) NSString * actionDisplayName; 
@property (getter=isOneTapOffer,nonatomic,readonly) BOOL oneTapOffer; 
@property (getter=isPreorder,nonatomic,readonly) BOOL preorder; 
@property (nonatomic,readonly) SSItemMedia * offerMedia; 
@property (nonatomic,readonly) SSDialog * confirmationDialog; 
@property (nonatomic,readonly) SSDialog * successDialog; 
@property (nonatomic,readonly) NSArray * supportedDevices; 
@property (nonatomic,readonly) SSNetworkConstraints * networkConstraints; 
@property (nonatomic,readonly) NSSet * accountIdentifiers; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) long long estimatedDiskSpaceNeeded; 
@property (nonatomic,readonly) id requiredSoftwareCapabilities; 
@property (nonatomic,readonly) BOOL shouldShowPlusIcon; 
@property (assign,setter=_setOfferItem:,getter=_offerItem,nonatomic) SSItem * _offerItem;              //@synthesize item=_item - In the implementation block
+(id)_preferredOfferIdentifiers;
-(id)priceDisplay;
-(id)buyParameters;
-(void)setBuyParameters:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)actionType;
-(id)networkConstraints;
-(BOOL)isPreorder;
-(void)_setOfferItem:(id)arg1 ;
-(id)confirmationDialog;
-(id)successDialog;
-(id)supportedDevices;
-(id)accountIdentifiers;
-(long long)estimatedDiskSpaceNeeded;
-(id)requiredSoftwareCapabilities;
-(id)_offerItem;
-(void)setPriceDisplay:(id)arg1 ;
-(void)setActionDisplayName:(id)arg1 ;
-(void)setOneTapOffer:(BOOL)arg1 ;
-(id)documentCannotOpenDialog;
-(id)documentRequiredHandlers;
-(id)offerMedia;
-(id)documentUTI;
-(id)allowedToneStyles;
-(id)playableMedia;
-(id)offerIdentifier;
-(id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2 ;
-(BOOL)shouldShowPlusIcon;
-(id)actionDisplayName;
-(BOOL)isOneTapOffer;
@end

