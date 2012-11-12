﻿////  Game.h//  MoonHerder////  Created by Roger Engelbert on 10/9/12.//  Copyright Done With Computers 2012. All rights reserved.//#import "cocos2d.h"#import "Screen.h"#import "Images.h"#import "GameData.h"@class Screen;@class Sounds;@class Images;@class GameData;enum {	GAME_MODE_PLAY,	GAME_MODE_PAUSE,	GAME_MODE_ANIMATE,	GAME_MODE_MENU};@interface Game : CCLayer {        int _screen_ratio;    int _screenWidth;    int _screenHeight;    Screen * _screen;    Sounds * _sounds;    Images * _images;    GameData * _gameData;    NSMutableDictionary *  _screens;    }@property (nonatomic, retain) Screen * screen;@property (nonatomic, retain) Sounds * sounds;@property (nonatomic, retain) Images * images;@property (nonatomic, retain) GameData * gameData;@property int screen_ratio;@property int screenWidth;@property int screenHeight;-(id) initWithWidth:(int) width withHeight:(int) height;-(void) setScreenWithName:(NSString *) name;-(id) getObjectFromPoolWithName:(int) name;-(void) createScreens;-(void) createPools;-(CGPoint)touchFromLocation:(UITouch *)touch;@end		