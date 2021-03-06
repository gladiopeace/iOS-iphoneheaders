/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SCATCommonTaskStep : NSObject {

	NSString* _handlerIdentifier;
	NSDictionary* _operationDictionary;
	NSString* _stepDescription;

}

@property (nonatomic,copy,readonly) NSString * handlerIdentifier;                      //@synthesize handlerIdentifier=_handlerIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * operationDictionary;              //@synthesize operationDictionary=_operationDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * stepDescription;                        //@synthesize stepDescription=_stepDescription - In the implementation block
+(id)commonTaskStepWithDictionary:(id)arg1 ;
-(NSDictionary *)operationDictionary;
-(NSString *)stepDescription;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(NSString *)handlerIdentifier;
@end

