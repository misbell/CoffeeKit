//
//  DetailViewController.h
//  CoffeeKit
//
//  Created by prenez on 4/1/15.
//  Copyright (c) 2015 Prenezsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

