/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDecryptionCompletedEvent : HMDLogEvent {
    BOOL  _didDecryptionFail;
}

@property (nonatomic) BOOL didDecryptionFail;

+ (id)decryptionCompletedWithFailure:(BOOL)arg1;
+ (id)uuid;

- (BOOL)didDecryptionFail;
- (id)initWithFailure:(BOOL)arg1;
- (void)setDidDecryptionFail:(BOOL)arg1;

@end