// Create a main function that prints "Hello World!"

#include <stdio.h>
#include "game.h"
#include <string.h>

int main()
{
	printf("Hello World!\n");

	game g;
	initialize_game(&g);
	shuffle_supply_deck(&g);
	deal_cards(&g);

	// Print the supply deck
	/*for (int i = 0; i < g.num_supply_deck; i++)
	{
		printf("%s ", get_card_name(g.supply_deck[i]));
	}*/
	printf("\n");

	char *print = NULL;

	exit(0);

	int game_ended = 0;
	// Create a while loop that will run until the game is over (the integer game_ended will be 1)
	while (game_ended == 0)
	{
		// Clear the screen and return the cursor to the top left using the ANSI escape sequence
		printf("\033[2J\033[1;1H");
		// Print the name of the game UNO (use the ANSI escape sequence to print the name in green)
		printf("\033[32mUNO\033[0m\n");

		// Print the game state
		print_game_state(&g);
		// Print the center pile of cards
		print_center_pile(&g);
		// Print the player's hand
		print_player_hand(&g, 1);

		// Check if print is not NULL
		if (print != NULL)
		{
			// Print the message
			printf("%s\n", print);
			// Set the message to NULL
			print = NULL;
		}

		// Get a line from the user and store it in a string variable called input (use fgets)
		char input[100];
		fgets(input, 100, stdin);

		// Create a switch statement to check for the second character in the string variable input
		// If the second character is 'd', then draw a card
		// If the second character is 'q', then quit the game

		switch (input[1])
		{
		case 'd':
			draw_cards(&g, g.current_player);
			break;
		case 'q':
			game_ended = 1;
			break;
		case 'e':
			// end_turn(&g, g.current_player);
			break;
		/* Place a card */
		case 'R':
			switch (input[2])
			{
			case '1':
				play_card(&g, g.current_player, RED_1);
				break;
			case '2':
				play_card(&g, g.current_player, RED_2);
				break;
			case '3':
				play_card(&g, g.current_player, RED_3);
				break;
			case '4':
				play_card(&g, g.current_player, RED_4);
				break;
			case '5':
				play_card(&g, g.current_player, RED_5);
				break;
			case '6':
				play_card(&g, g.current_player, RED_6);
				break;
			case '7':
				play_card(&g, g.current_player, RED_7);
				break;
			case '8':
				play_card(&g, g.current_player, RED_8);
				break;
			case '9':
				play_card(&g, g.current_player, RED_9);
				break;
			}
			break;
		case 'G':
			switch (input[2])
			{
			case '1':
				play_card(&g, g.current_player, GREEN_1);
				break;
			case '2':
				play_card(&g, g.current_player, GREEN_2);
				break;
			case '3':
				play_card(&g, g.current_player, GREEN_3);
				break;
			case '4':
				play_card(&g, g.current_player, GREEN_4);
				break;
			case '5':
				play_card(&g, g.current_player, GREEN_5);
				break;
			case '6':
				play_card(&g, g.current_player, GREEN_6);
				break;
			case '7':
				play_card(&g, g.current_player, GREEN_7);
				break;
			case '8':
				play_card(&g, g.current_player, GREEN_8);
				break;
			case '9':
				play_card(&g, g.current_player, GREEN_9);
				break;
			}
			break;
		case 'B':
			switch (input[2])
			{
			case '1':
				play_card(&g, g.current_player, BLUE_1);
				break;
			case '2':
				play_card(&g, g.current_player, BLUE_2);
				break;
			case '3':
				play_card(&g, g.current_player, BLUE_3);
				break;
			case '4':
				play_card(&g, g.current_player, BLUE_4);
				break;
			case '5':
				play_card(&g, g.current_player, BLUE_5);
				break;
			case '6':
				play_card(&g, g.current_player, BLUE_6);
				break;
			case '7':
				play_card(&g, g.current_player, BLUE_7);
				break;
			case '8':
				play_card(&g, g.current_player, BLUE_8);
				break;
			case '9':
				play_card(&g, g.current_player, BLUE_9);
				break;
			}
			break;
		case 'Y':
			switch (input[2])
			{
			case '1':
				play_card(&g, g.current_player, YELLOW_1);
				break;
			case '2':
				play_card(&g, g.current_player, YELLOW_2);
				break;
			case '3':
				play_card(&g, g.current_player, YELLOW_3);
				break;
			case '4':
				play_card(&g, g.current_player, YELLOW_4);
				break;
			case '5':
				play_card(&g, g.current_player, YELLOW_5);
				break;
			case '6':
				play_card(&g, g.current_player, YELLOW_6);
				break;
			case '7':
				play_card(&g, g.current_player, YELLOW_7);
				break;
			case '8':
				play_card(&g, g.current_player, YELLOW_8);
				break;
			case '9':
				play_card(&g, g.current_player, YELLOW_9);
				break;
			}
			break;
		default:
			strcpy(print, "Invalid input");
			break;
		}

		// Wait 0.1 seconds
	}

	return 0;
}
