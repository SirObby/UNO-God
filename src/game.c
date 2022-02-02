// Implement the functions declared in game.h
// Credit the author of the game UNO for the rules and inspiration
// Author: David Gurevich (This is what GitHub Copilot told me, I'm not sure if it's true)

#include "game.h"

#include <stdio.h>
#include <stdlib.h>

void initialize_game(game *g)
{
	g->num_players = 2;

	// shuffle_supply_deck(&g);
}
void shuffle_supply_deck(game *g)
{
	g->supply_deck[0] = RED_1;
	g->supply_deck[1] = RED_2;
	g->supply_deck[2] = RED_3;
	g->supply_deck[3] = RED_4;
	g->supply_deck[4] = RED_5;
	g->supply_deck[5] = RED_6;
	g->supply_deck[6] = RED_7;
	g->supply_deck[7] = RED_8;
	g->supply_deck[8] = RED_9;
	g->supply_deck[9] = RED_SKIP;
	g->supply_deck[10] = RED_REVERSE;
	g->supply_deck[11] = RED_DRAW_TWO;
	g->supply_deck[12] = GREEN_1;
	g->supply_deck[13] = GREEN_2;
	g->supply_deck[14] = GREEN_3;
	g->supply_deck[15] = GREEN_4;
	g->supply_deck[16] = GREEN_5;
	g->supply_deck[17] = GREEN_6;
	g->supply_deck[18] = GREEN_7;
	g->supply_deck[19] = GREEN_8;
	g->supply_deck[20] = GREEN_9;
	g->supply_deck[21] = GREEN_SKIP;
	g->supply_deck[22] = GREEN_REVERSE;
	g->supply_deck[23] = GREEN_DRAW_TWO;
	g->supply_deck[24] = BLUE_1;
	g->supply_deck[25] = BLUE_2;
	g->supply_deck[26] = BLUE_3;
	g->supply_deck[27] = BLUE_4;
	g->supply_deck[28] = BLUE_5;
	g->supply_deck[29] = BLUE_6;
	g->supply_deck[30] = BLUE_7;
	g->supply_deck[31] = BLUE_8;
	g->supply_deck[32] = BLUE_9;
	g->supply_deck[33] = BLUE_SKIP;
	g->supply_deck[34] = BLUE_REVERSE;
	g->supply_deck[35] = BLUE_DRAW_TWO;
	g->supply_deck[36] = YELLOW_1;
	g->supply_deck[37] = YELLOW_2;
	g->supply_deck[38] = YELLOW_3;
	g->supply_deck[39] = YELLOW_4;
	g->supply_deck[40] = YELLOW_5;
	g->supply_deck[41] = YELLOW_6;
	g->supply_deck[42] = YELLOW_7;
	g->supply_deck[43] = YELLOW_8;
	g->supply_deck[44] = YELLOW_9;
	g->supply_deck[45] = YELLOW_SKIP;
	g->supply_deck[46] = YELLOW_REVERSE;
	g->supply_deck[47] = YELLOW_DRAW_TWO;
	g->supply_deck[48] = WILD_CHANGE_COLOR;
	g->supply_deck[48] = WILD_DRAW_FOUR;

	g->supply_deck[0 + 49] = RED_1;
	g->supply_deck[1 + 49] = RED_2;
	g->supply_deck[2 + 49] = RED_3;
	g->supply_deck[3 + 49] = RED_4;
	g->supply_deck[4 + 49] = RED_5;
	g->supply_deck[5 + 49] = RED_6;
	g->supply_deck[6 + 49] = RED_7;
	g->supply_deck[7 + 49] = RED_8;
	g->supply_deck[8 + 49] = RED_9;
	g->supply_deck[9 + 49] = RED_SKIP;
	g->supply_deck[10 + 49] = RED_REVERSE;
	g->supply_deck[11 + 49] = RED_DRAW_TWO;
	g->supply_deck[12 + 49] = GREEN_1;
	g->supply_deck[13 + 49] = GREEN_2;
	g->supply_deck[14 + 49] = GREEN_3;
	g->supply_deck[15 + 49] = GREEN_4;
	g->supply_deck[16 + 49] = GREEN_5;
	g->supply_deck[17 + 49] = GREEN_6;
	g->supply_deck[18 + 49] = GREEN_7;
	g->supply_deck[19 + 49] = GREEN_8;
	g->supply_deck[20 + 49] = GREEN_9;
	g->supply_deck[21 + 49] = GREEN_SKIP;
	g->supply_deck[22 + 49] = GREEN_REVERSE;
	g->supply_deck[23 + 49] = GREEN_DRAW_TWO;
	g->supply_deck[24 + 49] = BLUE_1;
	g->supply_deck[25 + 49] = BLUE_2;
	g->supply_deck[26 + 49] = BLUE_3;
	g->supply_deck[27 + 49] = BLUE_4;
	g->supply_deck[28 + 49] = BLUE_5;
	g->supply_deck[29 + 49] = BLUE_6;
	g->supply_deck[30 + 49] = BLUE_7;
	g->supply_deck[31 + 49] = BLUE_8;
	g->supply_deck[32 + 49] = BLUE_9;
	g->supply_deck[33 + 49] = BLUE_SKIP;
	g->supply_deck[34 + 49] = BLUE_REVERSE;
	g->supply_deck[35 + 49] = BLUE_DRAW_TWO;
	g->supply_deck[36 + 49] = YELLOW_1;
	g->supply_deck[37 + 49] = YELLOW_2;
	g->supply_deck[38 + 49] = YELLOW_3;
	g->supply_deck[39 + 49] = YELLOW_4;
	g->supply_deck[40 + 49] = YELLOW_5;
	g->supply_deck[41 + 49] = YELLOW_6;
	g->supply_deck[42 + 49] = YELLOW_7;
	g->supply_deck[43 + 49] = YELLOW_8;
	g->supply_deck[44 + 49] = YELLOW_9;
	g->supply_deck[45 + 49] = YELLOW_SKIP;
	g->supply_deck[46 + 49] = YELLOW_REVERSE;
	g->supply_deck[47 + 49] = YELLOW_DRAW_TWO;
	g->supply_deck[48 + 49] = WILD_CHANGE_COLOR;
	g->supply_deck[48 + 49] = WILD_DRAW_FOUR;

	g->supply_deck[48 + 49 + 1] = WILD_CHANGE_COLOR;
	g->supply_deck[48 + 49 + 2] = WILD_DRAW_FOUR;

	g->supply_deck[48 + 49 + 1 + 1] = WILD_CHANGE_COLOR;
	g->supply_deck[48 + 49 + 2 + 2] = WILD_DRAW_FOUR;

	// Create a temporary array to hold the shuffled deck
	int temp[MAX_DECK_SIZE];
	// Shuffle the deck
	for (int i = 0; i < MAX_DECK_SIZE; i++)
	{
		int random = rand() % MAX_DECK_SIZE;
		temp[i] = g->supply_deck[random];
		g->supply_deck[random] = g->supply_deck[i];
		g->supply_deck[i] = temp[i];
		g->num_supply_deck++;
	}
}
void deal_cards(game *g)
{
	// Deal cards to each player
	for (int i = 1; i < g->num_players + 1; i++)
	{
		printf("Dealing cards to player %d\n", i);
		for (int j = 0; j < 7; j++)
		{
			g->players[i].cards[j] = g->supply_deck[g->num_supply_deck - 1];
			g->num_supply_deck--;
			// Shift the cards in the supply deck to the left
			for (int k = 0; k < MAX_DECK_SIZE - 1; k++)
			{
				g->supply_deck[k] = g->supply_deck[k + 1];
			}
			// Print the card name that was just dealt
			printf("%s\n", get_card_name(g->players[i].cards[j]));
		}
	}
}
void play_card(game *g, int player, int card)
{
}
void print_game_state(game *g)
{
	printf("idk bruh, tbh idk why this function even exists.\n");
}
void print_player_hand(game *g, int player){
	for (size_t i = 0; i < g->players[player].numCards; i++)
	{
		printf("%s ", get_card_name(g->players[player].cards[i]));
	}
	printf("\n");
};
void print_center_pile(game *g){
	printf("				%s\n", get_card_name(g->current_card));
};
char *get_card_name(enum CARDS card)
{
	// Create a switch statement to return the name of the card based on the enum value
	switch (card)
	{
	case RED_1:
		return "R1";
	case RED_2:
		return "R2";
	case RED_3:
		return "R3";
	case RED_4:
		return "R4";
	case RED_5:
		return "R5";
	case RED_6:
		return "R6";
	case RED_7:
		return "R7";
	case RED_8:
		return "R8";
	case RED_9:
		return "R9";
	case RED_SKIP:
		return "RS";
	case RED_REVERSE:
		return "RR";
	case RED_DRAW_TWO:
		return "RT";
	case GREEN_1:
		return "G1";
	case GREEN_2:
		return "G2";
	case GREEN_3:
		return "G3";
	case GREEN_4:
		return "G4";
	case GREEN_5:
		return "G5";
	case GREEN_6:
		return "G6";
	case GREEN_7:
		return "G7";
	case GREEN_8:
		return "G8";
	case GREEN_9:
		return "G9";
	case GREEN_SKIP:
		return "GS";
	case GREEN_REVERSE:
		return "GR";
	case GREEN_DRAW_TWO:
		return "GT";
	case BLUE_1:
		return "B1";
	case BLUE_2:
		return "B2";
	case BLUE_3:
		return "B3";
	case BLUE_4:
		return "B4";
	case BLUE_5:
		return "B5";
	case BLUE_6:
		return "B6";
	case BLUE_7:
		return "B7";
	case BLUE_8:
		return "B8";
	case BLUE_9:
		return "B9";
	case BLUE_SKIP:
		return "BS";
	case BLUE_REVERSE:
		return "BR";
	case BLUE_DRAW_TWO:
		return "BT";
	case YELLOW_1:
		return "Y1";
	case YELLOW_2:
		return "Y2";
	case YELLOW_3:
		return "Y3";
	case YELLOW_4: 
		return "Y4";
	case YELLOW_5:
		return "Y5";
	case YELLOW_6:
		return "Y6";
	case YELLOW_7:
		return "Y7";
	case YELLOW_8:
		return "Y8";
	case YELLOW_9:
		return "Y9";
	case YELLOW_SKIP:
		return "YS";
	case YELLOW_REVERSE:
		return "YR";
	case YELLOW_DRAW_TWO:
		return "YT";
	case WILD_CHANGE_COLOR:
		return "WC";
	case WILD_DRAW_FOUR:
		return "WF";
	default:
		return "IC";
	}
};
// Implement the draw_cards function
void draw_cards(game *g, int player)
{
	// Grab the card from the supply deck index 0 and add it to the player's hand, then remove the card from the supply deck and decrement the number of cards in the supply deck
	// And increment the number of cards in the player's hand by 1
	g->players[player].cards[g->players[player].numCards + 1] = g->supply_deck[0];
	g->num_supply_deck--;
	g->players[player].numCards++;
	
	// Shift every card in the supply deck to the left by 1
	for (int i = 0; i < g->num_supply_deck; i++)
	{
		g->supply_deck[i] = g->supply_deck[i + 1];
	}
}