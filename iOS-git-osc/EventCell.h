//
//  EventCell.h
//  iOS-git-osc
//
//  Created by chenhaoxiang on 14-7-8.
//  Copyright (c) 2014年 chenhaoxiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RTLabel.h"

@interface EventCell : UITableViewCell

@property UIImageView *userPortrait;
//@property RTLabel *eventDescription;
@property UILabel *eventDescription;
@property UILabel *time;

@end