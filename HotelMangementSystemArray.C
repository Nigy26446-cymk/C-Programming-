#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for seeding random numbers

/*A C program that potrays hotel management system using arrays
Name : Gabriel Kariuki
Reg No : CT101/G/26446/25
Unit : Introduction to programming and problem solving
Description : 
*/

int main() {
    // ===== PART 1: 1D ARRAY – WEEKLY REVENUE TRACKER =====
    float revenue[7], totalRevenue = 0, averageRevenue;
    int i;

    printf("=== Weekly Revenue Tracker ===\n");
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;
    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", averageRevenue);

    // ===== PART 2: 2D ARRAY – ROOM OCCUPANCY (ONE BRANCH) =====
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    srand(time(0)); // Seed random number generator

    printf("=== Room Occupancy for One Branch ===\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (room = 0; room < 10; room++) {
            // Random occupancy: 0 or 1
            occupancy[floor][room] = rand() % 2;
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    // ===== PART 3: 3D ARRAY – MULTIPLE BRANCHES =====
    int chain[3][5][10];
    int branch, totalOccupied = 0;

    printf("\n=== Multiple Branches Occupancy ===\n");
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                // Randomly assign occupancy (0 or 1)
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);
    printf("\nProgram Completed Successfully.\n");

    return 0;
}