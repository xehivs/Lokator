//
//  ViewController.h
//  Lokator
//
//  Created by Paweł Ksieniewicz on 27.05.2013.
//  Copyright (c) 2013 Paweł Ksieniewicz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RoundedViewController.h"

@interface ListViewController : RoundedViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    BOOL isDrawerOpen;
    id selectedItem;
    __weak IBOutlet UIImageView *drawerMap;
    IBOutlet UICollectionView *collectionView;
}

@property (weak, nonatomic) IBOutlet UIView *drawerView;
@property (weak, nonatomic) IBOutlet UIView *drawerIcon;
- (IBAction)hideDrawer:(id)sender;
- (IBAction)destroy:(id)sender;

@end
