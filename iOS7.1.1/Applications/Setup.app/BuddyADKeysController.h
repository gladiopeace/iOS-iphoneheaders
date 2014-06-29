/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BuddyADKeysController : NSObject {

	NSString* _activationADKey;
	NSString* _appleIDADKey;

}

@property (assign,nonatomic) NSString * activationADKey;              //@synthesize activationADKey=_activationADKey - In the implementation block
@property (assign,nonatomic) NSString * appleIDADKey;                 //@synthesize appleIDADKey=_appleIDADKey - In the implementation block
+(id)sharedController;
-(void)writeADKeys;
-(void)setActivationADKey:(id)arg1 ;
-(void)setAppleIDADKey:(id)arg1 ;
-(id)activationADKey;
-(id)appleIDADKey;
@end

