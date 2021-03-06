/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <backupd/backupd-Structs.h>
@interface MBKeyBagFile : NSObject {

	mkbbackuprefRef _handle;

}
+(BOOL)decryptFileWithPath:(id)arg1 keybag:(id)arg2 encryptionKey:(id)arg3 size:(unsigned long long)arg4 error:(id*)arg5 ;
+(id)keybagFileWithPath:(id)arg1 error:(id*)arg2 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(BOOL)validateEncryptionKey:(id)arg1 error:(id*)arg2 ;
-(int)readWithBytes:(void*)arg1 count:(unsigned)arg2 offset:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)size;
-(id)initWithHandle:(mkbbackuprefRef)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
@end

