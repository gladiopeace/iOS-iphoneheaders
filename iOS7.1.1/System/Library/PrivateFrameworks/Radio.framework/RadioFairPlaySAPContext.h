/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@interface RadioFairPlaySAPContext : NSObject {

	FPSAPContextOpaque_Ref _session;

}
-(void)dealloc;
-(id)_initWithFPSAPContext:(void*)arg1 ;
-(bool)verifyData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(id)signatureWithData:(id)arg1 error:(id*)arg2 ;
@end

