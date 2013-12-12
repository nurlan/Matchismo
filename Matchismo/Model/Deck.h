//
//  Deck.h
//  Matchismo
//
//  Created by Nurlan Rakhimzhanov on 12/10/13.
//  Copyright (c) 2013 Nurlan Rakhimzhanov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
