# Towers of Hanoi Logic and Overview

The **Towers of Hanoi** is a classic mathematical puzzle used to demonstrate the power of recursion. The objective is to move $n$ disks from a **Source** peg to a **Target** peg using an **Auxiliary** peg.


## The Rules
1. Only one disk can be moved at a time.
2. A larger disk can never be placed on top of a smaller disk.
3. Only the uppermost disk from any stack can be moved.

---
## The Recursive Strategy

![Iterative_algorithm_solving_a_6_disks_Tower_of_Hanoi](https://github.com/user-attachments/assets/a6443679-9b58-4f0b-b5aa-24f3f3b01c7a)

---

To solve for $n$ disks, the algorithm follows this logic:

1. **Base Case:** If $n = 1$, move the disk directly from **Source** to **Target**.
2. **Recursive Step:**
   - Move $n-1$ disks from **Source** to **Auxiliary** (using Target as temporary storage).
   - Move the largest disk ($n^{th}$ disk) directly from **Source** to **Target**.
   - Move the $n-1$ disks from **Auxiliary** to **Target** (using Source as temporary storage).


---

## Complexity Analysis

| Metric | Complexity | Explanation |
| :--- | :--- | :--- |
| **Time** | $O(2^n)$ | The number of moves required is $2^n - 1$. The workload doubles with each added disk. |
| **Space** | $O(n)$ | Determined by the maximum depth of the recursion stack. |

## Practical Application
Because of its exponential time complexity, the Towers of Hanoi is impractical and rarely used for real-world data processing. Instead, it serves as a fundamental teaching tool for:
* Recursive thinking.
* Divide-and-conquer algorithms.
* Understanding stack memory.

Enjoy the 3D Animation [here](https://towersofhanoi.info/Animate.aspx)!
