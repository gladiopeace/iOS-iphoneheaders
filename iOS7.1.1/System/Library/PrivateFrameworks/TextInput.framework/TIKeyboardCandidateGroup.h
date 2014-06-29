/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSOrderedSet, NSArray;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSOrderedSet* _candidates;
	NSArray* _nonExtensionCandidates;

}

@property (copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (copy) NSOrderedSet * candidates;                       //@synthesize candidates=_candidates - In the implementation block
@property (retain) NSArray * nonExtensionCandidates;              //@synthesize nonExtensionCandidates=_nonExtensionCandidates - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)sortUsingComparator:(/*^block*/ id)arg1 ;
-(id)title;
-(id)candidates;
-(id)initWithTitle:(id)arg1 candidates:(id)arg2 ;
-(void)setCandidates:(id)arg1 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(bool)hasAlternativeText;
-(id)nonExtensionCandidates;
-(void)addCandidate:(id)arg1 ;
-(id)mutableCandidates;
-(void)setNonExtensionCandidates:(id)arg1 ;
@end

