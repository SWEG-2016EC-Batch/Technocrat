#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int MAX_MEDICATIONS = 100;
const int LOW_STOCK_THRESHOLD = 10;  // Threshold for low stock

int main() {
    char names[MAX_MEDICATIONS][50];
    char batchNumbers[MAX_MEDICATIONS][20];
    int quantities[MAX_MEDICATIONS];
    char expiryDates[MAX_MEDICATIONS][15];
    int medicationCount = 0;

    // Sale records
    char saleMedicationNames[MAX_MEDICATIONS][50];
    int saleQuantities[MAX_MEDICATIONS];
    float saleRevenues[MAX_MEDICATIONS];
    char saleDates[MAX_MEDICATIONS][15];
    int saleCount = 0;

    // User authentication
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Example hardcoded credentials
    if (username != "sectionD" || password != "technocrat") {
        cout << "❌ Authentication failed. Exiting program.\n";
        return 0;
    }

    int choice;

    do {
        // Display menu
        cout << "\n🌟💊 Technocrat Pharmacy Stock Management System 💊🌟\n";
        cout << "=======================================\n";
        cout << "1️⃣  ➡️  Add Medication\n";
        cout << "2️⃣  ➡️  Sell Medication\n";
        cout << "3️⃣  ➡️  🔔 Low Stock Alert\n";
        cout << "4️⃣  ➡️  📊 Generate Report\n";
        cout << "5️⃣  ➡️  🔍 Search Medication by Name\n";
        cout << "6️⃣  ➡️  Update Medication Quantity\n";
        cout << "7️⃣  ➡️  ❌ Exit\n";
        cout << "=======================================\n";
        cout << "👉 Enter your choice: ";
        cin >> choice;



























































































































































































































































































