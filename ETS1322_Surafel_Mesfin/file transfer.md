# Problem Analysis
1. **Input:**
   - Transfer rate (in bytes per second).
   - Data size (in bytes).
2. **Process:**
   - Calculate the total time required to transmit the data by dividing the data size by the transfer rate.
   - Convert the total time from seconds into days, hours, minutes, and seconds.
3. **Output:**
   - The time required to transmit the file in days, hours, minutes, and seconds.

# Algorithm 
1. **Start the program.**
2. **Define constants:**
   - Set transferRate = 960 (bytes per second).
   - Set dataSize = 419430400 (bytes, equivalent to 400 MB).
3. **Calculate total time required to transmit the data:**
   - Set totalTime = dataSize / transferRate.
4. **Convert total time from seconds into days, hours, minutes, and seconds:**
   - **Calculate number of days:**
     - Set numDays = totalTime / (24 * 3600).
   - **Update totalTime for remaining seconds after calculating days:**
     - Set totalTime = totalTime MOD (24 * 3600).
   - **Calculate number of hours:**
     - Set numHours = totalTime / 3600.
   - **Update totalTime for remaining seconds after calculating hours:**
     - Set totalTime = totalTime MOD 3600.
   - **Calculate number of minutes:**
     - Set numMinutes = totalTime / 60.
   - **Calculate remaining seconds:**
     - Set numSeconds = totalTime MOD 60.
5. **Output the result in a readable format:**
   - Print "The time required to transmit a 400MB file is: numDays days, numHours hours, numMinutes minutes, numSeconds seconds".
6. **End the program.**

# Flowchart
graph TD;
    A[Start] --> B[Set transferRate = 960]
    A --> C[Set dataSize = 419430400]
    B --> D[Calculate totalTime = dataSize / transferRate]
    C --> D
    D --> E[Calculate numDays = totalTime / (24 * 3600)]
    E --> F[Calculate totalTime = totalTime % (24 * 3600)]
    F --> G[Calculate numHours = totalTime / 3600]
    G --> H[Calculate totalTime = totalTime % 3600]
    H --> I[Calculate numMinutes = totalTime / 60]
    I --> J[Calculate numSeconds = totalTime % 60]
    J --> K[Output result]
    K --> L[End]

