/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKStructuredLocation, NSDictionary;

@interface RemindersLocationItem : NSObject {

	BOOL _isLocationBeingDetermined;
	EKStructuredLocation* _location;
	NSDictionary* _addressDictionary;
	int _type;

}

@property (nonatomic,retain) EKStructuredLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDictionary * addressDictionary;              //@synthesize addressDictionary=_addressDictionary - In the implementation block
@property (assign,nonatomic) BOOL isLocationBeingDetermined;                //@synthesize isLocationBeingDetermined=_isLocationBeingDetermined - In the implementation block
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
-(void)setAddressDictionary:(id)arg1 ;
-(id)stringForSubtitle;
-(BOOL)isLocationBeingDetermined;
-(void)setIsLocationBeingDetermined:(BOOL)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)label;
-(id)location;
-(void)reset;
-(void).cxx_destruct;
-(id)addressDictionary;
-(void)setLocation:(id)arg1 ;
@end

