﻿////  MoonHerderData.h//  MoonHerder////  Created by Roger Engelbert on 10/9/12.//  Copyright Done With Computers 2012. All rights reserved.//		#import "GameHeaders.h"enum {    LINE_DECREMENT,    TOTAL_STARS,    COLLECTED_STARS,    TIME_DECREMENT,    BOOSTS,    TOTAL_STARS_COLLECTED,    BEST_SCORE};@interface MoonHerderData : GameData {        @private    float _initialLineDecrement;    float _lineDecrementRatio;    float _lineDecrement;        int _initialStars;    int _starsRatio;        float _initialTimeDecrement;    float _timeDecrementRatio;    float _timeDecrement;        int _initialBoostNumber;    int _boostNumberIncrement;    int _boostNumber;        int _collectedStars;    int _totalCollectedStars;    int _totalStars;    int _bestScore;    }@end		