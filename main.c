#include <stdio.h>

int main()
{
    /* Doctor specialty data */
    int specialtyID[4] = {1, 2, 3, 4};

    char specialtyName[4][30] = {
        "General Practice (OPD)",
        "Paediatrics",
        "Cardiology",
        "Neurology"
    };

    float consultationFee[4] = {
        1500.00,
        2500.00,
        4500.00,
        5000.00
    };

    int consultationTime[4] = {
        15,
        20,
        30,
        30
    };

    int dailyPatientCap[4] = {
        30,
        20,
        12,
        10
    };


    /* Hospital ward data */
    int wardID[4] = {1, 2, 3, 4};

    char wardName[4][30] = {
        "General Ward",
        "Paediatric Ward",
        "Surgical Ward",
        "ICU"
    };

    float wardDailyRate[4] = {
        3000.00,
        6000.00,
        12000.00,
        25000.00
    };

    int bedCapacity[4] = {
        20,
        10,
        10,
        5
    };


    /* Bed occupancy matrix
       0 = Available
       1 = Occupied
    */
    int bedOccupancy[4][20] = {0};


    /* Main menu */
    int choice;

    printf("=============================================\n");
    printf("          SMART HOSPITAL SYSTEM\n");
    printf("=============================================\n\n");

    printf("1. Register Patient\n");
    printf("2. Display Patients\n");
    printf("3. Bed Management\n");
    printf("4. Patient Priority\n");
    printf("5. Reports\n");
    printf("6. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);


    /* Display selected option */
    printf("\nYou selected option %d.\n", choice);


    /* Display specialty information */
    printf("\n=============================================\n");
    printf("          DOCTOR SPECIALTIES\n");
    printf("=============================================\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\nID: %d\n", specialtyID[i]);
        printf("Specialty: %s\n", specialtyName[i]);
        printf("Consultation Fee: LKR %.2f\n", consultationFee[i]);
        printf("Consultation Time: %d minutes\n", consultationTime[i]);
        printf("Daily Patient Cap: %d\n", dailyPatientCap[i]);
    }


    /* Display ward information */
    printf("\n=============================================\n");
    printf("             HOSPITAL WARDS\n");
    printf("=============================================\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\nWard ID: %d\n", wardID[i]);
        printf("Ward Name: %s\n", wardName[i]);
        printf("Daily Bed Rate: LKR %.2f\n", wardDailyRate[i]);
        printf("Bed Capacity: %d\n", bedCapacity[i]);
    }


    /* Display bed availability */
    printf("\n=============================================\n");
    printf("             BED AVAILABILITY\n");
    printf("=============================================\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n%s:\n", wardName[i]);

        for (int j = 0; j < bedCapacity[i]; j++)
        {
            if (bedOccupancy[i][j] == 0)
            {
                printf("Bed %02d : Available\n", j + 1);
            }
            else
            {
                printf("Bed %02d : Occupied\n", j + 1);
            }
        }
    }

    return 0;
}
