/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotoView, UIImageView, UIView;

@interface PUPhotosGridCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _fillerEdgeInsets;
    UIView *_highlightOverlayView;
    PUPhotoView *_photoContentView;
    UIImageView *_selectionBadgeImageView;
    BOOL _selectionBadgeVisible;
    UIView *_selectionOverlayView;
    PUPhotoView *_temporaryPhotoContentView;
    UIView *_transitionFillerView;
    BOOL _transitionFillerViewEnabled;
    BOOL _transitionIsAppearing;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } fillerEdgeInsets;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) PUPhotoView * photoContentView;
@property(getter=isSelectionBadgeVisible) BOOL selectionBadgeVisible;
@property(retain) PUPhotoView * temporaryPhotoContentView;
@property(readonly) UIView * transitionFillerView;
@property BOOL transitionFillerViewEnabled;
@property BOOL transitionIsAppearing;

- (void).cxx_destruct;
- (void)_layoutTransitionFillerView;
- (void)_updateHighlight;
- (void)_updateSelectionBadge;
- (void)_updateSubviewOrdering;
- (void)addTemporaryPhotoContentView;
- (void)applyLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })fillerEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSelectionBadgeVisible;
- (void)layoutSubviews;
- (id)photoContentView;
- (void)removeTemporaryPhotoContentView;
- (void)setFillerEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPhotoContentView:(id)arg1;
- (void)setSelectionBadgeVisible:(BOOL)arg1;
- (void)setTemporaryPhotoContentView:(id)arg1;
- (void)setTemporaryPhotoImage:(id)arg1 with:(int)arg2;
- (void)setTransitionFillerViewEnabled:(BOOL)arg1;
- (void)setTransitionIsAppearing:(BOOL)arg1;
- (id)temporaryPhotoContentView;
- (id)transitionFillerView;
- (BOOL)transitionFillerViewEnabled;
- (BOOL)transitionIsAppearing;

@end