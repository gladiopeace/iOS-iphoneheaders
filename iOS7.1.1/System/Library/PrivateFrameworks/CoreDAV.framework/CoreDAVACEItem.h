/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem, CoreDAVInvertItem, CoreDAVGrantItem, CoreDAVDenyItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem;

@interface CoreDAVACEItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;
	CoreDAVInvertItem* _invert;
	CoreDAVGrantItem* _grant;
	CoreDAVDenyItem* _deny;
	CoreDAVItemWithNoChildren* _protectedItem;
	CoreDAVItemWithHrefChildItem* _inherited;

}

@property (retain) CoreDAVPrincipalItem * principal;                       //@synthesize principal=_principal - In the implementation block
@property (retain) CoreDAVInvertItem * invert;                             //@synthesize invert=_invert - In the implementation block
@property (retain) CoreDAVGrantItem * grant;                               //@synthesize grant=_grant - In the implementation block
@property (retain) CoreDAVDenyItem * deny;                                 //@synthesize deny=_deny - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * protectedItem;              //@synthesize protectedItem=_protectedItem - In the implementation block
@property (retain) CoreDAVItemWithHrefChildItem * inherited;               //@synthesize inherited=_inherited - In the implementation block
+(id)copyParseRules;
+(id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)invert;
-(id)deny;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)principal;
-(id)grant;
-(id)inherited;
-(id)protectedItem;
-(void)setPrincipal:(id)arg1 ;
-(void)setInvert:(id)arg1 ;
-(void)setGrant:(id)arg1 ;
-(void)setDeny:(id)arg1 ;
-(void)setProtectedItem:(id)arg1 ;
-(void)setInherited:(id)arg1 ;
-(id)initWithPrincipal:(id)arg1 shouldInvert:(bool)arg2 action:(int)arg3 withPrivileges:(id)arg4 ;
-(void)write:(id)arg1 ;
@end

