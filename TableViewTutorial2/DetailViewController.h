//
//  DetailViewController.h
//  TableViewTutorial2
//
//  Created by 鈴木 宏昌 on 2013/07/20.
//  Copyright (c) 2013年 鈴木 宏昌. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil title:(NSString *)name details:(NSString *)details;

@property(strong,nonatomic)NSString *details;

@property (strong, nonatomic) id detailItem;


@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
