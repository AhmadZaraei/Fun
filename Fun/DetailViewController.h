//
//  DetailViewController.h
//  Fun
//
//  Created by Ahmad Zaraei on 1/30/16.
//  Copyright © 2016 Ahmad Zaraei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

