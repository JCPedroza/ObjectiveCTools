#import <Foundation/Foundation.h>

/**
 * Various random number generation tools.
 */
@interface JCRandom : NSObject

/**
 * Generates a random integer in the range [0, max].
 * @param max maximum value
 * @returns a random integer in the range [0, max]
 */
- (int)rngInt:(int)max;

/**
 * Generates a random integer in the range [min, max].
 * @param min minimum value
 * @param max maximum value
 * @returns a random integer in the range [min, max]
 */
- (int)rngIntFrom:(int)min to:(int)max;

@end