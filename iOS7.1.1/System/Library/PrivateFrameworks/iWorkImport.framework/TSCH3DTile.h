/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DTile : NSObject {

	box<glm::detail::tvec2<float> > mBounds;

}

@property (assign,nonatomic) box<glm::detail::tvec2<float> > bounds; 
-(bool)renderIntoContext:(CGContextRef)arg1 ;
-(box<glm::detail::tvec2<float> >)bounds;
-(void)setBounds:(box<glm::detail::tvec2<float> >)arg1 ;
-(id).cxx_construct;
-(id)initWithBounds:(const box<glm::detail::tvec2<float> >*)arg1 ;
@end

