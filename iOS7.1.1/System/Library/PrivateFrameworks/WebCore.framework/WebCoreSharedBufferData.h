/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<WebCore::SharedBuffer>* sharedBuffer;

}
+(void)initialize;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)finalize;
-(id)initWithSharedBuffer:(SharedBuffer*)arg1 ;
@end

