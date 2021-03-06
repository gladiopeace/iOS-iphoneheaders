/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface CKPackageSection : NSObject {

	int _index;
	NSData* _signature;
	long long _size;

}

@property (nonatomic,readonly) int index;                       //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSData * signature;              //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) long long size;                    //@synthesize size=_size - In the implementation block
-(long long)size;
-(id)description;
-(void)setSize:(long long)arg1 ;
-(int)index;
-(NSData *)signature;
-(id)CKPropertiesDescription;
-(id)initWithIndex:(int)arg1 signature:(id)arg2 size:(long long)arg3 ;
@end

