# Random Placement & Subarray Optimizer

This project implements a complex randomization and analysis algorithm in C. It combines **Alternating Generation**, **Stochastic Placement**, and **Sliding Window Analysis**.

## ⚙️ Algorithm Logic

The process is divided into three phases:

### Phase 1: Alternating Generation
Generates a stream of $N$ integers within the range $[-10, 10]$ enforcing a strict pattern:
* Negative $\to$ Positive $\to$ Negative $\to$ ...

### Phase 2: Stochastic Placement (Shuffling)
Unlike standard arrays where elements are placed linearly ($0, 1, 2...$), this algorithm places each generated number into a **Random Empty Index**.
* Effectively shuffles the data during insertion.

### Phase 3: Analysis (Max Subarray)
Finds the sequence of $N/2$ consecutive elements that has the highest arithmetic mean (or sum).
* **Formula:** Maximize $\sum_{j=i}^{i+(N/2)} Array[j]$

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o optimizer
    ```
2.  Run the executable:
    ```bash
    ./optimizer
    ```
3.  Enter the array size ($N$).

---
*This repository demonstrates randomized data structures and optimization algorithms in C.*
