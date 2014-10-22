#import "JCRandom.h"

@implementation JCRandom

- (int)rngInt:(int)max {
    return arc4random_uniform(max + 1);
}

- (int)rngIntFrom:(int)min to:(int)max {
    return arc4random_uniform((max - min) + 1) + min;
}

- (double)rngZeroToOne {
    return ((double)arc4random() / 0x100000000);
}

- (double)rngZeroToOne:(unsigned int)resolution {
    return ((double)arc4random_uniform(resolution + 1) / resolution);
}

@end