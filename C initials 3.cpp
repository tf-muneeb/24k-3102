//2022 mids PF


//Question 1: 
/*#include<stdio.h>
int main(){
	int n;
	printf("Enter the barcode(5 digits): ");
	scanf("%d",&n);
	if((n/1000)%2==0||(n/1000)%4==0){
		printf("Category 1");
	}else if((n%10)%3==0&&(n/10)%2!=0){
		printf("Category 2");
	}else {
		printf("Category 3");
	}
	return 0;
}*/

//Quetsion 2:
/*#include <stdio.h>
int main() {
    int largeSpaces, mediumSpaces, smallSpaces, N, carType, feedbackScore = 0, occupiedLarge = 0, occupiedMedium = 0, occupiedSmall = 0;

    // Input the number of parking spaces of each type
    printf("Enter the number of large, medium, and small parking spaces: ");
    scanf("%d %d %d", &largeSpaces, &mediumSpaces, &smallSpaces);
    // Input the number of cars to be parked
    printf("Enter the number of cars to be parked: ");
    scanf("%d", &N);
    // Simulate parking management for N cars
    for (int i = 1; i <= N; i++) {
        printf("Car %d: Enter the car type (1 for large, 2 for medium, 3 for small): ", i);
        scanf("%d", &carType);

        // Check if parking is possible and update feedback score and occupied spaces
        if (carType == 1 && largeSpaces > 0) {
            largeSpaces--;
            occupiedLarge++;
            feedbackScore += 5;
        } else if (carType == 2 && (largeSpaces > 0 || mediumSpaces > 0)) {
            if (largeSpaces > 0) {
                largeSpaces--;
                occupiedLarge++;
                feedbackScore += 10;
            } else {
                mediumSpaces--;
                occupiedMedium++;
                feedbackScore += 5;
            }
        } else if (carType == 3 && (largeSpaces > 0 || mediumSpaces > 0 || smallSpaces > 0)) {
            if (largeSpaces > 0) {
                largeSpaces--;
                occupiedLarge++;
                feedbackScore += 10;
            } else if (mediumSpaces > 0) {
                mediumSpaces--;
                occupiedMedium++;
                feedbackScore += 10;
            } else {
                smallSpaces--;
                occupiedSmall++;
                feedbackScore += 5;
            }
        } else {
            feedbackScore -= 50;
        }
    }
    // Print the final feedback score and occupied parking spaces
    printf("\nFinal feedback score: %d\n", feedbackScore);
    printf("Occupied parking spaces:\n");
    printf("  Large: %d\n", occupiedLarge);
    printf("  Medium: %d\n", occupiedMedium);
    printf("  Small: %d\n", occupiedSmall);
    return 0;
}*/

//Question 3:
/*
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int rank;
    char suit;
} Card;

typedef struct {
    Card cards[5];
} Hand;

int check_four_of_a_kind(Hand hand) {
    int ranks[15] = {0};
    for (int i = 0; i < 5; i++) {
        ranks[hand.cards[i].rank]++;
    }
    for (int i = 2; i <= 14; i++) {
        if (ranks[i] == 4) return 1;
    }
    return 0;
}

int check_pair(Hand hand) {
    int ranks[15] = {0}, pair_count = 0;
    for (int i = 0; i < 5; i++) {
        ranks[hand.cards[i].rank]++;
    }
    for (int i = 2; i <= 14; i++) {
        if (ranks[i] == 2) pair_count++;
    }
    return pair_count == 2;
}

int check_high_card(Hand hand) {
    return 1;
}

int evaluate_hand(Hand hand) {
    if (check_four_of_a_kind(hand)) return 3; // 4 of a Kind
    if (check_pair(hand)) return 2;           // Pair
    return 1;                                  // High Card
}

void read_hand(Hand *hand) {
    for (int i = 0; i < 5; i++) {
        printf("Enter card %d (rank suit): ", i + 1);
        scanf("%d %c", &hand->cards[i].rank, &hand->cards[i].suit);
    }
}

int main() {
    int alice_wins = 0, bob_wins = 0, draws = 0;
    char continue_game;

    do {
        Hand alice, bob;
        
        printf("Enter Alice's hand:\n");
        read_hand(&alice);
        
        printf("Enter Bob's hand:\n");
        read_hand(&bob);

        int alice_score = evaluate_hand(alice);
        int bob_score = evaluate_hand(bob);

        if (alice_score > bob_score) {
            printf("Alice wins\n");
            alice_wins++;
        } else if (bob_score > alice_score) {
            printf("Bob wins\n");
            bob_wins++;
        } else {
            printf("Draw\n");
            draws++;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_game);

    } while (continue_game == 'y' || continue_game == 'Y');

    printf("\nFinal Scores:\n");
    printf("Alice Wins: %d\n", alice_wins);
    printf("Bob Wins: %d\n", bob_wins);
    printf("Draws: %d\n", draws);

    return 0;
}*/




/*
#include <stdio.h>
#include <string.h>

// Define card structure
typedef struct {
    int rank;
    char suit;
} Card;

// Function to determine the strength of a hand
int handStrength(Card hand[5]) {
    int ranks[14] = {0}; // Array to count occurrences of each rank
    int suits[4] = {0}; // Array to count occurrences of each suit
    int flush = 0, threeOfAKind = 0, pair = 0;

    // Count occurrences of ranks and suits
    for (int i = 0; i < 5; i++) {
        ranks[hand[i].rank]++;
        suits[hand[i].suit]++;
    }

    // Check for flush, three of a kind, and pair
    for (int i = 0; i < 4; i++) {
        if (suits[i] == 5) {
            flush = 1;
        }
    }
    for (int i = 2; i <= 14; i++) {
        if (ranks[i] == 3) {
            threeOfAKind = 1;
        } else if (ranks[i] == 2) {
            pair = 1;
        }
    }

    // Determine hand strength based on the found patterns
    if (flush) {
        return 1; // Flush
    } else if (threeOfAKind) {
        return 2; // Three of a kind
    } else if (pair) {
        return 3; // Pair
    } else {
        return 4; // High card
    }
}

// Function to compare two hands and determine the winner
int compareHands(Card hand1[5], Card hand2[5]) {
    int strength1 = handStrength(hand1);
    int strength2 = handStrength(hand2);

    // If strengths are different, return the winner
    if (strength1 != strength2) {
        return strength1 < strength2 ? 1 : 2; // 1 means hand2 wins, 2 means hand1 wins
    }

    // If strengths are the same, compare high cards
    for (int i = 4; i >= 0; i--) {
        if (hand1[i].rank != hand2[i].rank) {
            return hand1[i].rank < hand2[i].rank ? 1 : 2;
        }
    }

    // If all cards are the same, it's a tie
    return 0;
}

// Main function
int main() {
    Card aliceHand[5], bobHand[5];
    int winner;

    // Input cards for Alice and Bob
    printf("Enter cards for Alice (rank suit):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d %c", &aliceHand[i].rank, &aliceHand[i].suit);
    }
    printf("Enter cards for Bob (rank suit):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d %c", &bobHand[i].rank, &bobHand[i].suit);
    }

    // Compare hands and determine the winner
    winner = compareHands(aliceHand, bobHand);

    // Print the winner
    if (winner == 0) {
        printf("It's a tie!\n");
    } else {
        printf("Player %d wins!\n", winner);
    }

    return 0;
}*/
