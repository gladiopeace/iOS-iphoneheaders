/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface MBSFileAttributes : PBCodable {

	unsigned long long _birth;
	unsigned long long _decryptedSize;
	unsigned long long _inodeNumber;
	unsigned long long _lastModified;
	unsigned long long _lastStatusChange;
	NSData* _encryptionKey;
	unsigned _encryptionKeyVersion;
	NSMutableArray* _extendedAttributes;
	unsigned _groupID;
	unsigned _keybagID;
	unsigned _mode;
	unsigned _protectionClass;
	NSString* _target;
	unsigned _userID;
	SCD_Struct_MB7 _has;

}

@property (assign,nonatomic) char hasKeybagID; 
@property (assign,nonatomic) unsigned keybagID;                                //@synthesize keybagID=_keybagID - In the implementation block
@property (nonatomic,readonly) char hasTarget; 
@property (nonatomic,retain) NSString * target;                                //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) char hasEncryptionKey; 
@property (nonatomic,retain) NSData * encryptionKey;                           //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (assign,nonatomic) char hasInodeNumber; 
@property (assign,nonatomic) unsigned long long inodeNumber;                   //@synthesize inodeNumber=_inodeNumber - In the implementation block
@property (assign,nonatomic) char hasMode; 
@property (assign,nonatomic) unsigned mode;                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char hasUserID; 
@property (assign,nonatomic) unsigned userID;                                  //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) char hasGroupID; 
@property (assign,nonatomic) unsigned groupID;                                 //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) char hasLastModified; 
@property (assign,nonatomic) unsigned long long lastModified;                  //@synthesize lastModified=_lastModified - In the implementation block
@property (assign,nonatomic) char hasLastStatusChange; 
@property (assign,nonatomic) unsigned long long lastStatusChange;              //@synthesize lastStatusChange=_lastStatusChange - In the implementation block
@property (assign,nonatomic) char hasBirth; 
@property (assign,nonatomic) unsigned long long birth;                         //@synthesize birth=_birth - In the implementation block
@property (assign,nonatomic) char hasProtectionClass; 
@property (assign,nonatomic) unsigned protectionClass;                         //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,retain) NSMutableArray * extendedAttributes;              //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
@property (assign,nonatomic) char hasEncryptionKeyVersion; 
@property (assign,nonatomic) unsigned encryptionKeyVersion;                    //@synthesize encryptionKeyVersion=_encryptionKeyVersion - In the implementation block
@property (assign,nonatomic) char hasDecryptedSize; 
@property (assign,nonatomic) unsigned long long decryptedSize;                 //@synthesize decryptedSize=_decryptedSize - In the implementation block
-(void)setUserID:(unsigned)arg1 ;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)addExtendedAttribute:(id)arg1 ;
-(char)hasKeybagID;
-(unsigned)keybagID;
-(void)setKeybagID:(unsigned)arg1 ;
-(char)hasTarget;
-(char)hasEncryptionKey;
-(NSData *)encryptionKey;
-(char)hasInodeNumber;
-(unsigned long long)inodeNumber;
-(void)setInodeNumber:(unsigned long long)arg1 ;
-(char)hasUserID;
-(char)hasGroupID;
-(char)hasLastModified;
-(char)hasLastStatusChange;
-(unsigned long long)lastStatusChange;
-(void)setLastStatusChange:(unsigned long long)arg1 ;
-(char)hasBirth;
-(unsigned long long)birth;
-(void)setBirth:(unsigned long long)arg1 ;
-(char)hasProtectionClass;
-(void)setProtectionClass:(unsigned)arg1 ;
-(unsigned)extendedAttributesCount;
-(void)clearExtendedAttributes;
-(id)extendedAttributeAtIndex:(unsigned)arg1 ;
-(char)hasEncryptionKeyVersion;
-(unsigned)encryptionKeyVersion;
-(void)setEncryptionKeyVersion:(unsigned)arg1 ;
-(char)hasDecryptedSize;
-(unsigned long long)decryptedSize;
-(void)setDecryptedSize:(unsigned long long)arg1 ;
-(void)setHasKeybagID:(char)arg1 ;
-(void)setHasInodeNumber:(char)arg1 ;
-(void)setHasUserID:(char)arg1 ;
-(void)setHasGroupID:(char)arg1 ;
-(void)setHasLastModified:(char)arg1 ;
-(void)setHasLastStatusChange:(char)arg1 ;
-(void)setHasBirth:(char)arg1 ;
-(void)setHasProtectionClass:(char)arg1 ;
-(void)setHasEncryptionKeyVersion:(char)arg1 ;
-(void)setHasDecryptedSize:(char)arg1 ;
-(void)setStat:(stat*)arg1 ;
-(void)addExtendedAttributesDictionary:(id)arg1 ;
-(char)verifyWithFile:(id)arg1 error:(id*)arg2 ;
-(void)setLastModified:(unsigned long long)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)dictionaryRepresentation;
-(void)setHasMode:(char)arg1 ;
-(char)hasMode;
-(unsigned)protectionClass;
-(unsigned)userID;
-(NSMutableArray *)extendedAttributes;
-(void)setExtendedAttributes:(NSMutableArray *)arg1 ;
-(unsigned)groupID;
-(void)setGroupID:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)lastModified;
@end
