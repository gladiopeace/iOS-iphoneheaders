/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/NSCopying.h>
#import <MobileMail/NSMutableCopying.h>

@class NSString, NSArray, MFMessageCriterion;

@interface SourceSearchContext : NSObject <NSCopying, NSMutableCopying> {

	NSString* _searchText;
	NSArray* _searchTerms;
	MFMessageCriterion* _criterion;

}

@property (nonatomic,copy) NSString * searchText;                         //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSArray * searchTerms;                         //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,retain) MFMessageCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)searchText;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(NSArray *)searchTerms;
-(MFMessageCriterion *)criterion;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
@end

