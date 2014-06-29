/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSXMLParserDelegate.h>

@class NSString, FlickrPhotoSet, NSMutableString, NSMutableArray;

@interface FlickrPhotoSetResponse : NSObject <NSXMLParserDelegate> {

	bool _success;
	NSString* _errorDescription;
	FlickrPhotoSet* _currentPhotoSet;
	NSMutableString* _dataString;
	long long _stage;
	NSMutableArray* _photoSets;

}

@property (assign,nonatomic) long long stage;                         //@synthesize stage=_stage - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoSets;              //@synthesize photoSets=_photoSets - In the implementation block
+(id)responseWithData:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(long long)stage;
-(void)setStage:(long long)arg1 ;
-(id)photoSets;
-(void)setPhotoSets:(id)arg1 ;
@end

