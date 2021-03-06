/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSURLRequest, NSURLResponse, NSError, NSURL;

@interface NDTaskInfo : NSObject <NSSecureCoding> {

	BOOL _hasStarted;
	unsigned _identifier;
	int _taskKind;
	int _taskPriority;
	int _state;
	unsigned _suspendCount;
	NSString* _taskDescription;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	NSError* _error;
	NSURL* _fileURL;
	NSURL* _downloadFileURL;
	NSString* _bundleID;
	NSString* _sessionID;
	NSString* _uniqueIdentifier;
	double _creationTime;

}

@property (assign) unsigned identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign) int taskKind;                              //@synthesize taskKind=_taskKind - In the implementation block
@property (assign) int taskPriority;                          //@synthesize taskPriority=_taskPriority - In the implementation block
@property (assign) double creationTime;                       //@synthesize creationTime=_creationTime - In the implementation block
@property (assign) int state;                                 //@synthesize state=_state - In the implementation block
@property (assign) unsigned suspendCount;                     //@synthesize suspendCount=_suspendCount - In the implementation block
@property (copy) NSString * taskDescription;                  //@synthesize taskDescription=_taskDescription - In the implementation block
@property (copy) NSURLRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;               //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy) NSURLResponse * response;                    //@synthesize response=_response - In the implementation block
@property (copy) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (retain) NSURL * fileURL;                           //@synthesize fileURL=_fileURL - In the implementation block
@property (retain) NSURL * downloadFileURL;                   //@synthesize downloadFileURL=_downloadFileURL - In the implementation block
@property (retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) BOOL hasStarted;                           //@synthesize hasStarted=_hasStarted - In the implementation block
@property (retain) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)taskKind;
-(id)downloadFileURL;
-(void)setDownloadFileURL:(id)arg1 ;
-(id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(void)setTaskPriority:(int)arg1 ;
-(id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(void)setHasStarted:(BOOL)arg1 ;
-(id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(void)setTaskKind:(int)arg1 ;
-(void)setResponse:(id)arg1 ;
-(void)setSuspendCount:(unsigned)arg1 ;
-(void)setCurrentRequest:(id)arg1 ;
-(void)setOriginalRequest:(id)arg1 ;
-(id)originalRequest;
-(id)currentRequest;
-(unsigned)suspendCount;
-(id)taskDescription;
-(void)setTaskDescription:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(id)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(unsigned)identifier;
-(id)response;
-(id)uniqueIdentifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 ;
-(id)fileURL;
-(int)taskPriority;
-(id)sessionID;
-(void)setSessionID:(id)arg1 ;
-(void)setCreationTime:(double)arg1 ;
-(void)setFileURL:(id)arg1 ;
-(id)error;
-(double)creationTime;
-(BOOL)hasStarted;
-(void)setBundleID:(id)arg1 ;
-(void).cxx_destruct;
@end

