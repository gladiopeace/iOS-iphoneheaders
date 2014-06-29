/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QuerySection : NSObject {

	unsigned long long _sectionIndex;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 sectionIndex:(unsigned long long)arg2 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
@end

