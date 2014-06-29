/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapWebKitPlugin/MapWebKitPlugin-Structs.h>
#import <MapKit/MKPolygon.h>
#import <MapWebKitPlugin/MapPluginOverlay.h>

@class NSString, MapPluginOverlayPathOptions, MKOverlayPathView;

@interface MapPluginPolygonOverlay : MKPolygon <MapPluginOverlay> {

	NSString* _identifier;
	MapPluginOverlayPathOptions* _pathOptions;

}

@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MapPluginOverlayPathOptions * pathOptions;              //@synthesize pathOptions=_pathOptions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Ma0 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,@dynamic,readonly) SCD_Struct_Ma1 boundingMapRect; 
@property (nonatomic,readonly) MKOverlayPathView * overlayView; 
+(id)polygonOverlayForWebScriptObject:(id)arg1 ;
-(id)pathOptions;
-(void)setPathOptions:(id)arg1 ;
-(id)overlayView;
-(void)dealloc;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
@end

