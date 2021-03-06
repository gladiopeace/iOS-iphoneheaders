/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSSet;

@interface CRAddressHandlerIdentity : NSObject {

	NSString* _className;
	NSSet* _supportedAddressKinds;

}

@property (nonatomic,copy) NSSet * supportedAddressKinds;              //@synthesize supportedAddressKinds=_supportedAddressKinds - In the implementation block
+(id)identityForAddressHandler:(id)arg1 ;
-(NSSet *)supportedAddressKinds;
-(id)initForAddressHandler:(id)arg1 ;
-(void)setSupportedAddressKinds:(NSSet *)arg1 ;
-(void)dealloc;
-(id)description;
@end

