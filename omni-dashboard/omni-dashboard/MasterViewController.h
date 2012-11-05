//
//  MasterViewController.h
//  omni-dashboard
//
//  Created by Administrator on 11/5/12.
//  Copyright (c) 2012 Hive Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
