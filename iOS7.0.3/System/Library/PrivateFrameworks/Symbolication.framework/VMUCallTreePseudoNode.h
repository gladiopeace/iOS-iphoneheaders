/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMUCallTreeNode.h>

@interface VMUCallTreePseudoNode : VMUCallTreeNode
-(BOOL)isPseudo;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;
-(id)largestTopOfStackPath;
@end

