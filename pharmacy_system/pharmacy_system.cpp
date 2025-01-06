#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int MAX_MEDICATIONS = 100;
const int LOW_STOCK_THRESHOLD = 10;

int main() {
    char names[MAX_MEDICATIONS][50];
    char batchNumbers[MAX_MEDICATIONS][20];
    int quantities[MAX_MEDICATIONS];
    char expiryDates[MAX_MEDICATIONS][15];
    int medicationCount = 0;

    char saleMedicationNames[MAX_MEDICATIONS][50];
    int saleQuantities[MAX_MEDICATIONS];
    float saleRevenues[MAX_MEDICATIONS];
    char saleDates[MAX_MEDICATIONS][15];
    int saleCount = 0;

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username != "sectionD" || password != "technocrat") {
        cout << "❌ Authentication failed. Exiting program.\n";
        return 0;
    }

    int choice;

    do {
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

        while (true) {
            string input;
            cin >> input;

            if (isdigit(input[0]) && input.length() == 1) {
                choice = input[0] - '0';
                if (choice >= 1 && choice <= 7) {
                    break;
                }
            }
            cout << "⚠️ Invalid input. Please enter a number between 1 and 7: ";
        }
        if (choice == 1) {
           if (medicationCount >= MAX_MEDICATIONS) {
               cout << "❌ Inventory full! Cannot add more medications.\n";
               continue;
           }
           cout << "✍️ Enter medication name: ";
           cin.ignore();
           cin.getline(names[medicationCount], 50);
           cout << "✍️ Enter batch number (alphanumeric): ";
           while (true) {
               cin.getline(batchNumbers[medicationCount], 20);
               bool isValid = true;
               for (int i = 0; batchNumbers[medicationCount][i] != '\0'; i++) {
                   if (!isalnum(batchNumbers[medicationCount][i])) {
                       isValid = false;
                       break;
                   }
               }
               if (isValid) {
                   break;
               }
               cout << "⚠️ Invalid input. Please enter an alphanumeric batch number: ";
           }

           cout << "✍️ Enter quantity: ";
           while (true) {
               string input;
               cin >> input;
               bool isValid = true;
               int quantity = 0;
               for (char c : input) {

           if (c < '0' || c > '9') {
                       isValid = false;
                       break;
                   }
                   quantity = quantity * 10 + (c - '0');
               }

               if (isValid && quantity > 0) {
                   quantities[medicationCount] = quantity;
                   break;
               }

               cout << "⚠️ Invalid input. Please enter a positive integer quantity: ";
           }

           cout << "✍️ Enter expiry date (YYYY-MM-DD): ";
           cin.ignore();
           cin.getline(expiryDates[medicationCount], 15);
           int year = (expiryDates[medicationCount][0] - '0') * 1000 +
                      (expiryDates[medicationCount][1] - '0') * 100 +
                      (expiryDates[medicationCount][2] - '0') * 10 +
                      (expiryDates[medicationCount][3] - '0');
           if (year <= 2027) {
               cout << "⚠️ It will expire soon, not accepted.\n";
               continue;
           }

           medicationCount++;
           cout << "✅ Medication added successfully!\n";


       }
else if (choice == 2) {
           char batchNumber[20];
           int quantity;
           float pricePerUnit;


           cout << "🔍 Enter batch number of medication to sell: ";
           cin.ignore();
           cin.getline(batchNumber, 20);


           cout << "🛒 Enter quantity to sell: ";
           while (true) {
               string input;
               cin >> input;


               bool isValid = true;
               int sellQuantity = 0;
               for (char c : input) {
                   if (c < '0' || c > '9') {
                       isValid = false;
                       break;
                   }
                   sellQuantity = sellQuantity * 10 + (c - '0');
               }


               if (isValid && sellQuantity > 0) {
                   quantity = sellQuantity;
                   break;
               }


               cout << "⚠️ Invalid input. Please enter a positive integer quantity: ";
           }


           cout << "💲 Enter price per unit: ";
           cin >> pricePerUnit;


           while (pricePerUnit <= 0) {
               cout << "⚠️ Invalid input. Please enter a positive price: ";
               cin >> pricePerUnit;
           }


           bool found = false;
           for (int i = 0; i < medicationCount; i++) {
               if (strcmp(batchNumbers[i], batchNumber) == 0) {
                   found = true;
                   if (quantities[i] >= quantity) {
                       quantities[i] -= quantity;


                       strcpy(saleMedicationNames[saleCount], names[i]);
                       saleQuantities[saleCount] = quantity;
                       saleRevenues[saleCount] = quantity * pricePerUnit;


                       cout << "✍️ Enter today's date (YYYY-MM-DD): ";
                       cin >> saleDates[saleCount];


                       saleCount++;
                       cout << "✅ Sale recorded successfully!\n";
                   } else {
                       cout << "⚠️ Error: Not enough stock available!\n";
                   }
                   break;
               }
           }


           if (!found) {
               cout << "⚠️ Error: Medication with batch number " << batchNumber << " not found.\n";
           }


       } else if (choice == 3) {
           cout << "\n🔔 Low Stock Medications (Quantity < " << LOW_STOCK_THRESHOLD << "):\n";
           cout << "--------------------------------------\n";
           cout << setw(20) << "Name" << setw(20) << "Batch"
                << setw(10) << "Quantity" << setw(15) << "Expiry Date\n";
           cout << "---------------------------------------------------------------\n";


           bool found = false;
           for (int i = 0; i < medicationCount; i++) {
               if (quantities[i] < LOW_STOCK_THRESHOLD) {
                   cout << setw(20) << names[i]
                        << setw(20) << batchNumbers[i]
                        << setw(10) << quantities[i]
                        << setw(15) << expiryDates[i] << '\n';
                   cout << "⚠️ There is a shortage of medicine " << names[i] << "!\n";
                   found = true;
               }
           }
           if (!found) {
               cout << "✅ No low-stock medications.\n";
           }


       } else if (choice == 4) {
           if (medicationCount == 0) {
               cout << "📋 No medications to display.\n";
               continue;
           }


           cout << "\n📊 Pharmacy Stock Report 📊\n";
           cout << "--------------------------------------\n";
           cout << setw(20) << "Name" << setw(20) << "Batch No" << setw(10)
                << "Quantity" << setw(15) << "Expiry Date\n";
           cout << "---------------------------------------------------------------\n";


           for (int i = 0; i < medicationCount; i++) {
               cout << setw(20) << names[i] << setw(20) << batchNumbers[i]
                    << setw(10) << quantities[i] << setw(15) << expiryDates[i] << '\n';
           }


           if (saleCount > 0) {
               cout << "\n📈 Daily Sales Summary 📈\n";
               cout << "--------------------------------------\n";
               int totalSalesVolume = 0;
               float totalRevenue = 0.0;


               for (int i = 0; i < saleCount; i++) {
                   totalSalesVolume += saleQuantities[i];
                   totalRevenue += saleRevenues[i];
               }


               cout << "Total Sales Volume: " << totalSalesVolume << "\n";
               cout << "Total Revenue: $" << totalRevenue << "\n";


               cout << "\n🏆 Top Selling Medications 🏆\n";
               cout << "--------------------------------------\n";
               cout << setw(20) << "Medication Name" << setw(20) << "Quantity Sold\n";
               cout << "---------------------------------------------------------------\n";
              
               int quantitySold[MAX_MEDICATIONS] = {0};
               for (int i = 0; i < saleCount; i++) {
                   for (int j = 0; j < medicationCount; j++) {
                       if (strcmp(saleMedicationNames[i], names[j]) == 0) {
                           quantitySold[j] += saleQuantities[i];
                       }
                   }
               }


               for (int i = 0; i < medicationCount; i++) {
                   if (quantitySold[i] > 0) {
                       cout << setw(20) << names[i] << setw(10) << quantitySold[i] << "\n";
                   }
               }
           } else {
               cout << "✅ No sales recorded for today.\n";
           }


       } else if (choice == 5) {
           char searchName[50];
           cout << "🔍 Enter the medication name to search: ";
           cin.ignore();
           cin.getline(searchName, 50);


           bool found = false;
           cout << "\n📋 Search Results for '" << searchName << "':\n";
           cout << "--------------------------------------\n";
           cout << setw(20) << "Name" << setw(20) << "Batch"
                << setw(20) << "Quantity" << setw(20) << "Expiry Date\n";
           cout << "---------------------------------------------------------------\n";


           for (int i = 0; i < medicationCount; i++) {
               if (strcmp(names[i], searchName) == 0) {
                   cout << setw(20) << names[i]
                        << setw(20) << batchNumbers[i]
                        << setw(20) << quantities[i]
                        << setw(20) << expiryDates[i] << '\n';
                   found = true;
               }
           }
          
           if (!found) {
               cout << "⚠️ Medication not found.\n";
           }
         }

















































