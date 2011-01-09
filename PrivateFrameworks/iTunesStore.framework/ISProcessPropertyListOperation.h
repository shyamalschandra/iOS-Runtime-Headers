/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISPropertyListProvider, NSDictionary;



@interface ISProcessPropertyListOperation : ISOperation 
{
    ISPropertyListProvider *_dataProvider;
    NSDictionary *_propertyList;
}

@property(retain) ISPropertyListProvider *dataProvider;


- (id)initWithPropertyList:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (id)dataProvider;
- (void)run;
- (void)dealloc;

@end