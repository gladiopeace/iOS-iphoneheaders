/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADClient.h>

@class CHDAnchor;

@interface CHDOfficeArtClient : NSObject <OADClient> {

	CHDAnchor* mAnchor;

}
-(void)dealloc;
-(CGRect)bounds;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(bool)hasBounds;
@end

