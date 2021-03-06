/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, NSString, NSNumber, NSURLRequest, NSHTTPURLResponse, NSData, ISServerInteractionController, NSURLSessionDataTask, NSDictionary, NSURLConnection;

@interface ISCommandBase : NSOperation {

	NSError* _error;
	NSString* _scheme;
	NSString* _username;
	NSString* _password;
	NSString* _host;
	NSNumber* _port;
	double _timeout;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSData* _responseData;
	ISServerInteractionController* _serverInteractionController;
	NSURLSessionDataTask* _task;
	unsigned long long _redirectCount;
	NSString* _originalHostname;
	NSString* _redirectedHostname;
	NSDictionary* _caseInsensitiveHeaders;
	NSURLConnection* _connection;

}

@property (copy) NSError * error;                                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * scheme;                                                                 //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * username;                                                               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                               //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * host;                                                                   //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSNumber * port;                                                                   //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) double timeout;                                                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;                                                    //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSData * responseData;                                                           //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic,__weak) ISServerInteractionController * serverInteractionController;              //@synthesize serverInteractionController=_serverInteractionController - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                                                     //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) unsigned long long redirectCount;                                                //@synthesize redirectCount=_redirectCount - In the implementation block
@property (nonatomic,copy) NSString * originalHostname;                                                       //@synthesize originalHostname=_originalHostname - In the implementation block
@property (nonatomic,copy) NSString * redirectedHostname;                                                     //@synthesize redirectedHostname=_redirectedHostname - In the implementation block
@property (nonatomic,retain) NSDictionary * caseInsensitiveHeaders;                                           //@synthesize caseInsensitiveHeaders=_caseInsensitiveHeaders - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                                                    //@synthesize connection=_connection - In the implementation block
-(void)setOriginalHostname:(NSString *)arg1 ;
-(void)setRedirectedHostname:(NSString *)arg1 ;
-(unsigned long long)redirectCount;
-(id)authHeaders;
-(BOOL)wasRedirected;
-(ISServerInteractionController *)serverInteractionController;
-(void)setCaseInsensitiveHeaders:(NSDictionary *)arg1 ;
-(BOOL)isTransactionCompleteWithError:(id)arg1 ;
-(NSDictionary *)caseInsensitiveHeaders;
-(NSString *)originalHostname;
-(NSString *)redirectedHostname;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(id)valueForResponseHTTPHeader:(id)arg1 ;
-(void)setServerInteractionController:(ISServerInteractionController *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)cancel;
-(id)init;
-(NSString *)scheme;
-(NSURLRequest *)request;
-(id)path;
-(id)body;
-(void)start;
-(NSString *)host;
-(NSHTTPURLResponse *)response;
-(id)method;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSNumber *)port;
-(NSURLSessionDataTask *)task;
-(BOOL)isConcurrent;
-(NSError *)error;
-(void)setScheme:(NSString *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(NSString *)password;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(BOOL)wasSuccessful;
-(void)setError:(NSError *)arg1 ;
-(double)timeout;
-(NSString *)username;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)headers;
-(void)sendRequest;
@end

