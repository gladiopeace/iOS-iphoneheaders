/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface VSRecognitionResult : NSObject
+(void)initialize;
+(id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3 ;
-(id)retain;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)description;
-(id)modelIdentifier;
-(int)elementCount;
-(oneway void)release;
-(char)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(int)arg3 ;
-(id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2 ;
-(id)valueOfFirstElementWithClassIdentifier:(id)arg1 ;
-(id)createHandler;
-(void)setRecognitionAction:(id)arg1 ;
-(id)recognitionAction;
@end

