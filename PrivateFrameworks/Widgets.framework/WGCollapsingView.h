/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGCollapsingView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _activeSize;
    UIView * _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_configureStackView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)restoreIntrinsicContentSize;
- (id)stackView;
- (void)updateIntrinsicContentSizeForDisappearance;

@end