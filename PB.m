#include "PB.h"

static PB *_sharedInstance = nil;
@implementation PB

+ (PB*)sharedInstance {
	@synchronized(self) {
		if (!_sharedInstance) {
			_sharedInstance = [[self alloc] init];
		}
		return _sharedInstance;
	}
}

-(id)init {
	if (self = [super init]) {
		self.spacesRegex = [NSRegularExpression regularExpressionWithPattern:@"(?m) +$" options:0 error:NULL];
		self.lineRegex = [NSRegularExpression regularExpressionWithPattern:@"\n+" options:0 error:NULL];
	}
	return self;
}

-(NSString*)fixSecondaryString:(NSString*)secondaryText {
	if(secondaryText) {
		secondaryText = [self.spacesRegex stringByReplacingMatchesInString:secondaryText options:0 range:NSMakeRange(0, [secondaryText length]) withTemplate:@""];
		return [self.lineRegex stringByReplacingMatchesInString:secondaryText options:0 range:NSMakeRange(0, [secondaryText length]) withTemplate:@" \u2022 "];
	}
	return nil;
}

@end