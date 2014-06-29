/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTTableHeaderStorage.h>

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {

	map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;
	double mHorizontalScaleFactor;

}

@property (assign,nonatomic) double horizontalScaleFactor; 
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned long long)flushableSize;
-(id)headerForKey:(unsigned)arg1 willModify:(bool)arg2 createIfNotThere:(bool)arg3 ;
-(void)shiftKeysAtIndex:(unsigned)arg1 amount:(int)arg2 ;
-(void)applyFunction:(/*function pointer*/ void*)arg1 withState:(void*)arg2 willModify:(bool)arg3 ;
-(id)headerForKey:(unsigned)arg1 willModify:(bool)arg2 ;
-(void)removeAllHeaders;
-(void)makeHeadersPerformSelector:(SEL)arg1 willModify:(bool)arg2 ;
-(unsigned)minKey;
-(unsigned)maxKey;
-(unsigned)upperBound:(unsigned)arg1 ;
-(unsigned)lowerBound:(unsigned)arg1 ;
-(double)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(double)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)initWithContext:(id)arg1 ;
-(void)setHeader:(id)arg1 forKey:(unsigned)arg2 ;
-(void)removeHeaderForKey:(unsigned)arg1 ;
@end

