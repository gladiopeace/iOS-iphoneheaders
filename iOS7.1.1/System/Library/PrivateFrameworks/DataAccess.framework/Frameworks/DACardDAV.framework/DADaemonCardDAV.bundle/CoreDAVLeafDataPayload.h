/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVLeafDataPayload <NSObject>
@property (retain) NSURL * serverID; 
@property (readonly) NSData * dataPayload; 
@property (readonly) NSString * syncKey; 
@property (readonly) NSArray * childrenOrder; 
@optional
-(id)childrenOrder;

@required
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
-(id)dataPayload;
-(void)setServerID:(id)arg1;
-(id)serverID;
-(id)syncKey;
@end

