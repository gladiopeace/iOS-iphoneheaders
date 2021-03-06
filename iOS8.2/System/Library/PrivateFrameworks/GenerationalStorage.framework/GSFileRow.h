/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/revisiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <revisiond/revisiond-Structs.h>
#import <revisiond/PQLResultSetInitializer.h>

@class NSString;

@interface GSFileRow : NSObject <PQLResultSetInitializer> {

	long long file_row_id;
	unsigned long long file_inode;
	long file_last_seen;
	int file_status;
	unsigned long long file_document_id;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)tableRowCount:(id)arg1 ;
+(char)createEntry:(id)arg1 withDocumentID:(unsigned long long)arg2 fileID:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)fileRow:(id)arg1 byDocumentID:(unsigned long long)arg2 ;
+(id)fileRow:(id)arg1 byRowID:(long long)arg2 ;
+(id)fileRow:(id)arg1 byFileID:(unsigned long long)arg2 ;
+(char)storageIDExists:(id)arg1 storageID:(long long)arg2 ;
+(PQLResultSet*)enumerate:(id)arg1 withPathPrefix:(const char*)arg2 ;
+(char)deleteRow:(id)arg1 storageID:(long long)arg2 ;
+(PQLResultSet*)enumerate:(id)arg1 ;
-(NSString *)description;
-(char)saveToDB:(id)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
@end

