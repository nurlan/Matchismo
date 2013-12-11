//
//  PlayingCard.m
//  Matchismo
//
//  Created by Nurlan Rakhimzhanov on 12/10/13.
//  Copyright (c) 2013 Nurlan Rakhimzhanov. All rights reserved.
//

#import "PlayingCard.h"

@implementation PlayingCard

- (NSString *)contents {
    NSArray *rankStrings = [PlayingCard rankSettings];
    return [rankStrings[self.rank] stringByAppendingString:self.suit];
}

@synthesize suit = _suit;

+ (NSArray *)validSuits {
    return @[@"♠️",@"♥️",@"♣️",@"♦️"];
}

- (void)setSuit:(NSString *)suit {
    if ([[PlayingCard validSuits] containsObject:suit]) {
        _suit = suit;
    }
}

- (NSString *)suit {
    return _suit ? _suit : @"?";
}

+ (NSArray *)rankSettings {
    return @[@"?",@"A",@"2",@"3",@"4",@"5",@"6",
             @"7",@"8",@"9",@"10",@"J",@"Q",@"K"];
}

+ (NSUInteger)maxRank {
    return [[self rankSettings] count] - 1;
}

- (void)setRank:(NSUInteger)rank {
    if (rank <= [PlayingCard maxRank]) {
        _rank = rank;
    }
}

@end