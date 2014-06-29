/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSCoding>

@property (readonly) NSString * dominantScript; 
@property (readonly) NSDictionary * languageMap; 
+(id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(id)dominantScript;
-(id)languageMap;
-(id)dominantLanguage;
-(id)allScripts;
-(id)languagesForScript:(id)arg1 ;
-(id)dominantLanguageForScript:(id)arg1 ;
-(id)allLanguages;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)classForCoder;
@end

