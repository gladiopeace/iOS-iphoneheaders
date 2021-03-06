/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <CoreIndoor/NSSecureCoding.h>

@class NSString;

@interface CLIndoorLocation : NSObject <NSSecureCoding> {

	BOOL _requestsGpsAssistance;
	NSString* _locationId;
	NSString* _locationDescription;
	SCD_Struct_CL8 _location;

}

@property (assign,nonatomic) SCD_Struct_CL9 location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * locationId;                       //@synthesize locationId=_locationId - In the implementation block
@property (nonatomic,retain) NSString * locationDescription;              //@synthesize locationDescription=_locationDescription - In the implementation block
@property (assign,nonatomic) BOOL requestsGpsAssistance;                  //@synthesize requestsGpsAssistance=_requestsGpsAssistance - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CL9)location;
-(BOOL)requestsGpsAssistance;
-(void)setRequestsGpsAssistance:(BOOL)arg1 ;
-(void)setLocation:(SCD_Struct_CL9)arg1 ;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
@end

