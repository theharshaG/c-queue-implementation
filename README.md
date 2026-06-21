# c-queue-implementation

 C Queue Implementation using Array

## Overview

This repository contains a Queue implementation developed in C using arrays. The program demonstrates the fundamental concepts of Queue data structure and follows the **FIFO (First In First Out)** principle.

Users can insert elements, remove elements, display queue contents, check the front element, and verify whether the queue is empty or full.

This project helps in understanding:

* Queue Data Structure
* FIFO Principle
* Array-based implementation
* Menu-driven programming
* Front and Rear pointer handling
* Queue operations and conditions

The program is useful for:

* Beginners learning Data Structures
* College laboratory exercises
* Coding interview preparation
* Logic-building practice
* Understanding queue operations

---

## Features

### 1. Enqueue (Insert)

Adds a new element to the rear of the queue.

Process:

```text
Insert Element
↓
Increase Rear
↓
Store Value
```

Example:

```text
Queue:
10 20 30
```

---

### 2. Dequeue (Delete)

Removes an element from the front of the queue.

Process:

```text
Remove Front Element
↓
Move Front Forward
```

Example:

```text
Before:
10 20 30

After:
20 30
```

---

### 3. Display Queue

Displays all available queue elements.

Example Output:

```text
Queue:
10 20 30 40
```

---

### 4. Peek Operation

Shows the first element without deleting it.

Example:

```text
Front = 10
```

---

### 5. Check Empty Queue

Verifies whether the queue contains elements.

Possible Output:

```text
Queue Empty
```

or

```text
Queue Not Empty
```

---

### 6. Check Full Queue

Verifies whether queue capacity is reached.

Example:

```text
Queue Full
```

---

## Concepts Used

* Queue Data Structure
* Arrays
* Functions
* Global Variables
* Conditional Statements
* Loops
* Menu Driven System

---

## Technologies Used

* C Programming Language
* GCC Compiler
* VS Code
* CodeBlocks
* Turbo C

---

## Project Structure

```text
c-queue-implementation/
│
├── queue.c
└── README.md
```

---

## Queue Operations Flow

```text
ENQUEUE
↓
[10][20][30]

DEQUEUE
↓
[20][30]

PEEK
↓
20
```

---

## How to Compile

Compile:

```bash
gcc queue.c -o queue
```

Run:

```bash
./queue
```

---

## Sample Execution

```text
===== QUEUE =====

1.Enqueue
2.Dequeue
3.Display
4.Peek
5.isEmpty
6.isFull
7.Exit

Enter choice: 1

Enter data:
10

Inserted

Enter choice: 1

Enter data:
20

Inserted

Enter choice: 3

Queue:
10 20

Enter choice: 2

Deleted = 10

Enter choice: 3

Queue:
20
```

---

## Learning Outcomes

After completing this project, you will understand:

* FIFO Queue mechanism
* Front and Rear management
* Queue insertion logic
* Queue deletion logic
* Queue traversal
* Queue boundary conditions
* Array implementation of Queue

---

## Limitations

Current implementation limitations:

* Fixed queue size
* Memory cannot be reused after deletions
* Does not implement Circular Queue

---

## Future Improvements

Possible future additions:

* Circular Queue
* Dynamic Queue
* Queue using Linked List
* Priority Queue
* Double Ended Queue (Deque)
* Queue Visualization
* Search Operation
* Queue Size Function

---

## Author

**Harsha G**

Learning:

* C Programming
* Data Structures
* Embedded Systems
* Embedded C
* Problem Solving
