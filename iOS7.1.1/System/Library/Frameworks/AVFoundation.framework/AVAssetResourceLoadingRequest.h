/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetResourceLoadingRequestInternal, NSURLRequest, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequest : NSObject {

	AVAssetResourceLoadingRequestInternal* _loadingRequest;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isFinished,nonatomic,readonly) bool finished; 
@property (getter=isCancelled,nonatomic,readonly) bool cancelled; 
@property (nonatomic,readonly) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest; 
@property (nonatomic,readonly) AVAssetResourceLoadingDataRequest * dataRequest; 
@property (nonatomic,copy) NSURLResponse * response; 
@property (nonatomic,copy) NSURLRequest * redirect; 
-(id)_weakReference;
-(bool)finished;
-(void)_removeFigPlaybackItemListeners;
-(void)_addFigPlaybackItemListeners;
-(id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2 ;
-(bool)_tryToMarkAsCancelled;
-(id)_requestDictionary;
-(id)_resourceLoader;
-(void)_sendDataIncrementally:(id)arg1 data:(id)arg2 ;
-(void)_appendToCachedData:(id)arg1 ;
-(id)redirect;
-(id)contentInformationRequest;
-(id)dataRequest;
-(void)_setContentInformationRequest:(id)arg1 ;
-(void)_setDataRequest:(id)arg1 ;
-(void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2 ;
-(id)_getAndClearCachedData;
-(void)setResponse:(id)arg1 ;
-(void)setRedirect:(id)arg1 ;
-(id)serializableRepresentation;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3 ;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)finishLoading;
-(void)finishLoadingWithError:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(bool)isCancelled;
-(id)response;
-(id)request;
-(bool)isFinished;
-(void)finalize;
@end

