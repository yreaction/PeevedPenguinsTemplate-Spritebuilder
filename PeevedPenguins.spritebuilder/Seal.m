//
//  Seal.m
//  PeevedPenguins
//
//  Created by Juan Pedro Lozano on 26/06/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "Seal.h"

@implementation Seal
- (void) didLoadFromCCB {
    self.physicsBody.collisionType = @"seal";
}


@end
