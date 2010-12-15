
@interface BCTab : UIButton {
	UIImage *background;
	UIImage *rightBorder;
    BOOL useChrome;
}

- (id)initWithIconImageName:(NSString *)imageName;
@property (nonatomic, assign) BOOL useChrome;

@end
