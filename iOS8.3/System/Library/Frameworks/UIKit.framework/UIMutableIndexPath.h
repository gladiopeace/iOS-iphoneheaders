/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSIndexPath.h>

@interface UIMutableIndexPath : NSIndexPath {

	unsigned* _mutableIndexes;
	char _locked;

}
+(void)setIndex:(unsigned)arg1 atPosition:(unsigned)arg2 forIndexPath:(id*)arg3 ;
-(id)retain;
-(void)dealloc;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)indexAtPosition:(unsigned)arg1 ;
-(id)initWithIndexes:(const unsigned*)arg1 length:(unsigned)arg2 ;
-(void)getIndexes:(unsigned*)arg1 ;
@end

