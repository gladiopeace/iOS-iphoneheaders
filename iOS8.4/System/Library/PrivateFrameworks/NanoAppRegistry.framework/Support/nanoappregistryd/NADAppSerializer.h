/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface NADAppSerializer : NSObject
-(BOOL)persistApplication:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)applicationAtURL:(id)arg1 ;
-(id)URLForFileInDirectory:(id)arg1 ;
-(BOOL)setVersion:(unsigned long long)arg1 forApplicationAtURL:(id)arg2 ;
-(unsigned long long)versionForApplicationAtURL:(id)arg1 ;
-(id)init;
@end
