//
//  MasterViewController.h
//  TableViewTutorial2
//
//  Created by 鈴木 宏昌 on 2013/07/20.
//  Copyright (c) 2013年 鈴木 宏昌. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController{
    NSMutableArray *itemsArray;
    NSMutableArray *detailArray;
    
}

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (retain, atomic)NSMutableArray *itemArray;
@property (retain, atomic)NSMutableArray *detailArray;

@end
