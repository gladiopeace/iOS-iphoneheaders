/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedAggregateDictionary;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)incrementKey:(id)arg1 ;
-(BOOL)isEnabled;
-(int)commit;
-(void)significantTimeChanged;
-(void)clearDistributionKey:(id)arg1 ;
-(void)clearScalarKey:(id)arg1 ;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)decrementKey:(id)arg1 ;
@end

