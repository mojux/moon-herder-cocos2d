﻿////  Ball.h//  MoonHerder////  Created by Roger Engelbert on 10/9/12.//  Copyright Done With Computers 2012. All rights reserved.//	#import "GameHeaders.h"@interface Ball : MovingSprite {    int _radius;    int _squaredRadius;    int _terminal_velocity;        CCSpriteFrame * _frame1;    CCSpriteFrame * _frame2;}@property int radius;@property int squaredRadius;-(id) initWithGame:(Game *) game withRadius:(int) radius;-(void) limitSpeeds;@end