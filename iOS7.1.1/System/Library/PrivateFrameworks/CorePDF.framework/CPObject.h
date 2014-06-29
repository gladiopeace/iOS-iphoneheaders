/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CorePDF/CPCopying.h>

@class NSMutableArray, CPDocument, CPPage;

@interface CPObject : NSObject <NSCopying, CPCopying> {

	CPObject* parent;
	NSMutableArray* children;
	CPDocument* document;
	CPPage* page;
	long long zOrder;

}
-(unsigned long long)indexOf:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(void)performSelector:(SEL)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)lastChild;
-(id)firstChild;
-(id)previousSibling;
-(id)document;
-(id)page;
-(void)setPage:(id)arg1 ;
-(void)remove;
-(id)nextSibling;
-(void)setDocument:(id)arg1 ;
-(long long)zOrder;
-(id)copyAndSplitChildrenAtIndex:(unsigned)arg1 ;
-(void)recomputeZOrder;
-(void)updateZOrder:(long long)arg1 ;
-(void)add:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addChildrenOf:(id)arg1 ;
-(void)removeAll;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg1 ;
-(void)accept:(id)arg1 ;
-(void)disposeDescendants;
-(id)copyWithoutChildren;
-(id)ancestorOfClass:(Class)arg1 ;
-(id)descendantsOfClass:(Class)arg1 deep:(bool)arg2 ;
-(void)descendantsOfClass:(Class)arg1 to:(id)arg2 ;
-(id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2 ;
-(id)firstDescendantOfClass:(Class)arg1 ;
-(id)lastDescendantOfClass:(Class)arg1 ;
-(unsigned)countOfFirstDescendantsOfClass:(Class)arg1 ;
-(void)setZOrder:(long long)arg1 ;
-(void)clearCachedInfo;
-(id)firstDescendantsOfClass:(Class)arg1 ;
-(id)initSuper;
-(unsigned)countOfClass:(Class)arg1 ;
-(id)lastSibling;
-(id)firstSibling;
-(void)removeFirstChild;
-(void)removeLastChild;
-(void)promoteChildren;
-(void)childrenOfClass:(Class)arg1 into:(id)arg2 ;
-(id)childrenOfClass:(Class)arg1 ;
-(id)childrenNotOfClass:(Class)arg1 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(bool)arg4 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)map:(SEL)arg1 target:(id)arg2 ;
-(void)map:(SEL)arg1 target:(id)arg2 last:(bool)arg3 ;
-(id)descendantsOfClass:(Class)arg1 ;
-(id)shallowDescendantsOfClass:(Class)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(void)addChildren:(id)arg1 ;
-(int)depth;
-(void)add:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(id)children;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

