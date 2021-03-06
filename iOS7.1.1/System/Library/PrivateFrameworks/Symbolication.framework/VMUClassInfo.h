/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface VMUClassInfo : NSObject <NSCoding> {

	/*^block*/ id _reader;
	unsigned long long _remoteIsa;
	unsigned long long _specificInstance;
	unsigned _remotePointerSize;
	unsigned _ivarCount;
	unsigned _superclassOffset;
	unsigned _instanceSize;
	unsigned _ro_flags;
	unsigned _rw_flags;
	objc_ivar* _localIvarList;
	int* _ivarScanSizes;
	unsigned _remoteType;
	NSString* _remoteClassName;
	NSString* _remoteBinaryName;
	VMUClassInfo* _superclassLayout;
	const char* _weakLayout;
	const char* _strongLayout;
	const char* _extendedLayout;
	char* _scanMap;
	BOOL _hasSpecificLayout;

}

@property (readonly) NSString * typeName; 
@property (readonly) NSString * className;                             //@synthesize remoteClassName=_remoteClassName - In the implementation block
@property (readonly) NSString * binaryName;                            //@synthesize remoteBinaryName=_remoteBinaryName - In the implementation block
@property (readonly) NSString * fullIvarDescription; 
@property (readonly) NSString * shortIvarDescription; 
@property (readonly) VMUClassInfo * superclassInfo;                    //@synthesize superclassLayout=_superclassLayout - In the implementation block
@property (readonly) int infoType; 
@property (readonly) unsigned long long remoteIsa;                     //@synthesize remoteIsa=_remoteIsa - In the implementation block
@property (readonly) unsigned long long specificInstance;              //@synthesize specificInstance=_specificInstance - In the implementation block
@property (readonly) unsigned instanceSize;                            //@synthesize instanceSize=_instanceSize - In the implementation block
@property (readonly) bool isARR; 
@property (readonly) bool isRealized; 
@property (readonly) bool isMetaClass; 
@property (readonly) bool isRootClass; 
@property (readonly) bool hasCppConstructorOrDestructor; 
@property (nonatomic,readonly) bool hasSpecificLayout; 
+(void)initialize;
+(id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3 ;
+(id)descriptionForTypeEncoding:(const char*)arg1 ivarName:(const char*)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)type;
-(id)className;
-(id)typeName;
-(id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3 ;
-(const char*)_copyRemoteStringAt:(unsigned long long)arg1 ;
-(int)_readRemoteIntAt:(unsigned long long)arg1 ;
-(void)_faultScanMap;
-(void)_processExtendedLayout:(const char*)arg1 ;
-(bool)isARR;
-(void)_processARRLayout:(const char*)arg1 scanType:(int)arg2 ;
-(bool)hasSpecificLayout;
-(unsigned long long)_readRemotePointerAt:(unsigned long long)arg1 ;
-(bool)isRealized;
-(objc_ivarRef)_copyRemoteIvarAt:(unsigned long long)arg1 ;
-(const char*)_copyRemoteLayout:(unsigned long long)arg1 ;
-(void)_parseIvarsAndLayouts;
-(bool)isRootClass;
-(id)_initWithClass:(unsigned long long)arg1 realizedOnly:(bool)arg2 infoMap:(id)arg3 symbolicator:(CSTypeRef)arg4 type:(int)arg5 memoryReader:(/*^block*/ id)arg6 ;
-(void)_setClassNameWithAddress:(unsigned long long)arg1 ;
-(id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(CSTypeRef)arg3 type:(int)arg4 memoryReader:(/*^block*/ id)arg5 ;
-(unsigned long long)remoteIsa;
-(id)binaryName;
-(int)infoType;
-(bool)hasCppConstructorOrDestructor;
-(void)_logDescriptionWithSuperclasses:(bool)arg1 indentation:(int)arg2 toLogger:(/*^block*/ id)arg3 ;
-(id)_ivarDescription:(unsigned)arg1 withSpacing:(unsigned)arg2 ;
-(id)instanceSpecificInfoForObject:(unsigned long long)arg1 ;
-(void)enumerateScanLocationsToSize:(unsigned)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)_instanceSpecificInfoForObject:(unsigned long long)arg1 pointerSize:(unsigned)arg2 reader:(/*^block*/ id)arg3 ;
-(void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)_specificCopy:(unsigned long long)arg1 instanceSize:(unsigned)arg2 superclassOffset:(unsigned)arg3 ;
-(void)_setExtendedLayout:(const char*)arg1 ;
-(void)setMemoryReader:(/*^block*/ id)arg1 ;
-(void)enumerateIvarsWithBlock:(/*^block*/ id)arg1 ;
-(id)fullIvarDescription;
-(id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(CSTypeRef)arg3 type:(int)arg4 memoryReader:(/*^block*/ id)arg5 ;
-(id)initWithIsaPointer:(unsigned long long)arg1 symbolicator:(CSTypeRef)arg2 ;
-(void)scanObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 withBlock:(/*^block*/ id)arg3 ;
-(objc_ivarRef)ivarWithOffset:(unsigned long long)arg1 ;
-(id)shortIvarDescription;
-(bool)isMetaClass;
-(unsigned)instanceSize;
-(unsigned long long)specificInstance;
-(id)superclassInfo;
@end

