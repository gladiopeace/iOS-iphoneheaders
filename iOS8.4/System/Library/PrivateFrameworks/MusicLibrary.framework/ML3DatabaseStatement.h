/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString, ML3DatabaseConnection;

@interface ML3DatabaseStatement : NSObject {

	NSString* _sql;
	BOOL _clearBindingsAfterRunning;
	BOOL _isExecuting;
	ML3DatabaseConnection* _connection;
	sqlite3_stmtRef _sqliteStatement;

}

@property (nonatomic,readonly) NSString * sql; 
@property (nonatomic,readonly) ML3DatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef sqliteStatement;                 //@synthesize sqliteStatement=_sqliteStatement - In the implementation block
@property (assign,nonatomic) BOOL clearBindingsAfterRunning;                    //@synthesize clearBindingsAfterRunning=_clearBindingsAfterRunning - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                  //@synthesize isExecuting=_isExecuting - In the implementation block
-(void)dealloc;
-(id)description;
-(int)reset;
-(ML3DatabaseConnection *)connection;
-(BOOL)isExecuting;
-(sqlite3_stmtRef)sqliteStatement;
-(NSString *)sql;
-(int)finalizeStatement;
-(int)clearBindings;
-(void)setIsExecuting:(BOOL)arg1 ;
-(BOOL)clearBindingsAfterRunning;
-(void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2 ;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 SQL:(id)arg2 connection:(id)arg3 ;
-(int)step;
-(void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindNullForParameterAtPosition:(int)arg1 ;
-(void)bindBytes:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindBytesNoCopy:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindUTF8String:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindUTF8StringNoCopy:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindUTF8StringNoCopy:(const char*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindValuesForParameterNames:(id)arg1 ;
-(void)bindValuesInArray:(id)arg1 ;
-(void)setClearBindingsAfterRunning:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(BOOL)isBusy;
@end

