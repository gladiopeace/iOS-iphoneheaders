/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WFLSMResult, NSString;

@interface WFVerdict : NSObject {

	bool restricted;
	WFLSMResult* LSMEvaluationResult;
	NSString* message;
	NSString* URL;
	int evidence;

}
+(id)verdictWithRestriction:(bool)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(id)message;
-(id)URL;
-(void)setMessage:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)setRestricted:(bool)arg1 ;
-(void)setEvidence:(int)arg1 ;
-(void)setLSMEvaluationResult:(id)arg1 ;
-(id)LSMEvaluationResult;
-(bool)restricted;
-(int)evidence;
@end

