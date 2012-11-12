﻿////  Sun.m//  MoonHerder////  Created by Roger Engelbert on 10/9/12.//  Copyright Done With Computers 2012. All rights reserved.//	#import "Sun.h"// Sun implementation@implementation Sun@synthesize hasRisen = _hasRisen;@synthesize hasGrown = _hasGrown;-(id) initWithGame:(Game *) game {	    self = [super initWithGame:game withRadius:50];    	if(self != nil) {				//two suns, one small, one large        _frame1 = [[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"sun_1.png"] ;        _frame2 = [[CCSpriteFrameCache sharedSpriteFrameCache] spriteFrameByName:@"sun_2.png"] ;                _skin = [CCSprite spriteWithSpriteFrame:_frame1];        		_hasRisen = NO;		_hasGrown = NO;		_friction = 0.98f;		_sunPosY = game.screenHeight - 120 * game.screen_ratio;			}		return self;}-(void) reset {	//bring values back to small sun	_radius = 50 * _game.screen_ratio;    _squaredRadius = _radius * _radius;    if (_skin.displayedFrame != _frame1) [_skin setDisplayFrame:_frame1];        _friction = 0.98f;		_hasGrown = NO;}-(void) highNoon {	//show big sun	_radius = 64 * _game.screen_ratio;    _squaredRadius = _radius * _radius;    if (_skin.displayedFrame != _frame2) [_skin setDisplayFrame:_frame2];	_friction = 0.9f;		_hasGrown = YES;}-(BOOL) checkCollisionWithMoon:(Ball *) moon {	if (!_hasRisen) return NO;				float diffx = moon.nextX - _nextX;	float diffy = moon.nextY - _nextY;	float distance = (diffx * diffx + diffy * diffy);	//simple collision check	if (distance < moon.squaredRadius + _squaredRadius) {		float angle = atan2(diffy,diffx);		moon.vx = 10 * _game.screen_ratio * cos(angle);		moon.vy = 10 * _game.screen_ratio * sin(angle);		_vx = -1*moon.vx;		_vy = -1*moon.vy;                return YES;	}        return NO;}-(void) update:(float)dt {        dt *= _game.screen_ratio;        //move sun up to final positon; don't check for collision yet	if (!_hasRisen) {						_vy += dt * 0.5;		        if (_nextY >= _sunPosY) {			_vy = 0;			_hasRisen = true;		} else {			_nextY = _skin.position.y + _vy;		}					} else {		//sun is ready,         if (_nextY < 80 * _game.screen_ratio) _vy +=  0.2;        		_nextX = _skin.position.x + _vx * dt;		_nextY = _skin.position.y + _vy * dt;					//check collision with sides		if (_nextX < _radius) {			_nextX = _radius ;			_vx *= -1;		}				if (_nextX > _game.screenWidth - _radius) {			_nextX = _game.screenWidth - _radius ;			_vx *= -1;		}            if (_nextY > _game.screenHeight) {			_nextY = _game.screenHeight;            _vy *= -1;		}				//rotate sun based either o VX or dt         if (fabs(_vx) > dt) {            _skin.rotation += _vx * 0.5f;        } else {            _skin.rotation +=  dt;        }				_vx *= _friction;		_vy *= _friction;	}}@end				