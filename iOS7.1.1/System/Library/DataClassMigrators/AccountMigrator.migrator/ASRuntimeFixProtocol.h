/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASRuntimeFixProtocol <NSObject>
@required
-(int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
-(void)accountsHaveBeenSaved:(bool)arg1;
-(id)supportedAccountTypes;
@end

