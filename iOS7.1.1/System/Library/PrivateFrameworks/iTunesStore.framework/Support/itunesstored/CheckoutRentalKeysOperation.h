/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, NSArray, SSURLConnectionResponse;

@interface CheckoutRentalKeysOperation : ISOperation {

	NSNumber* _accountIdentifier;
	BOOL _backgroundCheckout;
	NSString* _clientIdentifierHeader;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	SSURLConnectionResponse* _urlResponse;
	NSString* _userAgent;
	BOOL _shouldValidateRentalInfo;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (getter=isBackgroundCheckout) BOOL backgroundCheckout;              //@synthesize backgroundCheckout=_backgroundCheckout - In the implementation block
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * userAgent; 
@property (assign,nonatomic) BOOL shouldValidateRentalInfo;                   //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(id)_primarySINF;
-(id)_copyAccountIdentifier;
-(id)_copyRentalIdentifier;
-(void)_showErrorDialogForOutput:(id)arg1 ;
-(BOOL)isBackgroundCheckout;
-(BOOL)_performCheckout:(id*)arg1 ;
-(BOOL)_haveValidRentalInformation;
-(id)initWithStoreDownloadSinfs:(id)arg1 ;
-(void)setBackgroundCheckout:(BOOL)arg1 ;
-(id)sinfs;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(BOOL)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)run;
-(void)setUserAgent:(id)arg1 ;
-(id)accountIdentifier;
-(id)_bodyData;
-(id)initWithSinfs:(id)arg1 ;
-(id)rentalKeyIdentifier;
-(BOOL)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(BOOL)arg1 ;
-(id)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(id)userAgent;
-(id)URLResponse;
@end

