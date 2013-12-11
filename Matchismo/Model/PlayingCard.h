//
//  PlayingCard.h
//  Matchismo
//
//  Created by Nurlan Rakhimzhanov on 12/10/13.
//  Copyright (c) 2013 Nurlan Rakhimzhanov. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
