//
//  NewEntryViewController.h
//  iOS-Diary
//
//  Created by Philip Brown on 09/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DiaryEntry;

@interface EntryViewController : UIViewController

@property (nonatomic, strong) DiaryEntry *entry;

@end
