# Requirement-to-File Map

Status describes the current scaffold, not the eventual project goal. Planned features are not implemented merely because a future file is named below.

| Requirement | Current status | Current or planned location | Useful test |
|---|---|---|---|
| REQ-01: Official specialty and ward lookup tables | Implemented | `src/hospital.c`, `src/hospital.h` | Tests 1-2 |
| REQ-02: 4 x 20 bed occupancy matrix | Initialization and display implemented; allocation is planned | `src/main.c`, `src/hospital.c`, `src/hospital.h` | Tests 3, 8 |
| REQ-03: Patient registration and parallel arrays | Arrays initialize; registration is planned | `src/patient.c`, `src/patient.h` | Test 4 |
| REQ-04: Waiting-time calculation | Planned | `src/billing.c`, `src/billing.h` (planned) | Add queue-before-increment test |
| REQ-05: Emergency surcharge | Planned | `src/billing.c`, `src/billing.h` (planned) | Add urgency levels 1-3 tests |
| REQ-06: Ward cost | Planned | `src/billing.c`, `src/billing.h` (planned) | Add admitted/outpatient tests |
| REQ-07: Gross bill | Planned | `src/billing.c`, `src/billing.h` (planned) | Add sample arithmetic test |
| REQ-08: Age subsidy | Planned | `src/billing.c`, `src/billing.h` (planned) | Add ages 4, 5, 65, 66 tests |
| REQ-09: Final payable | Planned | `src/billing.c`, `src/billing.h` (planned) | Add sample arithmetic test |
| REQ-10: Priority sorting | Planned | `src/sorting.c`, `src/sorting.h` (planned) | Add urgency and registration-order tests |
| REQ-11: Performance reports | Planned | `src/reports.c`, `src/reports.h` (planned) | Add occupancy and highest-bill tests |
| REQ-12: Bed file persistence | Planned | `src/file_handler.c`, `src/file_handler.h` (planned) | Test 15 |
| REQ-13: Append patient billing records | Planned | `src/file_handler.c`, `src/file_handler.h` (planned) | Test 16 |
| REQ-14: Input validation | Partial: menu input only | `src/main.c`; registration validation planned for `src/patient.c` | Tests 5, 10-12 |

## Architecture choice

The existing project is kept as a small modular C program: `main.c` owns the menu, hospital data and bed helpers stay together, and patient data stays in its own module. Billing, sorting, reporting, and file handling are proposed module boundaries for later phases, not files required in this starter stage. Patient records use parallel arrays, as required by the assignment's beginner-level design.