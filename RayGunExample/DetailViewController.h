//
//  DetailViewController.h
//  RayGunExample
//
//  Created by Coleman, Mark on 2/25/14.
//  Copyright (c) 2014 Coleman, Mark. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
