//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Nurlan Rakhimzhanov on 12/11/13.
//  Copyright (c) 2013 Nurlan Rakhimzhanov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

//designated initializer
- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
