#include <stdio.h>
#include "hospital.h"

const int specialtyId[NUM_SPECIALTIES] = {1, 2, 3, 4};
const char specialtyName[NUM_SPECIALTIES][32] = {
    "General Practice (OPD)",
    "Paediatrics",
    "Cardiology",
    "Neurology"
};
const float specialtyFee[NUM_SPECIALTIES] = {
    1500.00f,
    2500.00f,
    4500.00f,
    5000.00f
};
const int specialtyTime[NUM_SPECIALTIES] = {15, 20, 30, 30};
const int specialtyCap[NUM_SPECIALTIES] = {30, 20, 12, 10};

const int wardId[NUM_WARDS] = {1, 2, 3, 4};
const char wardName[NUM_WARDS][32] = {
    "General Ward",
    "Paediatric Ward",
    "Surgical Ward",
    "ICU"
};
const float wardRate[NUM_WARDS] = {
    3000.00f,
    6000.00f,
    12000.00f,
    25000.00f
};
const int wardCapacity[NUM_WARDS] = {20, 10, 10, 5};

void initializeBedMatrix(int bedOccupancy[NUM_WARDS][MAX_BEDS])
{
    int wardIndex;
    int bedIndex;

    for (wardIndex = 0; wardIndex < NUM_WARDS; wardIndex++)
    {
        for (bedIndex = 0; bedIndex < MAX_BEDS; bedIndex++)
        {
            bedOccupancy[wardIndex][bedIndex] = 0;
        }
    }
}

void displaySpecialties(void)
{
    int i;

    printf("\n============================================\n");
    printf("          DOCTOR SPECIALTIES\n");
    printf("============================================\n");

    for (i = 0; i < NUM_SPECIALTIES; i++)
    {
        printf("ID: %d\n", specialtyId[i]);
        printf("Specialty: %s\n", specialtyName[i]);
        printf("Base Fee: LKR %.2f\n", specialtyFee[i]);
        printf("Consultation Time: %d minutes\n", specialtyTime[i]);
        printf("Daily Patient Cap: %d\n\n", specialtyCap[i]);
    }
}

void displayWards(void)
{
    int i;

    printf("\n============================================\n");
    printf("             HOSPITAL WARDS\n");
    printf("============================================\n");

    for (i = 0; i < NUM_WARDS; i++)
    {
        printf("Ward ID: %d\n", wardId[i]);
        printf("Ward Name: %s\n", wardName[i]);
        printf("Daily Rate: LKR %.2f\n", wardRate[i]);
        printf("Capacity: %d\n\n", wardCapacity[i]);
    }
}

int getWardCapacity(int wardIdValue)
{
    int i;

    for (i = 0; i < NUM_WARDS; i++)
    {
        if (wardId[i] == wardIdValue)
        {
            return wardCapacity[i];
        }
    }

    return 0;
}

int findSpecialtyIndex(int specialtyIdValue)
{
    int i;

    for (i = 0; i < NUM_SPECIALTIES; i++)
    {
        if (specialtyId[i] == specialtyIdValue)
        {
            return i;
        }
    }

    return -1;
}

int findWardIndex(int wardIdValue)
{
    int i;

    for (i = 0; i < NUM_WARDS; i++)
    {
        if (wardId[i] == wardIdValue)
        {
            return i;
        }
    }

    return -1;
}

void displayBedStatus(const int bedOccupancy[NUM_WARDS][MAX_BEDS])
{
    int wardIndex;
    int bedIndex;
    int currentCapacity;

    printf("\n============================================\n");
    printf("             BED OCCUPANCY\n");
    printf("============================================\n");

    for (wardIndex = 0; wardIndex < NUM_WARDS; wardIndex++)
    {
        currentCapacity = wardCapacity[wardIndex];
        printf("\n%s\n", wardName[wardIndex]);

        for (bedIndex = 0; bedIndex < currentCapacity; bedIndex++)
        {
            if (bedOccupancy[wardIndex][bedIndex] == 0)
            {
                printf("Bed %02d : Available\n", bedIndex + 1);
            }
            else
            {
                printf("Bed %02d : Occupied\n", bedIndex + 1);
            }
        }
    }
}
