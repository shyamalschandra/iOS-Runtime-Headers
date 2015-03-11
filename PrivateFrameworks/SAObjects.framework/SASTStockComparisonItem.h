/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * stockValueFacet;
@property(retain) SAUIDecoratedText * subtitle;
@property(readonly) Class superclass;
@property(retain) SAUIDecoratedText * title;
@property(retain) SAUIDecoratedText * value;

+ (id)stockComparisonItem;
+ (id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStockValueFacet:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stockValueFacet;
- (id)subtitle;
- (id)title;
- (id)value;

@end