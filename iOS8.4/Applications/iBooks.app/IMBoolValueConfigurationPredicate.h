/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMConfigurationPredicate.h>

@interface IMBoolValueConfigurationPredicate : IMConfigurationPredicate {

	char _value;

}

@property (assign,nonatomic) char value;              //@synthesize value=_value - In the implementation block
+(id)predicateWithValue:(char)arg1 ;
-(id)initWithValue:(char)arg1 ;
-(char)value;
-(void)setValue:(char)arg1 ;
-(char)evaluateWithContext:(id)arg1 ;
@end

