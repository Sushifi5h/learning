/*******************************************************************************************
* Student: Vikram Singh StudentID: 11491025                                                *
* Class: CptS 121, Fall  2015; Lab Section 5                                               *
* Programming Assignment: math_learning                   								   *
* Date: December 01, 2015                                                                  *
* Description: Maybe be used to learn some basic math                                      *
*******************************************************************************************/

//start of guard code
#ifndef MATH_LEARNING_H
#define MATH_LEARNING_H

//hide errors
#define _CRT_SECURE_NO_WARNINGS

//Libararies
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//structs
typedef struct
{
	int user_main_menu_selection; //stores main menu selection
	char user_initials[4];	//for user names
	int user_difficulty;	//store difficulty
	int user_score; //stoer user score
	int game_count; //games to be played according to level
} Game_options;

//prototypes
void learning_app (void); //main logic container
void user_interface_printer (void); //user interface printer
int user_interface_selection (void); //user interface selector
void learning_use (void); //display how to play
void get_user_intials (char initials[], FILE* output);//user intials
int get_user_difficulty (void); // get user difficulty
int get_random_number_in_range (int up_limit); //get random number in range
int easy_level_math (int score); //easy level
int fair_level_math (int score); //fair level
int intermediate_level_math (int score); //intermediate level
int hard_level_math (int score); //hard level
int impossible_level_math (int score);//impossible

//end guard code
#endif /* MATH_LEARNING_H */