/*
 * Course: COEN 2220 - Programming 2
 * Name: Eduardo Vega
 * Lab: Lab 6 - Class Templates
 * Description: Guided example - a generic workshop metric log
 * Due date: 9/24/2026
 */

#include <iostream>
using namespace std;

template <typename T>
class WorkshopLog
{
private:
    static const int CAPACITY = 4;
    T values[CAPACITY];       // Store values of the selected type.
    int count;                // Track how many positions contain data.

public:
    WorkshopLog()
    {
        count = 0;            // A new log starts with no stored values.
    }

    int size() const
    {
        return count;         // Report how many values are currently stored.
    }

    bool isEmpty() const
    {
        return count == 0;    // A log is empty only when it stores no values.
    }

    // --- STEP 2: Add a generic value ---
    // TODO (Step 2): Paste the add member function here.

    // --- STEP 3: Store a second metric type ---
    // TODO (Step 3): Paste the get member function here.
};

int main()
{
    cout << boolalpha;        // Print bool values as true or false.

    WorkshopLog<int> attendanceCounts;

    cout << "Attendance records: " << attendanceCounts.size() << endl;
    cout << "Log is empty: " << attendanceCounts.isEmpty() << endl;

    // --- STEP 2: Add attendance counts ---
    // TODO (Step 2): Paste the attendance test code here.

    // --- STEP 3: Create a log for ratings ---
    // TODO (Step 3): Paste the rating test code here.

    return 0;
}