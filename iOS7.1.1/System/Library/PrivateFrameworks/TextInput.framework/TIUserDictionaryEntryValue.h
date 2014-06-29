/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>
#import <TextInput/TIUserDictionaryEntry.h>

@class NSString, NSNumber;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {

	NSString* _phrase;
	NSString* _shortcut;
	NSNumber* _timestamp;

}

@property (nonatomic,copy) NSString * phrase;                   //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                 //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(bool)supportsSecureCoding;
+(id)valueWithEntry:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(id)phrase;
-(void)setPhrase:(id)arg1 ;
-(id)shortcut;
-(void)setShortcut:(id)arg1 ;
-(bool)matchesEntry:(id)arg1 ;
@end

