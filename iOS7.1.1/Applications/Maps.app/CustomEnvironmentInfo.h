/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/EnvironmentInfo.h>

@class NSMapTable, NSString;

@interface CustomEnvironmentInfo : EnvironmentInfo {

	NSMapTable* _overrideURLs;
	NSString* _uuid;

}
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)updateWithURLs:(id)arg1 ;
-(id)overrideURLs;
-(void)save;
-(BOOL)isActive;
-(id)dictionaryRepresentation;
-(void).cxx_destruct;
-(void)makeActive;
-(void)delete;
@end

