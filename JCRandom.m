#import "JCRandom.h"


@implementation JCRandom

- (int)rngInt:(int)max {
    return arc4random_uniform(max + 1);
}

- (int)rngIntFrom:(int)min to:(int)max {
    return arc4random_uniform((max - min) + 1) + min;
}

@end