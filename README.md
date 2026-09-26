# Smart Hospital & Resource Allocation System

This project is an educational C scaffold for the CSC 1012 Introduction to Computer Programming assignment. It is intentionally simple, modular, and beginner-friendly.

## Project goal

The program simulates a small hospital management system with:
- doctor specialty lookup tables
- hospital ward lookup tables
- a 2D bed occupancy matrix
- patient parallel arrays
- menu-driven console interaction
- future billing, search, sorting, and report features

## Important note

This is not a complete final submission. It is a staged educational scaffold built to match the assignment requirements progressively.

## Project structure

- src/main.c - menu loop and program flow
- src/hospital.h - shared constants and global hospital definitions
- src/hospital.c - specialty tables, ward data, bed matrix helpers
- src/patient.h - patient parallel-array declarations
- src/patient.c - patient array initialization and registration-related scaffold

## Technologies

- C programming language
- GCC compiler or compatible C compiler
- Standard C libraries only

## Compile (Linux/macOS)

```bash
gcc src/main.c src/hospital.c src/patient.c -o smart_hospital
./smart_hospital
```

## Compile (Windows with GCC)

```bash
gcc src/main.c src/hospital.c src/patient.c -o smart_hospital.exe
smart_hospital.exe
```

## Current scaffold contents

This version includes:
- the official specialty values from the assignment
- the official ward values from the assignment
- a 4 x 20 bed occupancy matrix
- a menu-driven interface
- display functions for specialties, wards, and bed status
- patient parallel arrays for the next stage of development

## What is being implemented next

The project is being built in stages:
1. constants and lookup tables
2. bed occupancy matrix
3. patient parallel arrays
4. patient registration and validation
5. waiting time and billing formulas
6. bed allocation and assignment
7. sorting and searching
8. performance reports
9. file persistence and records

## Assignment-aligned design choice

This project deliberately uses parallel arrays instead of structs because the assignment explicitly encourages them for first-year students.

Each patient uses the same index across all arrays, such as:
- patientId[i]
- patientName[i]
- patientAge[i]
- urgencyLevel[i]
- specialtyIdPatient[i]
- wardIdPatient[i]

This keeps the design easy to explain and easier to debug.

## Assumptions

- MAX_PATIENTS is set to a realistic beginner-friendly limit.
- Beds are initialised as available at the start of the program.
- This is an educational scaffold, not a completed submission.
- Future features such as file handling and billing will be added in later phases.
