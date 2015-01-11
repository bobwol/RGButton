//
//  RGButton.h
//  RGButton
//
//  Created by ROBERA GELETA on 1/10/15.
//  Copyright (c) 2015 ROBERA GELETA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RGButton : UIView

- (void)setRadius:(CGFloat )radiusSet;
//--> allows you to set the images of the buttons. the 0th index is left most button
- (void)setImagesForButtons:(NSArray *)imageArray;
- (void)setCenterButtonImage:(UIImage *)setimage;
@property id delegate;
@end


@protocol RGButtonDelegateProtocol <NSObject>
- (void)tappedButtonWithIndex:(NSInteger )index;
@end