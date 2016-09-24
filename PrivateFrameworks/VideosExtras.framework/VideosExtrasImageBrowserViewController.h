/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasImageBrowserViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant> {
    BOOL  _allowsPinchingImageForInteractiveZoomingImageTransition;
    <VideosExtrasImageBrowserViewControllerDataSource> * _dataSource;
    <VideosExtrasImageBrowserViewControllerDelegate> * _delegate;
    UIPageViewController * _pageViewController;
    unsigned int  _visibleImageIndex;
    <VideosExtrasZoomingImageInteractiveTransitionSource> * _zoomingImageInteractiveTransitionSource;
}

@property (nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition;
@property (nonatomic) <VideosExtrasImageBrowserViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VideosExtrasImageBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIPageViewController *pageViewController;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int visibleImageIndex;
@property (nonatomic) <VideosExtrasZoomingImageInteractiveTransitionSource> *zoomingImageInteractiveTransitionSource;

- (void).cxx_destruct;
- (void)_addPageViewForController:(id)arg1 toView:(id)arg2;
- (id)_imageViewControllerAtIndex:(unsigned int)arg1;
- (unsigned int)_numberOfImages;
- (void)_removePageViewController;
- (void)_updatePageViewController;
- (void)_updateTitle;
- (id)_visibleImageViewController;
- (BOOL)allowsPinchingImageForInteractiveZoomingImageTransition;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setAllowsPinchingImageForInteractiveZoomingImageTransition:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPageViewController:(id)arg1;
- (void)setVisibleImageIndex:(unsigned int)arg1;
- (void)setZoomingImageInteractiveTransitionSource:(id)arg1;
- (void)viewDidLoad;
- (unsigned int)visibleImageIndex;
- (id)zoomingImageInteractiveTransitionSource;

@end