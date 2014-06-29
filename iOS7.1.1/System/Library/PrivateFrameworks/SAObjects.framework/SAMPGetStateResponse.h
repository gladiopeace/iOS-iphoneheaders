/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAMPMediaItem, NSNumber, NSString;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAMPMediaItem * listeningToItem; 
@property (nonatomic,copy) NSNumber * listeningToMusicApplication; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) int state; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)getStateResponse;
+(id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)source;
-(void)setSource:(id)arg1 ;
-(id)encodedClassName;
-(id)listeningToItem;
-(void)setListeningToItem:(id)arg1 ;
-(id)listeningToMusicApplication;
-(void)setListeningToMusicApplication:(id)arg1 ;
@end

