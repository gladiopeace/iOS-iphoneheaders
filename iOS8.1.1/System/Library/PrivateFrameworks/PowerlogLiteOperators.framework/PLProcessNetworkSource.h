/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
@class NSDictionary;

@interface PLProcessNetworkSource : NSObject {

	NSDictionary* _descriptionDictionary;
	NSDictionary* _countsDictionary;
	NStatSourceRef _source;

}

@property (nonatomic,copy) NSDictionary * descriptionDictionary;              //@synthesize descriptionDictionary=_descriptionDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * countsDictionary;                   //@synthesize countsDictionary=_countsDictionary - In the implementation block
@property (assign,nonatomic) NStatSourceRef source;                           //@synthesize source=_source - In the implementation block
-(NStatSourceRef)source;
-(void)setSource:(NStatSourceRef)arg1 ;
-(id)initWithSource:(NStatSourceRef)arg1 ;
-(NSDictionary *)descriptionDictionary;
-(void)setDescriptionDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)countsDictionary;
-(void)setCountsDictionary:(NSDictionary *)arg1 ;
@end

