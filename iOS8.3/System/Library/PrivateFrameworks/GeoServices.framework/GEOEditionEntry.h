/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOEditionEntry : NSObject {

	unsigned _tileset;
	unsigned _edition;
	unsigned _provider;
	char _invalidateOnly;

}

@property (assign) unsigned tileset;                 //@synthesize tileset=_tileset - In the implementation block
@property (assign) unsigned edition;                 //@synthesize edition=_edition - In the implementation block
@property (assign) unsigned provider;                //@synthesize provider=_provider - In the implementation block
@property (assign) char invalidateOnly;              //@synthesize invalidateOnly=_invalidateOnly - In the implementation block
-(unsigned)provider;
-(unsigned)edition;
-(void)setProvider:(unsigned)arg1 ;
-(unsigned)tileset;
-(void)setTileset:(unsigned)arg1 ;
-(void)setEdition:(unsigned)arg1 ;
-(char)invalidateOnly;
-(void)setInvalidateOnly:(char)arg1 ;
@end

