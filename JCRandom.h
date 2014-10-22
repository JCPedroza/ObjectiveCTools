#import <Foundation/Foundation.h>

/**
 * Various random number generation tools.
 */
@interface JCRandom : NSObject

/**
 * Generates a random integer in the range [0, max].
 * @param max Maximum value.
 * @returns A random integer in the range [0, max].
 */
- (int)rngInt:(int)max;

/**
 * Generates a random integer in the range [min, max].
 * @param min Minimum value.
 * @param max Maximum value.
 * @returns a random integer in the range [min, max].
 */
- (int)rngIntFrom:(int)min to:(int)max;

/**
 * Generates a random double in the range [0, 1].
 * @returns A random double in the range [0, 1].
 */
- (double)rngZeroToOne;

/**
 * Generates a random double in the range [0, 1], with a specific resolution.
 * @param resolution Resolution of the range [0, 1].
 * @returns A random doubel in the range [0, 1].
 */
- (double)rngZeroToOne:(unsigned int)resolution;

@end