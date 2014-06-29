/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface VVVerifier : NSObject {

	NSMutableDictionary* _checkpointDictionary;
	NSArray* _keyDescriptions;

}
+(id)sharedVerifier;
-(void)dealloc;
-(id)_checkpointDictionaryFilePath;
-(id)keyDescriptions;
-(id)_checkpointDictionary;
-(void)_saveCheckpointDictionary;
-(bool)valueForCheckpointKey:(id)arg1 exists:(bool*)arg2 ;
-(void)_checkpointDictionaryChanged;
-(id)configurationDictionary;
-(void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4 ;
-(void)storeValue:(bool)arg1 forCheckpointKey:(id)arg2 ;
-(id)readableError;
-(id)humanReadableConfigurationDictionary:(id*)arg1 ;
@end

