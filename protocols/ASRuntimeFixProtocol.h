/* Generated by RuntimeBrowser.
 */

@protocol ASRuntimeFixProtocol <NSObject>

@required

- (void)accountsHaveBeenSaved:(BOOL)arg1;
- (int)fixBasicAccountIfNeeded:(BasicAccount *)arg1 loggingMessage:(NSString *)arg2;
- (NSSet *)supportedAccountTypes;

@end