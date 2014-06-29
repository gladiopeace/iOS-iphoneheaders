/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@interface GQDWPTab : NSObject <GQDNameMappable> {

	float mPosition;
	int mAlignment;
	CFStringRef mLeader;

}
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CFStringRef)leader;
-(void)dealloc;
-(float)position;
-(int)alignment;
@end

