/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:22:23 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Support/vibrationmanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TLVibrationManagerServiceUtilities : NSObject
+(id)userGeneratedVibrationStoreFileURL;
+(id)dictionaryFromXPCObject:(id)arg1 error:(id*)arg2 ;
+(id)errorWithDomain:(id)arg1 description:(id)arg2 ;
+(id)copyXPCObjectFromDictionary:(id)arg1 inReplyToXPCObject:(id)arg2 error:(id*)arg3 ;
+(BOOL)_validateObjectWithError:(id*)arg1 validationBlock:(/*^block*/ id)arg2 ;
+(BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)arg1 error:(id*)arg2 ;
+(id)_sharedResourceFilePathForRelativeFilePath:(id)arg1 ;
+(BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)arg1 error:(id*)arg2 ;
+(id)_sharedResourceURLForRelativeFilePath:(id)arg1 ;
@end

