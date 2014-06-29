/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {

	NSMutableArray* _entries;
	bool _flushEverything;

}

@property (assign,nonatomic) bool flushEverything;              //@synthesize flushEverything=_flushEverything - In the implementation block
-(void)dealloc;
-(id)init;
-(bool)flushEverything;
-(unsigned long long)tilesetCount;
-(void)tileset:(unsigned*)arg1 edition:(unsigned*)arg2 provider:(unsigned*)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setFlushEverything:(bool)arg1 ;
-(void)addTileset:(unsigned)arg1 edition:(unsigned)arg2 provider:(unsigned)arg3 ;
@end

