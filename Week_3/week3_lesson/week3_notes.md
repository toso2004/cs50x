# Week 3: Algorithms

- Algorithms: step by step instructions for solving some specific type of problem

- Linear search:
  - "For each door from the left to right
    - if 50 is behind door
      return true
      return false

- Binary search:
  - Example:
    "If no doors left
    return false
    if 50 is behind doors[middle]
    return true
    else if 50 < doors[middle]
    search doors[0] through doors[middle - 1]
    else if 50 > doors[middle]
    search doors[middle + 1] through doors[n - 1]

- Sorting:
  1. Selection sort:
  - Runtime:
    - Big Oh: )(n^2) ---> Worst Case
    - Big Omega: Omega(n^2) ---> Best Case
    - Big Theta: O(n^2) ---> Big Oh and Big Omega
  - Example:
    for i from 0 to n - 1
    Find the smallest number between numbers[i] and numbers[n - 1]
    Swap smallest number with numbers[i]
  2. Bubble sort:
  - Big Oh: O(n^2) ---> Worst Case
  - Big Omega: Omega(n) ---> Best Case(one pass through n to see if its already sorted)
  - Big Theta:
  - Example:
    Repeat n times
    For i from 0 to n - 2 `(Do not use n - 1 because that is the last element and if you point at the last element with your left hand your right hand will point to an empty space/non existing value)`
    if numbers[i] and numbers[i + 1] out of order
    swap them
    if no swaps
    Quit
  3. Merge Sort:
  - Big Oh: O(n \* log(n)) --->
  - Big Omega: Omega(n \* log(n)) --->
  - Big Theta:
  - Example:
    if only one number
    Quit
    Else
    Sort left half of numbers
    Sort right half of numbers
    Merge sorted halves

- Recursion: An algorithm that calls upon itself with the process of the task.
  - Base case: The logic "bottoms out" and no more recursion or work can be done and the recursion and then "unfold" or cease

- If you want to improve the running time you have to use resources
  -eg increase space, increase amount of time to figuring out the solution
- When extending the functionality of a codebase it is best to first understand it in its present state
