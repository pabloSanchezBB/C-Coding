//War.c
//Author: Trevor Rowland(pabloSanchezBB on Github)
//Goal: Make War in C using a Circular Queue, a Fisher-Yates Shuffling Algorithm, and a Graphical Output to Show the Game to the User

//Includes:
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <time.h>
	#include <math.h>

//Global Structs and Variables:
	enum SUIT {SPADES, CLUBS, HEARTS, DIAMONDS};	//enum to indicate suit(SPADES = 0, CLUBS = 1, HEARTS = 2, DIAMONDS = 3)

	struct Card{									//struct for a card with suit and key(number)
		int key;	//number(Ace, 2, 3, ..., King)
		enum SUIT suit;	//suit(Spades, Clubs, etc.)
	};
	
	int scoreP1, scoreP2;

//Function Declaration:
	void createDeck(struct Card *);								//initializes decks for each player as well as tiebreaker deck
	void shuffle(struct Card *);								//shuffles the deck using the Fisher-Yates method
	void addCard(struct Card *, struct Card, struct Card);		//adds card to the winner's deck
	void delCard();												//removes card from loser's deck/both cards to be added to tiebreaker deck
	struct Card showCard();										//prints the card to the screen
	int tiebreaker(struct Card *, struct Card, struct Card);	//recursive function for ties in a duel
	
//Main Function:
	int main(void){
		//local variables:
		int isGameOver = 0; //variable to let the game know to end
		
		struct Card duelC1, duelC2; //cards that are played in the duel, this is used to access the values.
		
		//initializing clock for random number generation(needed for shuffles) - this might go in void shuffle()
		srand(clock());
		
		//Steps:
		
		//1. Prompt User to Play.
			
			int tempStart; //int to see if the user wants to play
			do{
				printf("Welcome to War.c! Here are the rules:\n");
				printf("\t1. Each Player is Given a Deck of 52 Cards.\n");
				printf("\t2. Each Player Participates in a Duel, Where They Each Draw a Card.\n");
				printf("\t3. The Player with the Highest Card Wins the Duel, and They Take Both Cards.\n");
				printf("\t4. The Game Ends when One Player has all the Cards.\n");
				
				printf("\nIf You Would Like to Play, Enter 1, Otherwise Enter Any Character to Exit:\n");
				scanf("%d", tempStart); //scans for 1 to start the game
				
				if(tempStart != 1){ //if char entered is not 1 then exit the program
					exit(0);
				}
			}while(tempStart != 1);
		/*
		 *	2. Duels:
		 *		a. Create Decks, Prompt Users to Duel(scanf for "\r")
		 *		b. Pull Cards From Decks, Store their Struct Values as Temps and Place in Tiebreaker Deck
		 *		c. Check for Tiebreaker or !Tiebreaker:
		 *			i. If Tiebreaker: Call tiebreaker function recursively until tie is resolved.
		 *					Move cards from Tiebreaker Deck to Winner's Deck, wait for next duel.
		 *			ii. If no tie, Move cards to winner's deck and wait for next duel.
		 */
		while(isGameOver == 0){ //loops a duel until the game ends
			//Duel: Pull 2 Cards from the top of the deck and compare them
			duelC1 = showCard(/*deck1*/);	//shows the Card
			addCard(/*deck 1, TB deck*/);	//adds card from deck1 to the TB deck
			delCard(/*deck 1*/);			//removes the top card
			
			duelC2 = showCard(/*deck 2*/);	//
			addCard(/*deck 2, TB deck*/);	//adds card from deck2 to the TB deck
			delCard(/*deck 2*/);			//removes the top card
			
			int compareRes; //comparator result
			compareRes = compare(/*card from deck1, card from deck2*/); //compares the two cards and returns 0 if deck1 wins, 1 if deck2 wins, -1 if error
			
			if(compareRes == 0){ //if there is a tie
				tiebreaker();
				//Score calculation
			} else if(compareRes > 0){ //if Player 1(deck1) wins
				
			} else { //if compareRes < 0, Player 2(deck2) wins
				
			}
			
			if((scoreP1 == 104 && scoreP2 == 0)||(scoreP1 == 0 && scoreP2 == 104)){//if either player has all the cards, game ends
				isGameOver = 1;
			}
		}
		
		//3. Game Ends, Congratulate Winner
		if(scoreP1 == 104){
			printf("Congratulations Player 1! You have Won the War!\n");
		} else if(scoreP2 == 104){
			printf("Congratulations Player 2! You have Won the War!\n");
		} else {
			printf("Hmmm, Something went wrong, this game shouldn't have ended...");
		}
		
		//4. Free all Pointers in Memory and End the Program
		/*free pointers below*/

		return 0;
	}
	
//Function Descriptions:
/* Function List:
 *	void createDeck(struct Card *);								//initializes decks for each player as well as tiebreaker deck
 *	void shuffle(struct Card *);								//shuffles the deck using the Fisher-Yates method
 *	void addCard(struct Card *, struct Card, struct Card);		//adds card to the winner's deck
 *	void delCard();												//removes card from loser's deck/both cards to be added to tiebreaker deck
 *	struct Card showCard();										//prints the card to the screen
 *	int tiebreaker(struct Card *, struct Card, struct Card);	//recursive function for ties in a duel
*/

void createDeck(struct Card *deck){
	
}

