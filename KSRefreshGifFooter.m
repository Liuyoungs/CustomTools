//
//  KSRefreshGifFooter.m
//  TaiRunMall
//
//  Created by Kython Shu on 2017/8/29.
//  Copyright © 2017年 emily. All rights reserved.
//

#import "KSRefreshGifFooter.h"

@implementation KSRefreshGifFooter
-(void)prepare{
    [super prepare];
    // 设置普通状态的动画图片
    NSMutableArray *idleImages = [NSMutableArray array];
    for (NSUInteger i = 0; i<12; i++) {
        UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"interactive_ic_fox_no_%zd",i]];
        [idleImages addObject:image];
    }
    [self setImages:idleImages forState:MJRefreshStateIdle];
    
    // 设置即将刷新状态的动画图片（一松开就会刷新的状态）
    NSMutableArray *refreshingImages = [NSMutableArray array];
    for (NSUInteger i = 0; i<12; i++) {
        UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"interactive_ic_fox_no_%zd",i]];
        [refreshingImages addObject:image];
    }
    [self setImages:refreshingImages forState:MJRefreshStatePulling];
    
    // 设置正在刷新状态的动画图片
    [self setImages:refreshingImages forState:MJRefreshStateRefreshing];
    
    self.stateLabel.hidden = YES;
    [self setTitle:@"松开加载" forState:MJRefreshStatePulling];
    [self setTitle:@"玩命加载中..." forState:MJRefreshStateRefreshing];
    [self setTitle:@"没有更多数据了" forState:MJRefreshStateNoMoreData];
}
-(void)placeSubviews{
    [super placeSubviews];
    
 
    
}
@end
