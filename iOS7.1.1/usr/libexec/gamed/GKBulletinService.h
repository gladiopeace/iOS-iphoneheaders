/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKService.h>
#import <gamed/GKBulletinService.h>

@protocol GKBulletinService <NSObject>
@required
-(oneway void)handleBulletinResponse:(id)arg1;
@end


@interface GKBulletinService : GKService <GKBulletinService>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
+(BOOL)requiresAuthentication;
-(oneway void)handleBulletinResponse:(id)arg1 ;
@end

