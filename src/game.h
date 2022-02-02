// Create an ifndef guard
// Create a define
#ifndef GAME_H
#define GAME_H

#include <stdio.h>

// Define MAX_DECK_SIZE as a constant of value 108 (108 cards)
// Define MAX_PLAYERS as a constant of value 8 (8 players)
// Define PLAYER_STARTING_HAND_SIZE as a constant of value 7 (7 cards)
// Define MAX_PLAYER_HAND_SIZE as a constant of value 100 (100 cards), even though it is the physical limit of the game
#define MAX_DECK_SIZE 108
#define MAX_PLAYERS 8
#define PLAYER_STARTING_HAND_SIZE 7
#define MAX_PLAYER_HAND_SIZE 100

// Create an ENUM that will hold values for the cards the game has.
// The cards have a type and a value. The types are: (RED, BLUE, GREEN, YELLOW, WILD)
// The values are: (1, 2, 3, 4, 5, 6, 7, 8, 9, SKIP, REVERSE, DRAW_TWO)
// The WILD cards do not have the same values, WILD cards can have the values CHANGE_COLOR and DRAW_FOUR
// Create the CARDS enum where each value is a combination of the type and value
enum CARDS {
	RED_1,
	RED_2,
	RED_3,
	RED_4,
	RED_5,
	RED_6,
	RED_7,
	RED_8,
	RED_9,
	RED_SKIP,
	RED_REVERSE,
	RED_DRAW_TWO,
	GREEN_1,
	GREEN_2,
	GREEN_3,
	GREEN_4,
	GREEN_5,
	GREEN_6,
	GREEN_7,
	GREEN_8,
	GREEN_9,
	GREEN_SKIP,
	GREEN_REVERSE,
	GREEN_DRAW_TWO,
	BLUE_1,
	BLUE_2,
	BLUE_3,
	BLUE_4,
	BLUE_5,
	BLUE_6,
	BLUE_7,
	BLUE_8,
	BLUE_9,
	BLUE_SKIP,
	BLUE_REVERSE,
	BLUE_DRAW_TWO,
	YELLOW_1,
	YELLOW_2,
	YELLOW_3,
	YELLOW_4,
	YELLOW_5,
	YELLOW_6,
	YELLOW_7,
	YELLOW_8,
	YELLOW_9,
	YELLOW_SKIP,
	YELLOW_REVERSE,
	YELLOW_DRAW_TWO,
	WILD_CHANGE_COLOR,
	WILD_DRAW_FOUR
};

// Create a player struct to hold the player's data, which is the player's name and the player's cards
typedef struct player {
		char name[20];
		// Create an integer to hold the amount of cards the player has
		int numCards;
		// Create an array of cards to hold the player's cards (MAX_PLAYER_HAND_SIZE)
		enum CARDS cards[MAX_PLAYER_HAND_SIZE];
} player;

// Create a game struct to hold the game state the players, the supply deck and the center pile of cards.
typedef struct game {
		// Create an array of players
		// Create an array of cards that are in the supply deck
		// Create an array of cards that are in the center pile
		// Create a variable to hold the number of players
		// Create a variable to hold the number of cards in the supply deck
		// Create a variable to hold the number of cards in the center pile
		// Create a variable to hold the current direction of the game
		// Create a variable to hold the current player
		// Create a variable to hold the current card

		player players[MAX_PLAYERS];
		int supply_deck[MAX_DECK_SIZE];
		int center_pile[MAX_DECK_SIZE];
		int num_players;
		int num_supply_deck;
		int num_center_pile;
		int direction;
		int current_player;
		enum CARDS current_card;

} game;

// Create a function that will initialize the game struct
// Create a function that will shuffle the supply deck
// Create a function that will deal the cards to the players (7 cards to each player)
// Create a function that will print the game state
// Create a function that will print the player's hand
// Create a function that will print the center pile of cards
void initialize_game(game *g);
void shuffle_supply_deck(game *g);
void deal_cards(game *g);
void print_game_state(game *g);
void print_player_hand(game *g, int player);
void print_center_pile(game *g);
/* Player actions */
// Create a function that will draw cards from the supply deck to the player's hand until the player gets a card that can be played.
// Create a function that will play a card from the player's hand to the center pile of cards.
void draw_cards(game *g, int player);
void play_card(game *g, int player, int card);
void end_turn(game *g, int player);

// Create a function that will get the card name from the card enum
char *get_card_name(enum CARDS card);

#endif
