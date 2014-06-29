/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:16 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATHardwareInputSource.h>

@class NSString;

@interface SCATMFIInputSource : SCATHardwareInputSource {

	NSString* _productName;
	NSString* _serialNumber;
	NSString* _manufacturerName;
	NSString* _versionNumber;
	int _availableButtons;

}

@property (nonatomic,retain) NSString * productName;                   //@synthesize productName=_productName - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * manufacturerName;              //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,retain) NSString * versionNumber;                 //@synthesize versionNumber=_versionNumber - In the implementation block
@property (assign,nonatomic) int availableButtons;                     //@synthesize availableButtons=_availableButtons - In the implementation block
-(BOOL)isMFIInputSource;
-(int)availableButtons;
-(int)_actionForButtonNumber:(int)arg1 withActions:(id)arg2 ;
-(void)setAvailableButtons:(int)arg1 ;
-(BOOL)isAvailable;
-(id)versionNumber;
-(void)dealloc;
-(id)manufacturerName;
-(void)setManufacturerName:(id)arg1 ;
-(id)productName;
-(void)setSerialNumber:(id)arg1 ;
-(void)setProductName:(id)arg1 ;
-(id)serialNumber;
-(void)setVersionNumber:(id)arg1 ;
@end

