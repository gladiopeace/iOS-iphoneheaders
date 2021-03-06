/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/NSSecureCoding.h>
#import <CloudPhotoLibrary/NSCopying.h>

@class NSURL, NSString;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying> {

	BOOL _available;
	NSURL* _fileURL;
	NSString* _fingerPrint;
	unsigned long long _fileSize;
	NSString* _fileUTI;
	CGSize _imageDimensions;

}

@property (nonatomic,copy) NSURL * fileURL;                                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                           //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) CGSize imageDimensions;                         //@synthesize imageDimensions=_imageDimensions - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                               //@synthesize fileUTI=_fileUTI - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)identityFromStoredIdentity:(id)arg1 ;
+(id)fileUTIForExtension:(id)arg1 ;
+(id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)extensionForFileUTI:(id)arg1 ;
+(id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3 ;
+(id)identityForStorageName:(id)arg1 ;
+(Class)_identityImplementationClass;
+(void)setResourceIdentityImplementation:(Class)arg1 ;
+(Class)resourceIdentityImplementation;
+(id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)alloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(id)identityForStorage;
-(NSString *)fingerPrint;
-(NSString *)fileUTI;
-(unsigned long long)fileSize;
-(BOOL)isAvailable;
-(void)setFileSize:(unsigned long long)arg1 ;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setFingerPrint:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
@end

