#include <stdio.h>

int main() {
    int candidate1Votes = 0, candidate2Votes = 0, totalVotes = 0;
    char candidate1[] = "Alice";
    char candidate2[] = "Bob";
    int vote;

    while (1) {
        printf("Vote for your favorite candidate (1 for %s, 2 for %s, 0 to stop): ", candidate1, candidate2);
        scanf("%d", &vote);
        
        if (vote == 1) {
            candidate1Votes++;
        } else if (vote == 2) {
            candidate2Votes++;
        } else if (vote == 0) {
            break;
        } else {
            printf("Invalid vote. Please try again.\n");
        }
        
        totalVotes++;
    }
    
    // Output results
    printf("\n--- Voting Results ---\n");
    printf("%s: %d votes\n", candidate1, candidate1Votes);
    printf("%s: %d votes\n", candidate2, candidate2Votes);
    printf("Total votes: %d\n", totalVotes);
    
    return 0;
}
