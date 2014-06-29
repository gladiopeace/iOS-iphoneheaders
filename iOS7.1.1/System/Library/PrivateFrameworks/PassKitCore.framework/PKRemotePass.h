/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPass.h>

@class PKPassLibrary;

@interface PKRemotePass : PKPass {

	PKPassLibrary* _passLibrary;

}

@property (nonatomic,retain) PKPassLibrary * passLibrary;              //@synthesize passLibrary=_passLibrary - In the implementation block
-(void)dealloc;
-(void)setSettings:(long long)arg1 ;
-(void)setPassLibrary:(id)arg1 ;
-(void)fetchContentWithCompletion:(/*^block*/ id)arg1 ;
-(void)fetchImageSet:(long long)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)archivedPass;
-(id)passLibrary;
@end

