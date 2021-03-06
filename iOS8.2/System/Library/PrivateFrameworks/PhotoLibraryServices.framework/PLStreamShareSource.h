/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString, NSURL;

@interface PLStreamShareSource : NSObject {

	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	int _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                    //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;              //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                      //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,nonatomic) int mediaType;                         //@synthesize mediaType=_mediaType - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fileExtension;
-(NSData *)mediaData;
-(int)mediaType;
-(void)setMediaData:(NSData *)arg1 ;
-(NSURL *)mediaURL;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setMediaType:(int)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(id)serializedDictionary;
@end

