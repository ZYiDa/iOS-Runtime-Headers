/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCFavoriteServiceItemProvider : HFItemProvider <HUCCFavoriteItemProvider> {
    unsigned int  _maximumNumberOfItems;
    NSMutableSet * _serviceLikeItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int maximumNumberOfItems;
@property (nonatomic, retain) NSMutableSet *serviceLikeItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (unsigned int)maximumNumberOfItems;
- (id)reloadItems;
- (id)serviceLikeItems;
- (void)setMaximumNumberOfItems:(unsigned int)arg1;
- (void)setServiceLikeItems:(id)arg1;

@end
