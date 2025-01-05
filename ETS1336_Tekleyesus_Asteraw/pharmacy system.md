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
