/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICCameraDevice, ICCameraFolder, NSString, NSDate, NSMutableDictionary;

@interface ICCameraItemProperties : NSObject {

	ICCameraDevice* _device;
	ICCameraFolder* _parentFolder;
	NSString* _name;
	NSString* _UTI;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	bool _locked;
	NSMutableDictionary* _userData;

}

@property (assign) ICCameraDevice * device;                     //@synthesize device=_device - In the implementation block
@property (assign) ICCameraFolder * parentFolder;               //@synthesize parentFolder=_parentFolder - In the implementation block
@property (retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (retain) NSString * UTI;                              //@synthesize UTI=_UTI - In the implementation block
@property (retain) NSDate * creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * modificationDate;                   //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign) bool locked;                                 //@synthesize locked=_locked - In the implementation block
@property (retain) NSMutableDictionary * userData;              //@synthesize userData=_userData - In the implementation block
-(void)setDevice:(id)arg1 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setLocked:(bool)arg1 ;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(id)UTI;
-(void)setUTI:(id)arg1 ;
-(id)device;
-(void)setParentFolder:(id)arg1 ;
-(bool)locked;
-(id)parentFolder;
-(void)setModificationDate:(id)arg1 ;
-(id)creationDate;
-(id)modificationDate;
-(void)setCreationDate:(id)arg1 ;
-(void)finalize;
@end

