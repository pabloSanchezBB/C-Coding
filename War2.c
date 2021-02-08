/*	Trevor Rowland(github: pabloSanchezBB)
 *
 *	War.c
 *		A Game of War Played with 2 52 Card Decks, with a Graphical Representation of Each Round.
 */
/*########################################################################################################################## 
 *	Steps:
 *		0. Include All Necessary Header Files	
 *
 *		1. Make Structs and Global Variables(struct Card, enum Suit) Along With Function Declarations
 *	
 *		2. Make Circular Queue for the Deck
 *	
 *		3. Write Functions for the Game to Run
 *			a. createDeck() - Initialize a 52 Card Deck in a Circular Queue of Size 104
 *			b. shuffle() - Shuffle a Deck with the Fisher-Yates Method
 *			c. battle() - Create an Empty Deck for the Battle, Have the Battle with Recursion for Ties, calculate Scores
 *			d. addCard() - Adds a Card to a Player's Deck
 *			e. delCard() - Deletes a Card from a Player's Deck
 *	
 *		4. Write the main method containing the full Program
 *	
##########################################################################################################################*/
//0.
#include<stdio.h>
#include<time.h>

//1. 
enum SUIT = {SPADES, CLUBS, HEARTS, DIAMONDS};	//enum for suits of the cards

struct Card{	//structure for the Card Object
	int key;
	SUIT suit;
	char img[300];
};

struct Deck{	//Structure for the Deck of Cards
	int rear, front; //initialize start and end of queue
	
	int size;
	int *arr;
	
	Deck(int s){ //makes circular queues of Cards(or a deck)
		front = rear = -1; //set both the front and the end to -1, making the queue circular
		size = s;
		arr = new Card[s];
	}
	
	void addCard(Card value);
	int delCard();
	void displayDeck();
}

void createDeck(Card *);

void shuffle(Card *);

void battle(Card *, Card *);

//3. 
void createDeck(Card *){}

void shuffle(Card *){}

void battle(Card *, Card *){}

void addCard(Card *, Card){}

void delCard(Card *, Card){}

//4.
int main(void){
	struct Deck deck1[104]; //p1's deck
	
	createDeck(deck1);
	createDeck(deck2);
	return 0;
}
