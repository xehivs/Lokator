//
//  RecordViewController.h
//  Lokator
//
//  Created by Paweł Ksieniewicz on 27.05.2013.
//  Copyright (c) 2013 Paweł Ksieniewicz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RoundedViewController.h"

@interface RecordViewController : RoundedViewController {
    IBOutlet UIView *recordDot;
    IBOutlet UIView *upperView;
    IBOutlet UITapGestureRecognizer *doubleTap, *trippleTap;
    IBOutlet UISwipeGestureRecognizer *swipeUp;
    
    BOOL recording;
}

- (IBAction)doubleTap:(UITapGestureRecognizer *)sender;
- (IBAction)trippleTap:(UITapGestureRecognizer *)sender;

@end