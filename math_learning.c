/*******************************************************************************************
* Student: Vikram Singh StudentID: 11491025                                                *
* Class: CptS 121, Fall  2015; Lab Section 5                                               *
* Programming Assignment: math_learning                   								   *
* Date: December 01, 2015                                                                  *
* Description: Maybe be used to learn some basic math                                      *
*******************************************************************************************/

/*(1: easy) (2: fair) (3: intermediate) (4: hard) (5: Impossible)*/
/*made a function that generates random number use it to generate numbers and which operator to use */


//include local libararies
#include "math_learning.h"

/*************************************************************
 * Function: learning_app ()                                 *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: contains variables and calls all functions   *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
void learning_app (void)
{
	//hold name
	char user_name[4] = " ";

	//file open
	FILE* output = fopen ("math_learning.txt", "w");

	//initialize structs
	Game_options _vars;
	_vars.game_count = 0;
	_vars.user_score = 0;
	
	//srand to get random numbers
	srand ((unsigned int) time (NULL));

	//get user menu selection
	_vars.user_main_menu_selection = user_interface_selection ();

	//handle user selection
	switch (_vars.user_main_menu_selection)
	{
		//user selected learn how to use
		case 1:
			learning_use (); //display how to play the game
			learning_app (); //restart game
			break;
		//user selected to enter inital
		case 2:
			get_user_intials (user_name, output);
		//user selected to enter to choose a certian difficutly to start from
		case 3:
			//ask which difficulty
			_vars.user_difficulty = get_user_difficulty ();

			/*game needs to start from user difficulty selected*/
			//handle user difficulty
			switch(_vars.user_difficulty)
			{
				case 0:

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = easy_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = fair_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = intermediate_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = hard_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}

					//clear screen display score
					system ("cls");
					printf ("Score: %d. Thanks for learning today goodbye.\n", _vars.user_score);
					fprintf (output, "Name: %s.\nScore: %d.\n", user_name, _vars.user_score);
					fclose (output);
					exit (0);

					break;

				case 1:
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = fair_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = intermediate_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = hard_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}

					//clear screen display score
					system ("cls");
					printf ("Score: %d. Thanks for learning today goodbye.\n", _vars.user_score);
					fprintf (output, "Name: %s.\nScore: %d.\n", user_name, _vars.user_score);
					fclose (output);
					exit (0);

					break;
				case 2:
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = intermediate_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = hard_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}

					//clear screen display score
					system ("cls");
					printf ("Score: %d. Thanks for learning today goodbye.\n", _vars.user_score);
					fprintf (output, "Name: %s.\nScore: %d.\n", user_name, _vars.user_score);
					fclose (output);
					exit (0);

					break;
				case 3:
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = hard_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = hard_level_math (_vars.user_score);
					}

					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}

					//clear screen display score
					system ("cls");
					printf ("Score: %d. Thanks for learning today goodbye.\n", _vars.user_score);
					fprintf (output, "Name: %s.\nScore: %d.\n", user_name, _vars.user_score);
					fclose (output);
					exit (0);

					break;
				case 4:
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}
					for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
					{
						_vars.user_score = impossible_level_math (_vars.user_score);
					}

					//clear screen display score
					system ("cls");
					printf ("Score: %d. Thanks for learning today goodbye.\n", _vars.user_score);
					fprintf (output, "Name: %s.\nScore: %d.\n", user_name, _vars.user_score);
					fclose (output);
					exit (0);
			}
			break;

		//Start the game from the start
		case 4:

			for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
			{
				_vars.user_score = easy_level_math (_vars.user_score);
			}

			for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
			{
				_vars.user_score = fair_level_math (_vars.user_score);
			}

			for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
			{
				_vars.user_score = intermediate_level_math (_vars.user_score);
			}

			for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
			{
				_vars.user_score = hard_level_math (_vars.user_score);
			}

			for (_vars.game_count = 0; _vars.game_count < 10; _vars.game_count++)
			{
				_vars.user_score = impossible_level_math (_vars.user_score);
			}
			
			//clear screen display score
			system ("cls");
			printf ("Score: %d. Thanks for learning today goodbye.\n", _vars.user_score);
			fprintf (output, "Name: %s.\nScore: %d.\n", user_name, _vars.user_score);
			fclose (output);
			exit (0);
			break;

		case 5:

			printf ("You selected save and exit. Good bye.\n"); //message
			system ("pause"); //pause to tell use
			exit (0); //exit program with exit code 0
			break;

		default:

			//error handling
			printf ("Error: Please contact vikram.\n"
					"Error: 10(user selection)\n");
			system ("pause");
			exit (10); //return code 10
	}


}

/*************************************************************
 * Function: user_interface_printer ()                       *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
void user_interface_printer (void)
{
	printf ("Please select one:\n"
			"1. Learn about how to use the program\n"
			"2. Enter your initials (3 individual characters...)\n"
            "3. Difficulty selection\n"
            "4. Start a new sequence of problems\n"
            "5. Save and Quit\n");
}

/*************************************************************
 * Function: user_interface_selection ()                     *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int user_interface_selection (void)
{
	//local var
	int choice = 0;

	do{	
		system ("cls");//clear screen

		user_interface_printer (); //print user interferace

		//ask for a choice and assign i tto choice
		printf("Enter choice: ");
		scanf (" %d", &choice);

		//friendly reminder to user
		if ((choice <= 0) || (choice >= 6))
		{
			printf("Please make sure your choice is"
				" between 1-5. You entered %d.\n", choice);

			system ("pause");
		}

	} while ((choice <= 0) || (choice >= 6)); //wait for user input

	//clear screen
	system ("cls");

	return choice; // return choice
}

/*************************************************************
 * Function: learning_use ()       			                 *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
void learning_use (void)
{
	//message
	printf("Problem will be displaced in a line (see example below).\n"
			"\n\n"
			"Difficulty: Easy\n"
			"Problem: 1 + 1 = \n"
			"Answer: (Enter answer here)\n");

	//pause
	system ("pause");
}

/*************************************************************
 * Function: get_user_intials ()                             *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
void get_user_intials (char *initials, FILE* output)
{
	//local var
	int counter = 0;


	for (counter = 0; counter < 3; counter++)
	{
		if (counter == 0)
		{
			printf ("Please enter your Frist names' first letter: ");
			scanf (" %c", &initials[counter]);
			puts (" ");
		}
		if (counter == 1)
		{
			printf ("Please enter your Middle names' first letter: ");
			scanf (" %c", &initials[counter]);
			puts (" ");
		}
		if (counter == 2)
		{
			printf ("Please enter your Last names' first letter: ");
			scanf (" %c", &initials[counter]);
			puts (" ");
		}
	}

	// initials[3] = '\0';

	printf ("You entered: %s. If you made an error simply reselect"
		 	" Enter initials from main menu.\n", initials);

	system ("pause");

}

/*************************************************************
 * Function: get_user_difficulty ()                          *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int get_user_difficulty (void)
{
	//local var
	int choice = 0;

	do{
		//get choice
		system ("cls");

		printf ("Plase select a difficulty:\n"
				"1. Easy\n"
				"2. Fair\n"
				"3. Intermediate\n"
				"4. Hard\n"
				"5. Impossible\n");
		printf ("Enter Choice: ");
		scanf (" %d", &choice);

		//friendly reminder to user
		if ((choice <= 0) || (choice >= 6))
		{
			printf("Please make sure your choice is"
				" between 1-5. You entered %d.\n", choice);

			system ("pause");
		}

	} while ((choice <= 0) || (choice >= 6));

	printf ("You entered: %d\n", choice);
	system ("pause");
	system ("cls");

	//return choice
	return choice - 1;
}

/*************************************************************
 * Function: get_random_number_in_range ()                   *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int get_random_number_in_range (int up_limit)
{
	//local var
	int number = 0;

	//generate number
	number = rand () % up_limit;

	return number; //return random number
}

/*************************************************************
 * Function: easy_level_math ()                              *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int easy_level_math (int score)
{
	//local var
	int sub_level = 0, answer = 0, user_answer = 0,
	num_1 = 0, num_2 = 0, num_3 = 0;

	sub_level = rand () % 2; // get 0 or 1

	num_1 = get_random_number_in_range (5);
	num_2 = get_random_number_in_range (5);
	num_3 = get_random_number_in_range (5);

	switch (sub_level)
	{
		case 0:
			answer = num_1 + num_2 - num_3;
	
			system ("cls");
			puts ("Difficulty: Easy.");
			printf ("Problem: %d + %d - %d = \n", num_1, num_2, num_3);
			printf ("Answer: ");
			scanf (" %d", &user_answer);
		
			if (answer == user_answer)
			{
				score = score + 1;
				return score;
			}
			return score;
			break;
		
		case 1:
			answer = num_1 - num_2 + num_3;
			
			system ("cls");
			puts ("Difficulty: Easy.");
			printf ("Problem: %d - %d + %d = \n", num_1, num_2, num_3);
			printf ("Answer: ");
			scanf (" %d", &user_answer);

			if (answer == user_answer)
			{
				score = score + 1;
				return score;
			}
			return score;
			break;

		default:
			//error handling
			printf ("Error: Please contact vikram.\n"
					"Error: 10(easy level)\n");
			system ("pause");
			exit (20); //return code 10
			return 0;
	}
}

/*************************************************************
 * Function: fair_level_math ()                              *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int fair_level_math (int score)
{
	//local var
	int sub_level = 0, answer = 0, user_answer = 0,
	num_1 = 0, num_2 = 0;

	sub_level = rand () % 2; // get 0 or 1

	num_1 = get_random_number_in_range (5);
	num_2 = get_random_number_in_range (5);

	switch (sub_level)
	{
		case 0:
			answer = num_1 * num_2;
	
			system ("cls");
			puts ("Difficulty: Fair.");
			printf ("Problem: %d * %d = \n", num_1, num_2);
			printf ("Answer: ");
			scanf (" %d", &user_answer);
		
			if (answer == user_answer)
			{
				score = score + 1;
				return score;
			}

			return score;
			break;
		
		case 1:
			score = easy_level_math (score);
			return score;
			break;

		default:
			//error handling
			printf ("Error: Please contact vikram.\n"
					"Error: 10(easy level)\n");
			system ("pause");
			exit (20); //return code 10
			return 0;
	}
}

/*************************************************************
 * Function: intermediate_level_math ()                      *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int intermediate_level_math (int score)
{
	//local var
	int sub_level = 0, answer_num = 0, answer_rem = 0, user_answer_num = 0, 
	user_answer_rem = 0, num_1 = 0, num_2 = 0;

	sub_level = rand () % 2; // get 0 or 1

	num_1 = get_random_number_in_range (5);
	num_2 = get_random_number_in_range (5) + 1;

	switch (sub_level)
	{
		case 0:
			answer_num = num_1 / num_2;
			answer_rem = num_1 % num_2;
	
			system ("cls");
			puts ("Difficulty: Intermediate.");
			printf ("Problem: %d / %d = \n", num_1, num_2);
			printf ("Answer (Example 1 R 2 would be 1 2): ");
			scanf (" %d %d", &user_answer_num, &user_answer_rem);
		
			if ((answer_num == user_answer_num) && (answer_rem == user_answer_rem))
			{
				score = score + 1;
				return score;
			}
			return score;
			break;
		
		case 1:
			score = fair_level_math (score);
			return score;
			break;

		default:
			//error handling
			printf ("Error: Please contact vikram.\n"
					"Error: 10(easy level)\n");
			system ("pause");
			exit (20); //return code 10
			return 0;
	}
}

/*************************************************************
 * Function: hard_level_math ()                              *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int hard_level_math (int score)
{
	//local var
	int sub_level = 0, answer_num = 0, answer_rem = 0, user_answer_num = 0, 
	user_answer_rem = 0, num_1 = 0, num_2 = 0, num_3 = 0;

	sub_level = rand () % 2; // get 0 or 1

	num_1 = get_random_number_in_range (5);
	num_2 = get_random_number_in_range (5);
	num_3 = get_random_number_in_range (5) + 1;

	switch (sub_level)
	{
		case 0:
			system ("cls");
			puts ("Difficulty: Hard.");
			printf ("Problem: %d + %d / %d = \n", num_1, num_2, num_3);
			printf ("Answer (Example 1 R 2 would be 1 2): ");

			//do math
			num_1 = num_1 * num_3;

			answer_num = (num_1 + num_2) / num_3;
			answer_rem = (num_1 + num_2) % num_3;

			scanf (" %d %d", &user_answer_num, &user_answer_rem);
		
			if ((answer_num == user_answer_num) && (answer_rem == user_answer_rem))
			{
				score = score + 1;
				return score;
			}
			return score;
			break;
		
		case 1:
			score = intermediate_level_math (score);
			return score;
			break;

		default:
			//error handling
			printf ("Error: Please contact vikram.\n"
					"Error: 10(easy level)\n");
			system ("pause");
			exit (20); //return code 10
			return 0;
	}
}

/*************************************************************
 * Function: impossible_level_math ()                        *
 * Date Created: 12/03/15                                    *
 * Date Last Modified: 12/03/15                              *
 * Description: prints user options to screen                *
 * Input parameters: None                                    *
 * Returns: Nothing                                          *
 * Preconditions: Start of program.                          *
 * Postconditions: none                                      *
 *************************************************************/
int impossible_level_math (int score)
{
	//local var
	int sub_level = 0, answer_num = 0, answer_rem = 0, user_answer_num = 0, 
	user_answer_rem = 0, num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0;

	sub_level = rand () % 2; // get 0 or 1

	num_1 = get_random_number_in_range (5);
	num_2 = get_random_number_in_range (5);
	num_3 = get_random_number_in_range (5);
	num_4 = get_random_number_in_range (5) + 1;

	switch (sub_level)
	{
		case 0:
			system ("cls");
			puts ("Difficulty: Impossible.");
			printf ("Problem: %d + %d * %d / %d = \n", num_1, num_2, num_3, num_4);
			printf ("Answer (Example 1 R 2 would be 1 2): ");

			//do math
			num_1 = num_1 * num_4;

			answer_num = (num_1 + num_2 * num_3) / num_4;
			answer_rem = (num_1 + num_2 * num_3) % num_4;

			scanf (" %d %d", &user_answer_num, &user_answer_rem);
		
			if ((answer_num == user_answer_num) && (answer_rem == user_answer_rem))
			{
				score = score + 1;
				return score;
			}
			return score;
			break;
		
		case 1:
			score = hard_level_math (score);
			return score;
			break;

		default:
			//error handling
			printf ("Error: Please contact vikram.\n"
					"Error: 10(easy level)\n");
			system ("pause");
			exit (20); //return code 10
			return 0;
	}
}
