/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPSplitableData.h>

@protocol OS_dispatch_queue, TSPDataStorage;
@class NSObject, NSString, TSPDataManager, TSPObjectContext;

@interface TSPData : NSObject <TSPSplitableData> {

	long long _identifier;
	NSObject<OS_dispatch_queue>* _accessQueue;
	<TSPDataStorage>* _storage;
	NSString* _filename;
	TSPDataManager* _manager;
	array<unsigned char, 20> _digest;
	bool _isCulling;

}

@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) bool isReadable; 
@property (nonatomic,readonly) bool isApplicationData; 
@property (nonatomic,readonly) bool isExternalData; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) bool needsDownload; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) <TSPDataStorage> * storage; 
+(id)pasteboardTypeForIdentifier:(long long)arg1 ;
+(void)dataForAssetsLibraryURL:(id)arg1 context:(id)arg2 queue:(id)arg3 completion:(/*^block*/ id)arg4 ;
+(id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(bool)updateDigest:(array<unsigned char, 20>*)arg1 withProtobufString:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 ;
+(id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(bool)arg2 context:(id)arg3 ;
+(id)cullingListenersQueue;
+(id)cullingListeners;
+(id)requiredAVAssetOptions;
+(id)dataFromURL:(id)arg1 context:(id)arg2 ;
+(id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3 ;
+(id)readOnlyDataFromURL:(id)arg1 ;
+(id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2 ;
+(void)addCullingListener:(id)arg1 ;
+(void)removeCullingListener:(id)arg1 ;
+(id)null;
-(id)pasteboardType;
-(void)splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(/*^block*/ id)arg2 ;
-(id)UIImage;
-(id)storage;
-(bool)needsDownload;
-(id)packageLocator;
-(unsigned char)packageIdentifier;
-(void)performIOChannelReadWithAccessor:(/*^block*/ id)arg1 ;
-(bool)isStorageInPackage:(id)arg1 ;
-(bool)gilligan_isRemote;
-(void)setStorage:(id)arg1 ;
-(void)setFilename:(id)arg1 storage:(id)arg2 ;
-(id)initWithIdentifier:(long long)arg1 digest:(const array<unsigned char, 20>*)arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5 ;
-(bool)isApplicationData;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(id)AVAssetWithOptions:(id)arg1 ;
-(bool)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1 ;
-(id)documentResourceLocator;
-(id)NSData;
-(void)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 ;
-(id)bookmarkData;
-(CGImageRef)newCGImage;
-(bool)isExternalData;
-(id)copyWithContext:(id)arg1 ;
-(void)performInputStreamReadWithAccessor:(/*^block*/ id)arg1 ;
-(void)addDownloadObserver:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(const array<unsigned char, 20>*)digest;
-(id)preferredFilename;
-(id)AVAsset;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)type;
-(id)context;
-(long long)identifier;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)uniqueName;
-(bool)isReadable;
-(unsigned long long)encodedLength;
-(id)filename;
-(bool)writeToURL:(id)arg1 error:(id*)arg2 ;
@end

