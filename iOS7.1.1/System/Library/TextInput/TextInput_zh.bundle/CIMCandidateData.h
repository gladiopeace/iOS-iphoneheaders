/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TIInputMode, CCEDictionaryController, NSArray, NSDictionary, NSMutableDictionary;

@interface CIMCandidateData : NSObject {

	int _sortingMethod;
	TIInputMode* _inputMode;
	CCEDictionaryController* _dictionaryController;
	NSArray* _radicalList;
	NSDictionary* _pinyinToZhuyinMap;
	NSArray* _storedCandidates;
	NSMutableDictionary* _characterInfoCache;
	NSMutableDictionary* _candidateInfoCache;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                                   //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) int sortingMethod;                                           //@synthesize sortingMethod=_sortingMethod - In the implementation block
@property (nonatomic,retain) CCEDictionaryController * dictionaryController;              //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (nonatomic,retain) NSArray * radicalList;                                       //@synthesize radicalList=_radicalList - In the implementation block
@property (nonatomic,readonly) NSDictionary * pinyinToZhuyinMap;                          //@synthesize pinyinToZhuyinMap=_pinyinToZhuyinMap - In the implementation block
@property (nonatomic,retain) NSArray * storedCandidates;                                  //@synthesize storedCandidates=_storedCandidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * characterInfoCache;                    //@synthesize characterInfoCache=_characterInfoCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateInfoCache;                    //@synthesize candidateInfoCache=_candidateInfoCache - In the implementation block
+(id)sortTitleFromSortingMethod:(int)arg1 ;
+(bool)shouldShowZhuyinSortingMethod;
-(void)dealloc;
-(id)init;
-(id)inputMode;
-(void)setCandidates:(id)arg1 ;
-(void)clearCache;
-(id)initWithInputMode:(id)arg1 ;
-(id)candidatesSortedByMethod:(int)arg1 ;
-(void)setSortingMethod:(int)arg1 ;
-(void)setCharacterInfoCache:(id)arg1 ;
-(void)setCandidateInfoCache:(id)arg1 ;
-(void)setRadicalList:(id)arg1 ;
-(void)setDictionaryController:(id)arg1 ;
-(id)dictionaryController;
-(id)characterInfoCache;
-(id)candidateInfoCache;
-(id)candidateInfoForCharacter:(id)arg1 ;
-(bool)getFieldsFromCharacterInfo:(id)arg1 radical:(id*)arg2 strokeCount:(long long*)arg3 firstStroke:(id*)arg4 pinyin:(id*)arg5 chineseType:(id*)arg6 ;
-(id)pinyinToZhuyinMap;
-(id)zhuyinStringFromPinyinWithToneNumber:(id)arg1 ;
-(id)pinyinStringFromPinyinWithToneNumber:(id)arg1 ;
-(void)setStoredCandidates:(id)arg1 ;
-(id)storedCandidates;
-(id)candidatesSortedByFrequency:(id)arg1 ;
-(id)candidatesSortedByRadical:(id)arg1 simplified:(bool)arg2 collationLocale:(id)arg3 ;
-(id)candidatesSortedByStrokes:(id)arg1 ;
-(id)candidatesSortedByPinyinOrZhuyin:(id)arg1 simplified:(bool)arg2 zhuyin:(bool)arg3 ;
-(id)candidatesSortedByEmoji:(id)arg1 ;
-(void)addCandidate:(id)arg1 forKey:(id)arg2 dictionary:(id)arg3 ;
-(int)sortingMethod;
-(id)radicalList;
@end

