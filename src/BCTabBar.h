@class BCTab;

@protocol BCTabBarDelegate;

@interface BCTabBar : UIView {
	NSArray *tabs;
	BCTab *selectedTab;
	UIImage *backgroundImage;
	UIImageView *arrow;
	id <BCTabBarDelegate> delegate;
    BOOL useChrome;
}

- (id)initWithFrame:(CGRect)aFrame;

@property (nonatomic, retain) NSArray *tabs;
@property (nonatomic, retain) BCTab *selectedTab;
@property (nonatomic, retain) UIImageView *arrow;
@property (nonatomic, assign) id <BCTabBarDelegate> delegate;
@property (nonatomic, assign) BOOL useChrome;
@end

@protocol BCTabBarDelegate
- (void)tabBar:(BCTabBar *)aTabBar didSelectTabAtIndex:(NSInteger)index;
@end