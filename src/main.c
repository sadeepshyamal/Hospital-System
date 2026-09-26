#include <stdio.h>
#include "hospital.h"
#include "patient.h"

static void displayMainMenu(void)
{
    printf("========================================\n");
    printf("         SMART HOSPITAL SYSTEM\n");
    printf("========================================\n\n");
    printf("1. Register New Patient\n");
    printf("2. View Registered Patients\n");
    printf("3. Search Patient\n");
    printf("4. Display Bed Occupancy\n");
    printf("5. Display Priority Queue\n");
    printf("6. Generate Performance Report\n");
    printf("7. Save Data\n");
    printf("8. Exit\n\n");
    printf("Enter your choice: ");
}

int main(void)
{
    int bedOccupancy[NUM_WARDS][MAX_BEDS];
    int choice = 0;

    initializeBedMatrix(bedOccupancy);
    initializePatients();

    while (1)
    {
        displayMainMenu();

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* clear invalid input buffer */
            }
            continue;
        }

        if (choice == 1)
        {
            printf("\nRegistration screen placeholder.\n");
            displaySpecialties();
            showPatientRegistrationExample();
        }
        else if (choice == 2)
        {
            printf("\nView Registered Patients placeholder.\n");
        }
        else if (choice == 3)
        {
            printf("\nSearch Patient placeholder.\n");
        }
        else if (choice == 4)
        {
            displayBedStatus(bedOccupancy);
        }
        else if (choice == 5)
        {
            printf("\nPriority queue placeholder.\n");
        }
        else if (choice == 6)
        {
            printf("\nPerformance report placeholder.\n");
        }
        else if (choice == 7)
        {
            printf("\nSave Data placeholder.\n");
        }
        else if (choice == 8)
        {
            printf("\nExiting system. Goodbye.\n");
            break;
        }
        else
        {
            printf("\nInvalid menu choice. Please select 1 to 8.\n");
        }

        printf("\nPress Enter to continue...\n");
        while (getchar() != '\n')
        {
            /* consume characters until newline */
        }
    }

    return 0;
}
