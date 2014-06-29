/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SearchResult, NSMutableArray;

@interface CustomSearchManager : NSObject {

	SearchResult* _customSearchResult;
	int _selectedSearchMode;
	NSMutableArray* _observers;

}

@property (setter=setCustomSearchResult:,nonatomic,retain) SearchResult * customSearchResult;              //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (assign,nonatomic) int selectedSearchMode;                                                       //@synthesize selectedSearchMode=_selectedSearchMode - In the implementation block
+(id)sharedManager;
-(id)customSearchResult;
-(void)setCustomSearchResult:(id)arg1 ;
-(BOOL)isCustomSearchResult:(id)arg1 ;
-(int)selectedSearchMode;
-(void)setSelectedSearchMode:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
-(void)addObserver:(id)arg1 ;
@end

