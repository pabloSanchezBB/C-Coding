//CardGame.c

//Goal: To make a game of War in C, that can be developed to make other card games like blackjack or Poker

//Card Ascii Art: Maybe make into a .h file? Characters: ♠	♥ ♦ ♣

//Card Template:
//Big Card for Patterns like normal cards:
//		 _______________
//		/				\
//	   |  A				 |
//	   |				 |
//	   |				 |
//	   |				 |
//	   |				 |
//	   |		♠		 |
//	   |				 |
//	   |				 |
//	   |				 |
//	   |				 |
//	   |			  A	 |
//	    \_______________/
//
//String Equivalent:
// "		 _______________\n		/				\\n//	   |  A				 |\n	   |				 |\n	   |				 |\n	   |				 |\n	   |				 |\n	   |		♠		 |\n	   |				 |\n	   |				 |\n	   |				 |\n	   |				 |\n	   |			  A	 |\n	    \_______________/\n"
//Small Card for a smaller GUI
//		________
//	   /		\
//	  |	A		 |
//	  |			 |
//	  |	   ♠	 |
//	  |			 |
//	  |		   A |
//	   \________/






//includes:
#include<stdio.h>;
#include<stdlib.h>;
#include<time.h>;
#include<math.h>;
//#define deck_size 52 //defines the size of the deck to be 52 cards, Not used here because decks can lose/add cards


enum SUIT {SPADES, CLUBS, HEARTS, DIAMONDS}; //enum to indicate suit

struct Card{	//struct for a card to hold suit and number
	SUIT suit;
	int num;	//1 = Ace, 2-10 are the same, 11 = jack, 12 = queen, 13 = king
	char asciiArt[210];
}

//variables to use in the game:
int userInput; //used to start the game
int scoreP1, scoreP2, scoreTB; //scores for players 1 and 2, and a tiebreaker score
struct Card deck1[52], deck2[52], deckTB[104]; //decks for the 2 players 

//functions to use in the game:
void createDeck(Card *); //see if the "Card *" syntax is valid
void shuffle(int n, Card *);
void showCard(Card card);
void addCard();
void removeCard();

int main(void){
	
	//print to console what the rules of the game are:
	printf("The Name of the Game is War. \nEach Player receives 2 decks, and they each play 1 card, with the winner taking the opponents card.\n");
	printf("The Player wins the duel if their card is higher than the other player. If the duel is a tie, the players do a tie-breaker duel.\n");
	
	//do-while loop for when the player wants to play the game:
	do{
		printf("Would you like to play? Press 1 if yes, anything else if no.\n");
		scanf("%d", &userInput); //stores the key the user pressed as the int userInput
		
		if(userInput != 1){
			return 0; //maybe replace with exit(0);
		}
	}while(userInput != 1);
	//once userInput == 1 we move on...
	
	//How to Make War:
	
	//1. Initialize variables, Create 2 decks for each player, and an empty deck for a tiebreaker
	userTB = 0;
	
	scoreP1 = 0;
	scoreP2 = 0;
	scoreTB = 0;
	//do something like this to make the 3 decks
	createDeck(Deck1);
	createDeck(Deck2);
	//createDeck(DeckTB); Not needed, TB deck starts as empty
	
	//2. Each deck draws a card and displays it, then the winner is chosen or a Tie Breaker starts:
	//		if Tie Breakers starts:
	//			- add the 2 cards to a tiebreaker deck
	//			- call the method until there isn't a tie breaker(do recursion somehow)
	//			- Once the tie breaker ends, then add the tie breaker deck to the winner's deck and change score accordingly
	//			- Also add the cards from the duel that ended the tie breaker and shuffle the deck
	//		else add the cards to the bottom of the winner's deck, and add 1 to the winner's score and remove 1 from the loser's score, then shuffle the deck 
	
	
	
	
	
	//outside of loop: reset deck, and declare winner.
	
	
}

void createDeck(Card[] deck){
	int i,j,count; //iterators and count for the number of cards thast have been added
	
	for(i=0;i<4;++i){ //for loop for each suit(0 = Spades, 1 = Clubs, 2 = Hearts, 3 = Diamonds)
		for(j=0;j<13;++j){ //for loop for the numbers(Ace-King)
			deck[count] = Card(i,j,asciiArt[count]);
			count++;
		}
	}
}


