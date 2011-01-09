/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMHTMLDocument : DOMDocument 
{
}

@property(retain,readonly) DOMHTMLCollection *embeds;
@property(retain,readonly) DOMHTMLCollection *plugins;
@property(retain,readonly) DOMHTMLCollection *scripts;
@property(readonly) NSInteger width;
@property(readonly) NSInteger height;
@property(copy) NSString *dir;
@property(copy) NSString *designMode;
@property(copy,readonly) NSString *compatMode;
@property(retain,readonly) DOMElement *activeElement;
@property(copy) NSString *bgColor;
@property(copy) NSString *fgColor;
@property(copy) NSString *alinkColor;
@property(copy) NSString *linkColor;
@property(copy) NSString *vlinkColor;


- (NSInteger)height;
- (void)clear;
- (void)close;
- (NSInteger)width;
- (id)embeds;
- (id)plugins;
- (id)scripts;
- (id)dir;
- (void)setDir:(id)arg1;
- (id)designMode;
- (void)setDesignMode:(id)arg1;
- (id)compatMode;
- (id)activeElement;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (id)alinkColor;
- (void)setAlinkColor:(id)arg1;
- (id)linkColor;
- (void)setLinkColor:(id)arg1;
- (id)vlinkColor;
- (void)setVlinkColor:(id)arg1;
- (void)open;
- (void)write:(id)arg1;
- (void)writeln:(id)arg1;
- (void)captureEvents;
- (void)releaseEvents;
- (BOOL)hasFocus;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;

@end