/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>
#import <assistivetouchd/SCATElementProvider.h>

@class NSArray, NSString;

@interface SCATStaticElementProvider : NSArray <SCATElementProvider> {

	NSArray* _elements;

}

@property (nonatomic,retain) NSArray * elements;                    //@synthesize elements=_elements - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char providesElements; 
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)initWithElements:(id)arg1 ;
-(char)providesElements;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(char)containsElement:(id)arg1 ;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(NSString *)description;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end

