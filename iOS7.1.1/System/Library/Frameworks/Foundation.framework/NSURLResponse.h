/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;

}
+(bool)supportsSecureCoding;
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(id)allHeaderFields;
-(int)statusCode;
-(long long)maxExpectedContentLength;
-(id)_cacheTime;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(id)_createdDate;
-(id)_lastModifiedDate;
-(bool)_mustRevalidate;
-(double)_freshnessLifetime;
-(double)_calculatedExpiration;
-(id)_peerCertificateChain;
-(void)dealloc;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(id)textEncodingName;
-(long long)expectedContentLength;
-(id)suggestedFilename;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)URL;
-(id)MIMEType;
-(CFURLResponseRef)_CFURLResponse;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
@end

