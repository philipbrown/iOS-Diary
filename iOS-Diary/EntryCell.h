//
//  EntryCell.h
//  iOS-Diary
//
//  Created by Philip Brown on 12/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DiaryEntry;

@interface EntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(DiaryEntry *)entry;

- (void)configureCellForEntry:(DiaryEntry *)entry;

@end
