/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDKeyedObject.h>

@class CHDDataLabel, CHDMarker, OADGraphicProperties;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {

	CHDDataLabel* mDataLabel;
	CHDMarker* mMarker;
	unsigned long long mDataValueIndex;
	OADGraphicProperties* mGraphicProperties;

}
+(id)dataValueProperties;
-(void)dealloc;
-(id)init;
-(long long)key;
-(id)graphicProperties;
-(id)marker;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setDataValueIndex:(unsigned long long)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setDataLabel:(id)arg1 ;
-(unsigned long long)dataValueIndex;
-(id)shallowCopyWithIndex:(unsigned long long)arg1 ;
-(id)dataLabel;
@end

