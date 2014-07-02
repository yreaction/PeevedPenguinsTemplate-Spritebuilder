//
//  Gameplay.h
//  PeevedPenguins
//
//  Created by Juan Pedro Lozano on 26/06/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface Gameplay : CCNode  <CCPhysicsCollisionDelegate> {
    CCPhysicsNode *_physicsNode;
    CCNode *_catapultArm;
}
@end
