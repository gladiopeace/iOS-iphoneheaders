/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload : MCPayload {

	NSMutableDictionary* _restrictions;
	NSString* _iCloudPassword;

}

@property (nonatomic,retain) NSString * iCloudPassword;              //@synthesize iCloudPassword=_iCloudPassword - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)restrictions;
-(void).cxx_destruct;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)installationWarnings;
-(id)_restrictedFeatureStrings;
-(id)_enforcedFeatureStrings;
-(id)_defaultMediaSettings;
-(id)_intersectionStrings;
-(id)_unionStrings;
-(void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(bool)arg3 ;
-(id)iCloudPassword;
-(void)setICloudPassword:(id)arg1 ;
@end

