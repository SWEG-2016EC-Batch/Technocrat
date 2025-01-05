  # PROBLEM ANALYSIS

 #### 1. Introduction

    The Pharmacy Management System aims to streamline the management of medications in a pharmacy, allowing for efficient tracking of inventory, sales, and reporting. The system should provide functionalities to add medications, track stock levels, manage sales transactions, generate reports, and ensure user authentication for security.
    
    
 ####    2. Objectives

    Inventory Management: Maintain a record of medications, including details like name, batch number, quantity, and expiry date.
    Sales Tracking: Record sales transactions, including quantities sold and revenue generated.
    Low Stock Alerts: Notify users when medication stock falls below a defined threshold.
    Reporting: Generate comprehensive reports on stock status and sales performance.
    User Authentication: Secure the system with a login mechanism to restrict access to authorized personnel.


 ####    3. Functional Requirements

    Add Medication:
        Input medication details: name, batch number, quantity, expiry date.
        Ensure batch numbers are alphanumeric and quantities are positive integers.
        Validate expiry dates to prevent addition of soon-to-expire medications.

    Sell Medication:
        Input batch number and quantity for sales.
        Validate stock availability before completing a sale.
        Record sales details, including revenue and date of transaction.

    Low Stock Alert:
        Identify and display medications with quantities below a specified threshold.

    Generate Reports:
        Display current inventory status (medication names, batch numbers, quantities).
        Summarize sales (total volume, revenue, top-selling medications).

    Search Medication:
        Allow users to search for medications by name and display relevant details.

    Update Medication Quantity:
        Enable addition of stock for existing medications through batch number identification.
        
        

 ####     Non-Functional Requirements:
    Usability: User-friendly interface with clear prompts and error messages.
    Security: Implement user authentication to prevent unauthorized access.
    Performance: The system should handle up to 100 medications and sales transactions efficiently.
    Scalability: Design should allow for future expansion, such as additional functionalities or increased capacity.


 ####    4. Inputs:

    User Authentication:
        Username
        Password

    Adding Medication:
        Medication name
        Batch number (alphanumeric)
        Quantity (positive integer)
        Expiry date (format: YYYY-MM-DD)

    Selling Medication:
        Batch number
        Quantity to sell (positive integer)
        Price per unit

    Low Stock Alert:
        System checks quantities automatically.

    Generating Reports:
        No specific input required; the user initiates the report generation.

    Searching Medication:
        Medication name for search.

    Updating Medication Quantity:
        Batch number
        Additional quantity (positive integer)

 ####    4. Outputs:

    Success/Error Messages:
        Confirmation of successful operations (e.g., "Medication added successfully!")
        Error messages for invalid inputs (e.g., "Invalid input. Please enter a positive integer quantity.")

    Inventory and Sales Reports:
        Lists of medications with details such as name, batch number, quantity, and expiry date.
        Summary of daily sales, including total sales volume and revenue.

    Low Stock Alerts:
        Notifications for medications with quantities below the predefined threshold.

    Search Results:
        Details of the searched medication, if found.
        
        

 ####    5. How It is intended to Work:

    User Authentication:
        On startup, the system prompts the user for a username and password. If authentication fails, the program exits.

    Main Menu:
        After successful login, the user is presented with a menu of options to manage the pharmacy system. The user selects an option by entering the corresponding number.

    Adding Medications:
        The user can add medication details through a guided prompt that validates input before storing it in the system.

    Selling Medications:
        The user inputs the batch number and quantity for the medication they wish to sell. The system checks stock levels, records the sale, and updates the inventory.

    Low Stock Alerts:
        The system checks for medications that fall below the defined quantity threshold and displays them to the user.

    Generating Reports:
        The user can request a report to view current inventory status and sales summary, which is generated and displayed.

    Searching for Medications:
        The user can search for a medication by name, and the system displays matching entries if found.

    Updating Quantities:
        The user can add stock to existing medications by providing the batch number and the additional quantity to add.

    Exit:
        The user can exit the program gracefully, receiving a thank-you message.



```mermaid
flowchart TD
    A([Start]) --> B[/Enter Username and Password/]
    B --> C{Authentication Successful?}
    C -- No --> D[/Display Authentication Failed Message/]
    D --> E([End])
    C -- Yes --> F[/Display Menu/]
    
    F --> G{User Choice}
    G -- 1 --> H(Add Medication)
    G -- 2 --> I(Sell Medication)
    G -- 3 --> J(Low Stock Alert)
    G -- 4 --> K(Generate Report)
    G -- 5 --> L(Search Medication by Name)
    G -- 6 --> M(Update Medication Quantity)
    G -- 7 --> N(Exit)
    
    H --> O{Check Inventory Full?}
    O -- Yes --> P[/Display Inventory Full Message/]
    O -- No --> Q(Get Medication Details)
    Q --> R(Add Medication to Inventory)
    R --> F
    
    I --> S[/Get Batch Number and Quantity to Sell/]
    S --> T{Check Medication Exists?}
    T -- No --> U[/Display Medication Not Found Message/]
    T -- Yes --> V{Check Sufficient Stock?}
    V -- No --> W[/Display Insufficient Stock Message/]
    V -- Yes --> X(Record Sale and Update Inventory)
    X --> F
    
    J --> Y[/Display Low Stock Medications/]
    Y --> F
    
    K --> Z[/Display Report/]
    Z --> F
    
    L --> AA(Search for Medication)
    AA --> AB[/Display Search Results/]
    AB --> F
    
    M --> AC[/Get Batch Number and Quantity to Add/]
    AC --> AD{Check Medication Exists?}
    AD -- No --> AE[/Display Medication Not Found Message/]
    AD -- Yes --> AF(Update Quantity)
    AF --> F

    N --> AG[/Display Thank You Message/]
    AG --> E([End])
