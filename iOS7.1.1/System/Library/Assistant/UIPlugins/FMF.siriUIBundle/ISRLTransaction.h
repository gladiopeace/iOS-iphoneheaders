/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLConnection, NSURLRequest, NSCachedURLResponse, NSHTTPURLResponse, NSMutableData, NSError;

@interface ISRLTransaction : NSObject {

	NSURLConnection* connection;
	NSURLRequest* request;
	NSCachedURLResponse* cachedResponse;
	NSHTTPURLResponse* response;
	NSMutableData* data;
	NSError* error;
	id target;
	SEL action;
	/*^block*/ id completionBlock;
	bool completed;
	bool isExpired;

}

@property (nonatomic,retain) NSURLRequest * request; 
@property (nonatomic,retain) NSHTTPURLResponse * response; 
@property (nonatomic,retain) NSCachedURLResponse * cachedResponse; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) bool completed; 
@property (assign,nonatomic) bool isExpired; 
-(id)initWithConnection:(id)arg1 request:(id)arg2 cachedResponse:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)setResponse:(id)arg1 ;
-(bool)completed;
-(void)setCompleted:(bool)arg1 ;
-(id)cachedResponse;
-(void)setError:(id)arg1 ;
-(void)setRequest:(id)arg1 ;
-(id)data;
-(id)response;
-(id)request;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(void)appendData:(id)arg1 ;
-(void).cxx_destruct;
-(void)setIsExpired:(bool)arg1 ;
-(id)error;
-(void)setCachedResponse:(id)arg1 ;
-(bool)isExpired;
@end

