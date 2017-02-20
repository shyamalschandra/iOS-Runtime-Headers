/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLPlayEvent : PBCodable <NSCopying> {
    NSString * _brandId;
    NSString * _bundleId;
    NSString * _canonicalId;
    NSString * _canonicalShowId;
    NSString * _externalPlayableId;
    NSString * _externalShowId;
    struct { 
        unsigned int mediaLengthInMilliseconds : 1; 
        unsigned int mediaType : 1; 
        unsigned int isCurrent : 1; 
        unsigned int isDone : 1; 
        unsigned int isShowOpen : 1; 
    }  _has;
    NSString * _internalLegId;
    BOOL  _isCurrent;
    BOOL  _isDone;
    BOOL  _isShowOpen;
    long long  _mediaLengthInMilliseconds;
    int  _mediaType;
    long long  _millisecondsSinceEvent;
    long long  _playHeadInMilliseconds;
    NSString * _profileId;
}

@property (nonatomic, retain) NSString *brandId;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *canonicalId;
@property (nonatomic, retain) NSString *canonicalShowId;
@property (nonatomic, retain) NSString *externalPlayableId;
@property (nonatomic, retain) NSString *externalShowId;
@property (nonatomic, readonly) BOOL hasBrandId;
@property (nonatomic, readonly) BOOL hasCanonicalId;
@property (nonatomic, readonly) BOOL hasCanonicalShowId;
@property (nonatomic, readonly) BOOL hasExternalShowId;
@property (nonatomic, readonly) BOOL hasInternalLegId;
@property (nonatomic) BOOL hasIsCurrent;
@property (nonatomic) BOOL hasIsDone;
@property (nonatomic) BOOL hasIsShowOpen;
@property (nonatomic) BOOL hasMediaLengthInMilliseconds;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic, readonly) BOOL hasProfileId;
@property (nonatomic, retain) NSString *internalLegId;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL isDone;
@property (nonatomic) BOOL isShowOpen;
@property (nonatomic) long long mediaLengthInMilliseconds;
@property (nonatomic) int mediaType;
@property (nonatomic) long long millisecondsSinceEvent;
@property (nonatomic) long long playHeadInMilliseconds;
@property (nonatomic, retain) NSString *profileId;

- (void).cxx_destruct;
- (int)StringAsMediaType:(id)arg1;
- (id)brandId;
- (id)bundleId;
- (id)canonicalId;
- (id)canonicalShowId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalPlayableId;
- (id)externalShowId;
- (BOOL)hasBrandId;
- (BOOL)hasCanonicalId;
- (BOOL)hasCanonicalShowId;
- (BOOL)hasExternalShowId;
- (BOOL)hasInternalLegId;
- (BOOL)hasIsCurrent;
- (BOOL)hasIsDone;
- (BOOL)hasIsShowOpen;
- (BOOL)hasMediaLengthInMilliseconds;
- (BOOL)hasMediaType;
- (BOOL)hasProfileId;
- (unsigned int)hash;
- (id)internalLegId;
- (BOOL)isCurrent;
- (BOOL)isDone;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isShowOpen;
- (long long)mediaLengthInMilliseconds;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)millisecondsSinceEvent;
- (long long)playHeadInMilliseconds;
- (id)profileId;
- (BOOL)readFrom:(id)arg1;
- (void)setBrandId:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCanonicalId:(id)arg1;
- (void)setCanonicalShowId:(id)arg1;
- (void)setExternalPlayableId:(id)arg1;
- (void)setExternalShowId:(id)arg1;
- (void)setHasIsCurrent:(BOOL)arg1;
- (void)setHasIsDone:(BOOL)arg1;
- (void)setHasIsShowOpen:(BOOL)arg1;
- (void)setHasMediaLengthInMilliseconds:(BOOL)arg1;
- (void)setHasMediaType:(BOOL)arg1;
- (void)setInternalLegId:(id)arg1;
- (void)setIsCurrent:(BOOL)arg1;
- (void)setIsDone:(BOOL)arg1;
- (void)setIsShowOpen:(BOOL)arg1;
- (void)setMediaLengthInMilliseconds:(long long)arg1;
- (void)setMediaType:(int)arg1;
- (void)setMillisecondsSinceEvent:(long long)arg1;
- (void)setPlayHeadInMilliseconds:(long long)arg1;
- (void)setProfileId:(id)arg1;
- (void)writeTo:(id)arg1;

@end