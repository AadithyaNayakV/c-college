#include <stdio.h>

int main() {
    // Declare file pointer
    FILE *filePointer;

    // Open a file in write mode (this will create a file if it doesn't exist)
    filePointer = fopen("invitation.txt", "w");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error! Unable to open the file.\n");
        return 1;
    }

    // Invitation message
    char guestName[100] = "John Doe";  // Buffer name for the guest
    char event[100] = "Synergia'24";
    char venue[100] = "Sahyadri College of Engineering and Management";
    char date[50] = "November 15, 2024";
    char time[50] = "10:00 AM";

    // Write the invitation details to the file
    fprintf(filePointer, "You are invited to the event: %s\n", event);
    fprintf(filePointer, "Hosted by: %s\n", venue);
    fprintf(filePointer, "Guest: %s\n", guestName);
    fprintf(filePointer, "Date: %s\n", date);
    fprintf(filePointer, "Time: %s\n", time);

    // Close the file
    fclose(filePointer);

    // Confirm file creation
    printf("Invitation created successfully in 'invitation.txt'!\n");
return 0;
}