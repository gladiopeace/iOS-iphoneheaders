/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/AFUIDataStoring.h>

@class NSMutableDictionary;

@interface SVSDataStore : NSObject <AFUIDataStoring> {

	NSMutableDictionary* _entries;

}
-(id)initWithEntries:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
@end

