/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <itunescloudd/CloudOperationCoding.h>

@class HSCloudLibrary, NSString;

@interface CloudLibraryOperation : NSOperation <CloudOperationCoding> {

	int status;
	HSCloudLibrary* _library;
	NSString* _libraryIdentifier;

}

@property (nonatomic,retain) HSCloudLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,copy) NSString * libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (assign,nonatomic) int status; 
-(id)newPropertyListRepresentation;
-(void)setLibraryIdentifier:(id)arg1 ;
-(id)libraryIdentifier;
-(void).cxx_destruct;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
@end
