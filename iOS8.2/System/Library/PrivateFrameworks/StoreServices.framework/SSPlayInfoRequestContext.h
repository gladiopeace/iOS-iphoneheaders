/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@class NSNumber, NSString, NSData, NSArray;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSNumber* _contentIdentifier;
	NSString* _playerGUID;
	NSData* _sic;
	NSArray* _sinfs;

}

@property (nonatomic,copy) NSString * playerGUID;                     //@synthesize playerGUID=_playerGUID - In the implementation block
@property (nonatomic,copy) NSData * SICData;                          //@synthesize sic=_sic - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                           //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * contentIdentifier;              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)sinfs;
-(void)setPlayerGUID:(NSString *)arg1 ;
-(void)setSICData:(NSData *)arg1 ;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setContentIdentifier:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)accountIdentifier;
-(NSData *)SICData;
-(NSNumber *)contentIdentifier;
-(NSString *)playerGUID;
@end
