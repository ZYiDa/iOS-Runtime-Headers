/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAlertView : UIView {
    NSArray * _additionalLabelViews;
    NSArray * _additionalLabels;
    TVImageProxy * _imageProxy;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    _TVImageView * _imageView;
    NSString * _message;
    UILabel * _messageLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSArray *additionalLabels;
@property (nonatomic, retain) TVImageProxy *imageProxy;
@property (nonatomic) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

+ (id)_newLabelWithText:(id)arg1;

- (void).cxx_destruct;
- (id)additionalLabels;
- (id)imageProxy;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)message;
- (void)setAdditionalLabels:(id)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;

@end
