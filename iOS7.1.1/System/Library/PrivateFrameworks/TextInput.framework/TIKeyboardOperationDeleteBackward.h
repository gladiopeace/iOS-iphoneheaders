/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TIKeyboardOperation.h>

@interface TIKeyboardOperationDeleteBackward : TIKeyboardOperation {

	bool _shouldNotify;
	unsigned long long _deletionCount;

}

@property (nonatomic,readonly) unsigned long long deletionCount;              //@synthesize deletionCount=_deletionCount - In the implementation block
@property (nonatomic,readonly) bool shouldNotify;                             //@synthesize shouldNotify=_shouldNotify - In the implementation block
+(bool)supportsSecureCoding;
+(id)operationWithDeletionCount:(unsigned long long)arg1 ;
+(id)operationWithDeletionCount:(unsigned long long)arg1 shouldNotify:(bool)arg2 ;
-(void)main;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)deletionCount;
-(bool)shouldNotify;
-(id)propertiesForDescription;
-(id)initWithDeletionCount:(unsigned long long)arg1 shouldNotify:(bool)arg2 ;
@end

