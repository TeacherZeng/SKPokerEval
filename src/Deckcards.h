// SKPokerEval
//
// Copyright 2010 Kenneth J. Shackleton
//
// This program gives you software freedom; you can copy, convey, propagate,
// redistribute and/or modify this program under the terms of the GNU General
// Public License (GPL) as published by the Free Software Foundation (FSF),
// either version 3 of the License, or (at your option) any later version of
// the GPL published by the FSF.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program in a file in the top-level directory called "GPLv3". If
// not, see http://www.gnu.org/licenses/.

#ifndef SKPOKEREVAL_DECKCARDS_H
#define SKPOKEREVAL_DECKCARDS_H

#include "Constants.h"
#include <cstdint>

uint_fast32_t const card[DECK_SIZE] = {
  (ACE << NON_FLUSH_BIT_SHIFT) + SPADE,
  (ACE << NON_FLUSH_BIT_SHIFT) + HEART,
  (ACE << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (ACE << NON_FLUSH_BIT_SHIFT) + CLUB,

  (KING << NON_FLUSH_BIT_SHIFT) + SPADE,
  (KING << NON_FLUSH_BIT_SHIFT) + HEART,
  (KING << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (KING << NON_FLUSH_BIT_SHIFT) + CLUB,

  (QUEEN << NON_FLUSH_BIT_SHIFT) + SPADE,
  (QUEEN << NON_FLUSH_BIT_SHIFT) + HEART,
  (QUEEN << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (QUEEN << NON_FLUSH_BIT_SHIFT) + CLUB,

  (JACK << NON_FLUSH_BIT_SHIFT) + SPADE,
  (JACK << NON_FLUSH_BIT_SHIFT) + HEART,
  (JACK << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (JACK << NON_FLUSH_BIT_SHIFT) + CLUB,

  (TEN << NON_FLUSH_BIT_SHIFT) + SPADE,
  (TEN << NON_FLUSH_BIT_SHIFT) + HEART,
  (TEN << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (TEN << NON_FLUSH_BIT_SHIFT) + CLUB,

  (NINE << NON_FLUSH_BIT_SHIFT) + SPADE,
  (NINE << NON_FLUSH_BIT_SHIFT) + HEART,
  (NINE << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (NINE << NON_FLUSH_BIT_SHIFT) + CLUB,

  (EIGHT << NON_FLUSH_BIT_SHIFT) + SPADE,
  (EIGHT << NON_FLUSH_BIT_SHIFT) + HEART,
  (EIGHT << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (EIGHT << NON_FLUSH_BIT_SHIFT) + CLUB,

  (SEVEN << NON_FLUSH_BIT_SHIFT) + SPADE,
  (SEVEN << NON_FLUSH_BIT_SHIFT) + HEART,
  (SEVEN << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (SEVEN << NON_FLUSH_BIT_SHIFT) + CLUB,

  (SIX << NON_FLUSH_BIT_SHIFT) + SPADE,
  (SIX << NON_FLUSH_BIT_SHIFT) + HEART,
  (SIX << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (SIX << NON_FLUSH_BIT_SHIFT) + CLUB,

  (FIVE << NON_FLUSH_BIT_SHIFT) + SPADE,
  (FIVE << NON_FLUSH_BIT_SHIFT) + HEART,
  (FIVE << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (FIVE << NON_FLUSH_BIT_SHIFT) + CLUB,

  (FOUR << NON_FLUSH_BIT_SHIFT) + SPADE,
  (FOUR << NON_FLUSH_BIT_SHIFT) + HEART,
  (FOUR << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (FOUR << NON_FLUSH_BIT_SHIFT) + CLUB,

  (THREE << NON_FLUSH_BIT_SHIFT) + SPADE,
  (THREE << NON_FLUSH_BIT_SHIFT) + HEART,
  (THREE << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (THREE << NON_FLUSH_BIT_SHIFT) + CLUB,

  (TWO << NON_FLUSH_BIT_SHIFT) + SPADE,
  (TWO << NON_FLUSH_BIT_SHIFT) + HEART,
  (TWO << NON_FLUSH_BIT_SHIFT) + DIAMOND,
  (TWO << NON_FLUSH_BIT_SHIFT) + CLUB
};

uint_fast8_t const suit[DECK_SIZE] = {
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB,
  INDEX_SPADE, INDEX_HEART, INDEX_DIAMOND, INDEX_CLUB
};

uint_fast16_t const suit_kronecker[NUMBER_OF_SUITS][DECK_SIZE] = {
  {
    ACE_FLUSH,   0, 0, 0,
    KING_FLUSH,  0, 0, 0,
    QUEEN_FLUSH, 0, 0, 0,
    JACK_FLUSH,  0, 0, 0,
    TEN_FLUSH,   0, 0, 0,
    NINE_FLUSH,  0, 0, 0,
    EIGHT_FLUSH, 0, 0, 0,
    SEVEN_FLUSH, 0, 0, 0,
    SIX_FLUSH,   0, 0, 0,
    FIVE_FLUSH,  0, 0, 0,
    FOUR_FLUSH,  0, 0, 0,
    THREE_FLUSH, 0, 0, 0,
    TWO_FLUSH,   0, 0, 0
  },
  {
    0, ACE_FLUSH,   0, 0,
    0, KING_FLUSH,  0, 0,
    0, QUEEN_FLUSH, 0, 0,
    0, JACK_FLUSH,  0, 0,
    0, TEN_FLUSH,   0, 0,
    0, NINE_FLUSH,  0, 0,
    0, EIGHT_FLUSH, 0, 0,
    0, SEVEN_FLUSH, 0, 0,
    0, SIX_FLUSH,   0, 0,
    0, FIVE_FLUSH,  0, 0,
    0, FOUR_FLUSH,  0, 0,
    0, THREE_FLUSH, 0, 0,
    0, TWO_FLUSH,   0, 0
  },
  {
    0, 0, ACE_FLUSH,   0,
    0, 0, KING_FLUSH,  0,
    0, 0, QUEEN_FLUSH, 0,
    0, 0, JACK_FLUSH,  0,
    0, 0, TEN_FLUSH,   0,
    0, 0, NINE_FLUSH,  0,
    0, 0, EIGHT_FLUSH, 0,
    0, 0, SEVEN_FLUSH, 0,
    0, 0, SIX_FLUSH,   0,
    0, 0, FIVE_FLUSH,  0,
    0, 0, FOUR_FLUSH,  0,
    0, 0, THREE_FLUSH, 0,
    0, 0, TWO_FLUSH,   0
  },
  {
    0, 0, 0, ACE_FLUSH,
    0, 0, 0, KING_FLUSH,
    0, 0, 0, QUEEN_FLUSH,
    0, 0, 0, JACK_FLUSH,
    0, 0, 0, TEN_FLUSH,
    0, 0, 0, NINE_FLUSH,
    0, 0, 0, EIGHT_FLUSH,
    0, 0, 0, SEVEN_FLUSH,
    0, 0, 0, SIX_FLUSH,
    0, 0, 0, FIVE_FLUSH,
    0, 0, 0, FOUR_FLUSH,
    0, 0, 0, THREE_FLUSH,
    0, 0, 0, TWO_FLUSH
  }
};

#endif
