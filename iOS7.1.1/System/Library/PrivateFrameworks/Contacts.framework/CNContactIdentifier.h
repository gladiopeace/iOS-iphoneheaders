/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface CNContactIdentifier : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stringValue;

}

@property (readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(bool)supportsSecureCoding;
+(id)identifierWithString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)stringValue;
-(void).cxx_destruct;
@end

