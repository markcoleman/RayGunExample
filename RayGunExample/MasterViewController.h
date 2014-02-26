//
//  MasterViewController.h
//  RayGunExample
//
//  Created by Coleman, Mark on 2/25/14.
//  Copyright (c) 2014 Coleman, Mark. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
