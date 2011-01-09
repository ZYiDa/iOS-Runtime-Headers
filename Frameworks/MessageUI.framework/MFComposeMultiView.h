/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFHeaderLabelView, UILabel;



@interface MFComposeMultiView : MFComposeHeaderView 
{
    UILabel *_accountLabel;
    MFHeaderLabelView *_imageSizeHeaderLabelView;
    UILabel *_imageSizeLabel;
    UILabel *_placeholderImageSizeLabel;
    BOOL _imageSizeShown;
}


- (void)setAccountDescription:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)accountLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_initialLabelFrame;
- (id)imageSizeLabel;
- (id)placeholderImageSizeLabel;
- (id)imageSizeHeaderLabelView;
- (void)setImageSizeDescription:(id)arg1;
- (void)setShowsImageSize:(BOOL)arg1;

@end