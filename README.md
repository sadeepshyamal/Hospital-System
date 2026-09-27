# Smart Hospital & Resource Allocation System

An educational C scaffold for the CSC 1012 individual assignment. The project is intentionally being developed in stages; this repository is not a completed or ready-to-submit system.

## Objective

Build a menu-driven hospital application using fundamental C concepts: lookup arrays, a bed matrix, patient parallel arrays, functions, input validation, file handling, searching, sorting, and calculations. Current implementation status is recorded in [the requirement map](docs/requirements-map.md).

## Current features

- Official specialty and ward lookup tables
- Bed occupancy matrix initialization and display, limited to each ward's actual capacity
- Specialty/ward lookup functions
- Patient parallel-array storage initialization
- Basic menu loop with invalid numeric input handling

Patient registration, allocation, billing, search, sorting, reports, and persistence are not implemented yet. The menu entries for those features are placeholders.

## Project structure

- `src/main.c`: menu and top-level program flow
- `src/hospital.h`, `src/hospital.c`: hospital constants, lookup arrays, and bed display/lookup helpers
- `src/patient.h`, `src/patient.c`: patient-array scaffold and initialization example
- `docs/requirements-map.md`: requirement status and planned owning files
- `docs/report-outline.md`: report outline limited to current implementation
- `tests/test-cases.md`: starter checks; results remain for the student to run and record
- `main.c`, `1.c`: earlier standalone prototypes; not included in the modular build

## Technologies

- C11 and standard C library only
- GCC or another compatible C compiler
- Code::Blocks project configuration is set to build the modular sources under `src/`

## Build and run

From the repository root with GCC:

```text
gcc -std=c11 -Wall -Wextra -pedantic src/main.c src/hospital.c src/patient.c -o smart_hospital
./smart_hospital
```

On Windows with MinGW GCC:

```text
gcc -std=c11 -Wall -Wextra -pedantic src/main.c src/hospital.c src/patient.c -o smart_hospital.exe
smart_hospital.exe
```

The source files are listed explicitly so the build does not accidentally compile one of the old root-level prototypes.

## Data structures and algorithms

- Parallel arrays are chosen instead of structs to match the assignment's introductory-C focus.
- `bedOccupancy[NUM_WARDS][MAX_BEDS]` represents availability (`0`) or occupation (`1`). Display uses `wardCapacity` so nonexistent beds are not shown.
- Specialty and ward details are stored in constant lookup arrays in `src/hospital.c`.
- No patient sorting, searching, or billing algorithms have been implemented yet.

## File handling

Bed persistence and permanent patient billing records are planned but not implemented. The future design calls for loading/saving `beds_status.txt` and appending records to `patient_records.txt`.

## Testing

See [tests/test-cases.md](tests/test-cases.md). Tests are not claimed as passed until the student runs them and records the actual result.

## Assumptions to confirm

- `MAX_PATIENTS` is currently 100.
- The bed matrix initializer marks all 20 slots in each row available; display and later allocation must still respect the ward's actual capacity.
- The root-level C files are historical prototypes; the modular `src/` sources are the intended application.
- Remaining requirements will be implemented and reviewed incrementally by the student.
- Future features such as file handling and billing will be added in later phases.
