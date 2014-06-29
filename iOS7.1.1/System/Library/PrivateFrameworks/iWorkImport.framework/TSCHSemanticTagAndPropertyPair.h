/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying> {

	TSCHStyleSemanticTag* mSemanticTag;
	int mProperty;

}
+(id)pairWithSemanticTag:(id)arg1 property:(int)arg2 ;
-(id)initWithSemanticTag:(id)arg1 property:(int)arg2 ;
-(id)semanticTag;
-(int)property;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
@end

