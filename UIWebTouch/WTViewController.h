//
//  WTViewController.h
//  UIWebTouch
//
//  Created by Felix Chern on 12/6/18.
//  Copyright (c) 2012年 idryman@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTViewController : UIViewController <UIGestureRecognizerDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;

@end
