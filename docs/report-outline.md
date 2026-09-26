# Report Outline

This outline reflects the current scaffold only. Update it as implementation and testing progress; do not describe planned features as completed.

## 1. High-level architecture
- Menu-driven C console program in `src/main.c`
- Hospital lookup data and bed-matrix helpers in `src/hospital.c` and `src/hospital.h`
- Patient array initialization scaffold in `src/patient.c` and `src/patient.h`

## 2. Implemented functions
- `initializeBedMatrix()`
- `displaySpecialties()`
- `displayWards()`
- `displayBedStatus()`
- `getWardCapacity()`
- `findSpecialtyIndex()`
- `findWardIndex()`
- `initializePatients()`
- `showPatientRegistrationExample()`
- `displayMainMenu()` (private to `src/main.c`)

Registration, billing, allocation, search, sorting, reporting, and file-handling functions remain to be implemented.

## 3. Data structures
- One-dimensional constant arrays store specialty and ward details.
- A two-dimensional `int` array stores bed occupancy.
- Patient data is represented by parallel-array declarations/scaffolding; full patient records are not implemented yet.

## 4. GitHub repository URL
- Add the actual public repository URL here after creating and verifying it. Do not invent a URL.

## 5. Assumptions
- `MAX_PATIENTS` is currently 100; confirm this limit against assignment expectations.
- The bed display excludes slots beyond each ward's stated capacity.
- Current bed and patient state is in memory only and is not persisted.
- This is a staged educational scaffold, not a complete submission.
