//
//  ZZPhotoPickerSelectedCell.h
//  IJSDemo
//
//  Created by 刘猛 on 2017/8/10.
//  Copyright © 2017年 shanshen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZZPhotoPickerAssetModel;

@interface ZZPhotoPickerSelectedCell : UICollectionViewCell

/**选中的数据*/
@property (nonatomic ,   weak) ZZPhotoPickerAssetModel *selectedModel;
/**刷新UI的block*/
@property (nonatomic , copy) void (^didClickButton)(BOOL isSelected);
/**记录一下第一次进来的时候的index*/
@property (nonatomic , assign) NSInteger pushSelectedIndex;

/**参数说明*/
@property (nonatomic ,   weak) UIImageView *backImageView;

@end
