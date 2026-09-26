#include <stdio.h>
#include <string.h>
#include "patient.h"

static int patientCount = 0;

static char patientId[MAX_PATIENTS][20];
static char patientName[MAX_PATIENTS][MAX_PATIENT_NAME];
static int patientAge[MAX_PATIENTS];
static int urgencyLevel[MAX_PATIENTS];
static int specialtyIdPatient[MAX_PATIENTS];
static int isAdmitted[MAX_PATIENTS];
static int wardIdPatient[MAX_PATIENTS];
static int bedNumber[MAX_PATIENTS];
static int daysAdmitted[MAX_PATIENTS];
static int registrationOrder[MAX_PATIENTS];

void initializePatients(void)
{
    int i;

    patientCount = 0;

    for (i = 0; i < MAX_PATIENTS; i++)
    {
        patientId[i][0] = '\0';
        patientName[i][0] = '\0';
        patientAge[i] = 0;
        urgencyLevel[i] = 0;
        specialtyIdPatient[i] = 0;
        isAdmitted[i] = 0;
        wardIdPatient[i] = 0;
        bedNumber[i] = 0;
        daysAdmitted[i] = 0;
        registrationOrder[i] = 0;
    }
}

void showPatientRegistrationExample(void)
{
    printf("\n============================================\n");
    printf("       PATIENT REGISTRATION DATA LAYOUT\n");
    printf("============================================\n");
    printf("This is the educational patient-array structure.\n");
    printf("Each patient uses the same index across all arrays.\n\n");

    printf("Example layout:\n");
    printf("patientId[0]      = PAT-1001\n");
    printf("patientName[0]    = Kamal Perera\n");
    printf("patientAge[0]     = 70\n");
    printf("urgencyLevel[0]   = 3\n");
    printf("specialtyId[0]    = 3\n");
    printf("isAdmitted[0]     = 1\n");
    printf("wardIdPatient[0]  = 4\n");
    printf("bedNumber[0]      = 1\n");
    printf("daysAdmitted[0]   = 2\n");
    printf("registrationOrder[0] = 1\n");

    printf("\nThis is the correct assignment style for parallel arrays.\n");
}
