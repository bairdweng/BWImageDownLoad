/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import "SDWebImageCompat.h"
#import "SDWebImageDefine.h"
#import "SDWebImageManager.h"
#import "SDWebImageTransition.h"
#import "SDWebImageIndicator.h"

FOUNDATION_EXPORT const int64_t SDWebImageProgressUnitCountUnknown; /* 1LL */
typedef void(^SDSetImageBlock)(UIImage * _Nullable image, NSData * _Nullable imageData, SDImageCacheType cacheType, NSURL * _Nullable imageURL);
@interface UIView (WebCache)
@property (nonatomic, strong, readonly, nullable) NSURL *sd_imageURL;
@property (nonatomic, strong, readonly, nullable) NSString *sd_latestOperationKey;
@property (nonatomic, strong, null_resettable) NSProgress *sd_imageProgress;
- (void)sd_internalSetImageWithURL:(nullable NSURL *)url
                  placeholderImage:(nullable UIImage *)placeholder
                           options:(SDWebImageOptions)options
                           context:(nullable SDWebImageContext *)context
                     setImageBlock:(nullable SDSetImageBlock)setImageBlock
                          progress:(nullable SDImageLoaderProgressBlock)progressBlock
                         completed:(nullable SDInternalCompletionBlock)completedBlock;

- (void)sd_cancelCurrentImageLoad;
@property (nonatomic, strong, nullable) SDWebImageTransition *sd_imageTransition;

@property (nonatomic, strong, nullable) id<SDWebImageIndicator> sd_imageIndicator;


@end
