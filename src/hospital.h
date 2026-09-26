#ifndef HOSPITAL_H
#define HOSPITAL_H

#define NUM_SPECIALTIES 4
#define NUM_WARDS 4
#define MAX_BEDS 20
#define MAX_PATIENTS 100
#define NORMAL 1
#define URGENT 2
#define CRITICAL 3

extern const int specialtyId[NUM_SPECIALTIES];
extern const char specialtyName[NUM_SPECIALTIES][32];
extern const float specialtyFee[NUM_SPECIALTIES];
extern const int specialtyTime[NUM_SPECIALTIES];
extern const int specialtyCap[NUM_SPECIALTIES];

extern const int wardId[NUM_WARDS];
extern const char wardName[NUM_WARDS][32];
extern const float wardRate[NUM_WARDS];
extern const int wardCapacity[NUM_WARDS];

void initializeBedMatrix(int bedOccupancy[NUM_WARDS][MAX_BEDS]);
void displaySpecialties(void);
void displayWards(void);
void displayBedStatus(const int bedOccupancy[NUM_WARDS][MAX_BEDS]);
int getWardCapacity(int wardIdValue);
int findSpecialtyIndex(int specialtyIdValue);
int findWardIndex(int wardIdValue);

#endif
