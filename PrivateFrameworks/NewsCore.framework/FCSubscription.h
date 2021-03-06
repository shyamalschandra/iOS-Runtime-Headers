/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscription : NSObject {
    BOOL  _canRetry;
    NSDate * _dateAdded;
    NSString * _errorMessage;
    NSString * _groupID;
    BOOL  _notificationsEnabled;
    NSURL * _pollingURL;
    NSString * _subscriptionID;
    unsigned int  _subscriptionType;
    NSString * _tagID;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) BOOL canRetry;
@property (nonatomic, readonly, copy) NSDate *dateAdded;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) BOOL notificationsEnabled;
@property (nonatomic, readonly) NSURL *pollingURL;
@property (nonatomic, readonly, copy) NSString *subscriptionID;
@property (nonatomic, readonly) unsigned int subscriptionType;
@property (nonatomic, retain) NSString *tagID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)mutedSubscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4;
+ (id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
+ (id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2;
+ (id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 dateAdded:(id)arg3 notificationsEnabled:(BOOL)arg4;

- (void).cxx_destruct;
- (BOOL)canRetry;
- (id)dateAdded;
- (id)dictionaryRepresentation;
- (id)errorMessage;
- (id)groupID;
- (id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4 subscriptionType:(unsigned int)arg5 notificationsEnabled:(BOOL)arg6;
- (id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
- (BOOL)isTypeMutedTag;
- (BOOL)isTypePending;
- (BOOL)isTypeTag;
- (BOOL)notificationsEnabled;
- (id)pollingURL;
- (void)setGroupID:(id)arg1;
- (void)setTagID:(id)arg1;
- (id)subscriptionID;
- (unsigned int)subscriptionType;
- (id)tagID;
- (id)title;
- (id)url;

@end
