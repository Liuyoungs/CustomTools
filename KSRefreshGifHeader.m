//
//  KSRefreshGifHeader.m
//  TaiRunMall
//
//  Created by Kython Shu on 2017/8/3.
//  Copyright © 2017年 emily. All rights reserved.
//

#import "KSRefreshGifHeader.h"

@implementation KSRefreshGifHeader

#pragma mark - 重写 MJRefreshGifHeader 的方法
-(void)placeSubviews{
    [super placeSubviews];
    
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, self.frame.size.width, self.frame.size.height)];
    imageView.image = [UIImage imageNamed:@"interactive_ic_back"];
    [self insertSubview:imageView atIndex:0];
}

- (void)prepare{
    [super prepare];

    // 设置即将刷新状态的动画图片（一松开就会刷新的状态）
    NSMutableArray *refreshingImages = [NSMutableArray array];
    for (NSUInteger i = 1; i<=4; i++) {
        UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"interactive_ic_fox%zd", i]];
        [refreshingImages addObject:image];
    }
    [self setImages:refreshingImages forState:MJRefreshStatePulling];
    
    // 设置正在刷新状态的动画图片
    [self setImages:refreshingImages forState:MJRefreshStateRefreshing];
    
    [self setImages:refreshingImages forState:MJRefreshStateIdle];
    
    //隐藏时间
    self.lastUpdatedTimeLabel.hidden = YES;
    //隐藏状态
    self.stateLabel.hidden = YES;
}


@end
