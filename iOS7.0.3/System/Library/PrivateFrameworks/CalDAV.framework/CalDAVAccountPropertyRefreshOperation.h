/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {

	BOOL _fetchPrincipalSearchProperties;

}

@property (assign,nonatomic,@dynamic) <CalDAVAccountPropertyRefreshDelegate> * delegate; 
@property (assign) BOOL fetchPrincipalSearchProperties;                                               //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
-(BOOL)fetchPrincipalSearchProperties;
-(void)setFetchPrincipalSearchProperties:(BOOL)arg1 ;
-(void)refreshProperties;
@end

