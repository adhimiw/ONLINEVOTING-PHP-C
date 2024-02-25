#include <stdio.h>
#include <stdlib.h>

// Include function prototypes from voter_insert.c and voting.c
void voter_insert();
void admin_view_voter_details();
void voting_process();
void save_voting_data_to_csv();

int main() {
    int choice;

    // Menu loop
    while (1) {
        printf("\n\n===== Online Voting System =====\n");
        printf("1. Voter Insertion\n");
        printf("2. Admin View Voter Details\n");
        printf("3. Vote\n");
        printf("4. Save Voting Data to CSV\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                voter_insert();
                break;
            case 2:
                admin_view_voter_details();
                break;
            case 3:
                voting_process();
                break;
            case 4:
                save_voting_data_to_csv();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
