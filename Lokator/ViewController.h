//
//  ViewController.h
//  Lokator
//
//  Created by Paweł Ksieniewicz on 27.05.2013.
//  Copyright (c) 2013 Paweł Ksieniewicz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "RoundedViewController.h"

@interface ViewController : RoundedViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    IBOutlet UIButton *recordButton;
}

@end
