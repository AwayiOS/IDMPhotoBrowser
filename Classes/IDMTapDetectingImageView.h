//
//  IDMTapDetectingImageView.h
//  IDMPhotoBrowser
//
//  Created by Michael Waterfall on 04/11/2009.
//  Copyright 2009 d3i. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IDMTapDetectingImageViewDelegate;
@protocol IDMLongPressDetectingImageViewDelegate;
@interface IDMTapDetectingImageView : UIImageView {
	id <IDMTapDetectingImageViewDelegate> __weak tapDelegate;
    id <IDMLongPressDetectingImageViewDelegate> __weak longPressDelegate;
}
@property (nonatomic, weak) id <IDMTapDetectingImageViewDelegate> tapDelegate;
@property (nonatomic, weak) id <IDMLongPressDetectingImageViewDelegate> longPressDelegate;
- (void)handleSingleTap:(UITouch *)touch;
- (void)handleDoubleTap:(UITouch *)touch;
- (void)handleTripleTap:(UITouch *)touch;
@end

@protocol IDMTapDetectingImageViewDelegate <NSObject>
@optional
- (void)imageView:(UIImageView *)imageView singleTapDetected:(UITouch *)touch;
- (void)imageView:(UIImageView *)imageView doubleTapDetected:(UITouch *)touch;
- (void)imageView:(UIImageView *)imageView tripleTapDetected:(UITouch *)touch;
@end

// MARK: 长按手势修改
@protocol IDMLongPressDetectingImageViewDelegate <NSObject>
@optional
- (void)imageView:(UIImageView *)imageView longPressDetected:(UILongPressGestureRecognizer *)longPress;
@end
