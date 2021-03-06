/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem {

	CoreDAVLeafItem* _status;
	CoreDAVItem* _prop;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;

}

@property (retain) CoreDAVLeafItem * status;                            //@synthesize status=_status - In the implementation block
@property (retain) CoreDAVItem * prop;                                  //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;              //@synthesize errorItem=_errorItem - In the implementation block
@property (retain) CoreDAVLeafItem * responseDescription;               //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)errorItem;
-(id)responseDescription;
-(void)setErrorItem:(id)arg1 ;
-(void)setResponseDescription:(id)arg1 ;
-(id)prop;
-(void)setProp:(id)arg1 ;
@end

