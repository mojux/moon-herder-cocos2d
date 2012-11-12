﻿////  GameScreen.h//  MoonHerder////  Created by Roger Engelbert on 10/9/12.//  Copyright Done With Computers 2012. All rights reserved.//#import "GameHeaders.h"#import "LineContainer.h"#import "MoonHerderScreen.h"enum {    GAME_STATE_PLAY = 0,    GAME_STATE_NEW_LEVEL = 1,    GAME_STATE_GAME_OVER = 2};@class Moon;@class Sun;@class Moon;@class MoonPerch;@interface GameScreen : MoonHerderScreen {     CGPoint _moonStartPoint;    	Moon * _moon;	MoonPerch * _moonPerch;	Sun * _sun;	    LineContainer *_drawLayer;        CCLayer * _particlesLayer;        CCParticleSystemQuad * _boostHitParticles;    CCParticleSystemQuad * _lineHitParticles;    CCParticleSystemQuad * _groundHitParticles;    CCParticleSystemQuad * _starHitParticles;        CGRect _tryAgainBounds;    CGRect _menuBounds;        	BOOL _starsCollected;	BOOL _sunRise;	    int _gameState;       	}-(id) initWithGame:(Game *) game;-(void) newLevel;-(void) gameOver;-(void) newGame;-(void) addMoon;-(void) addSun;-(void) addBars;-(void) clearStarAtX:(float) x atY:(float) y;-(void) displayScoresAtX:(float) x atY:(float) y;@end	