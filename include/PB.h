#import <_Prefix/IOSMacros.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PB : NSObject
@property (assign, nonatomic) int savedAnimationDuration;
@property (strong, nonatomic) NSRegularExpression *spacesRegex;
@property (strong, nonatomic) NSRegularExpression *lineRegex;
-(NSString*)fixSecondaryString:(NSString*)secondaryText;
+ (PB*)sharedInstance;
@end