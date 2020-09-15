#import <_Prefix/IOSMacros.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NCNotificationContentView : UIView
@property (nonatomic, assign) BOOL isFromBanner;
@property (nonatomic, retain) UIView *primaryLabel;
-(UILabel*)_primaryLabel;
-(NSString *)secondaryText;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
@end

@interface MTPlatterHeaderContentView
@property (nonatomic, assign) BOOL isFromBanner;
@end

@interface PLPlatterHeaderContentView : UIView
@property (nonatomic, assign) BOOL isFromBanner;
@property (nonatomic, retain) NSArray *_iconButtons;
@end

@interface NCNotificationShortLookView : UIView
-(NCNotificationContentView*)_notificationContentView;
-(PLPlatterHeaderContentView*)_headerContentView;
@property (nonatomic, assign) BOOL isFromBanner;
@end

@interface PLPlatterHeaderContentViewLayoutManager : NSObject
@property (nonatomic, retain) PLPlatterHeaderContentView *headerContentView;
@end
