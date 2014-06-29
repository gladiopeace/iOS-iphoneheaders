/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject, NSData;

@interface NoteBodyObject : NSManagedObject

@property (nonatomic,@dynamic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (nonatomic,@dynamic,retain) NoteObject * owner; 
@property (nonatomic,@dynamic,retain) NSData * externalRepresentation; 
@property (nonatomic,@dynamic,retain) NSString * externalContentRef; 
-(id)contentAsPlainText;
-(id)contentAsPlainTextPreservingNewlines;
-(bool)containsAttachments;
@end

