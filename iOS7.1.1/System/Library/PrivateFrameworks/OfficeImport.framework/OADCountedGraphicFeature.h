/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface OADCountedGraphicFeature : NSObject {

	id mFeature;
	unsigned long long mUsageCount;

}

@property (assign,nonatomic) unsigned long long usageCount; 
-(void)dealloc;
-(id)initWithFeature:(id)arg1 ;
-(void)incrementUsageCount;
-(long long)compareUsageCount:(id)arg1 ;
-(id)feature;
-(unsigned long long)usageCount;
-(void)setUsageCount:(unsigned long long)arg1 ;
@end

