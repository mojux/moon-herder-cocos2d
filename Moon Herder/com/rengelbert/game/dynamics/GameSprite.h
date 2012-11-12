﻿////  GameSprite.h//  MoonHerder////  Created by Roger Engelbert on 10/9/12.//  Copyright Done With Computers 2012. All rights reserved.//	#import "cocos2d.h"@class Game;@interface GameSprite : NSObject {        CCSprite * _skin;        BOOL _active;    BOOL _trashMe;    BOOL _hit;		@protected	Game * _game;}@property (nonatomic, retain) CCSprite * skin;@property BOOL active;@property BOOL trashMe;@property BOOL hit;-(id) initWithGame:(Game *) game;-(void) reset;-(void) destroy;-(void) update:(float) dt;-(void) placeAtX:(float) x atY:(float) y;-(void) placeAtX:(float) x;-(void) placeAtY:(float) y;@end