//
//  JxFetchResultTableViewController.h
//
//  Created by Jeanette Müller on 16.08.13.
//

#import <UIKit/UIKit.h>

#import "JxFetchResultViewController.h"


@interface JxFetchResultTableViewController : JxFetchResultViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, readwrite) BOOL dynamicUpdate;

- (UITableView *)tableView;

- (void)configureCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;
- (void)startCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;
- (void)unloadCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;


- (void)pagingCellFor:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath;

@end