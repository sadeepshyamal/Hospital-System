# Test Cases for the Hospital System Scaffold

Run these checks against the current starter only. For each executed test, replace `pending` with the observed output and pass/fail result. Tests for features not implemented yet are marked as planned.

## Test 1: Specialty lookup
- Input: specialty ID = 3
- Expected: Cardiology is selected
- Actual: to be verified by student
- Pass/Fail: pending

## Test 2: Ward lookup
- Input: ward ID = 4
- Expected: ICU is selected
- Actual: to be verified by student
- Pass/Fail: pending

## Test 3: Bed matrix initialization
- Input: start program
- Expected: all beds are available (0)
- Actual: to be verified by student
- Pass/Fail: pending

## Test 4: Patient array structure
- Input: patient index 0
- Expected: all patient arrays align with the same patient
- Actual: to be verified by student
- Pass/Fail: pending

## Test 5: Invalid menu input
- Input: menu choice = 99
- Expected: invalid choice message
- Actual: to be verified by student
- Pass/Fail: pending

## Test 6: Empty patient list
- Input: select View Registered Patients before registration
- Expected: this menu option is currently a placeholder; the required empty-state message is planned
- Actual: to be verified by student
- Pass/Fail: pending

## Test 7: Official lookup values
- Input: inspect the constant lookup arrays in `src/hospital.c`; also select Register New Patient to display specialties
- Expected: specialty and ward values match the assignment; the current menu displays specialties only
- Actual: to be verified by student
- Pass/Fail: pending

## Test 8: Bed display uses ward capacities
- Input: select Display Bed Occupancy
- Expected: 20 General, 10 Paediatric, 10 Surgical, and 5 ICU beds are displayed
- Actual: to be verified by student
- Pass/Fail: pending

## Test 9: Invalid numeric menu input
- Input: enter a non-numeric value at the main menu
- Expected: an invalid-input message appears and the program returns to the menu
- Actual: to be verified by student
- Pass/Fail: pending

## Planned assignment tests

The following tests need the corresponding feature implemented before they can be executed: outpatient/admitted registration; all billing boundaries; no beds available; specialty cap reached; invalid specialty/ward; urgency sorting and stable registration order; file persistence and append behavior; highest-paying report; and existing/nonexistent patient search. See [requirements-map.md](../docs/requirements-map.md) for the current status and module plan.
