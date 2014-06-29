/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, CalDAVScheduleChangesProperty, NSString, ICSDocument, ICSEvent;

@interface CaliTIPMessage : NSObject {

	NSData* _data;
	CalDAVScheduleChangesProperty* _scheduleChanges;
	NSString* _filename;
	ICSDocument* _document;
	ICSEvent* _event;

}
-(void)dealloc;
-(id)description;
-(id)data;
-(long long)compare:(id)arg1 ;
-(id)calendar;
-(id)event;
-(id)document;
-(id)initWithData:(id)arg1 filename:(id)arg2 scheduleChanges:(id)arg3 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 ;
-(id)scheduleChanges;
-(id)masterEvent;
-(id)allOccurrences;
-(id)occurrences;
-(id)filename;
@end

