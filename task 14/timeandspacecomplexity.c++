// here i will show the time and space complexity of all the data structure and all the algorithms 


/*
1. Arrays
Access (Indexing):

Time: O(1)

Space: O(n) (for storing elements)

Search (Linear Search):

Time: O(n)

Space: O(1) (no additional space)

Insert (At the end or in the middle):

Time:

At the end: O(1) (Amortized)

In the middle: O(n)

Space: O(n)

Delete (From the end or in the middle):

Time:

From the end: O(1)

From the middle: O(n)

Space: O(n)

*/

/*
2. Linked Lists
Singly Linked List:

Access (Indexing):

Time: O(n)

Space: O(1)

Search:

Time: O(n)

Space: O(1)

Insert (At the beginning, middle, or end):

Time: O(1) (at the beginning or middle if you have a reference to the node)

Space: O(1)

Delete (At the beginning, middle, or end):

Time: O(1) (if you have a reference to the node)

Space: O(1)

Doubly Linked List:

Time complexities are similar to singly linked lists, but it requires extra space to store the backward link.

Space: O(n) due to extra pointer storage.

3. Stacks
Push:

Time: O(1)

Space: O(n) (for storing elements)

Pop:

Time: O(1)

Space: O(1)

Peek:

Time: O(1)

Space: O(1)

4. Queues
Enqueue:

Time: O(1)

Space: O(n) (for storing elements)

Dequeue:

Time: O(1)

Space: O(1)

Peek:

Time: O(1)

Space: O(1)

5. Hash Tables (Hash Maps)
Insert:

Time: O(1) (average case), O(n) (worst case, due to collisions)

Space: O(n) (for storing elements)

Search:

Time: O(1) (average case), O(n) (worst case)

Space: O(1)

Delete:

Time: O(1) (average case), O(n) (worst case)

Space: O(1)

6. Binary Search Tree (BST)
Search:

Time: O(log n) (average case), O(n) (worst case, if unbalanced)

Space: O(1) (for the search operation)

Insert:

Time: O(log n) (average case), O(n) (worst case)

Space: O(1)

Delete:

Time: O(log n) (average case), O(n) (worst case)

Space: O(1)
*/

/*
11. Sorting Algorithms
Bubble Sort
Time:

Best case: O(n) (if already sorted)

Worst/Average case: O(n^2)

Space: O(1) (in-place)

Selection Sort
Time:

Best/Worst/Average case: O(n^2)

Space: O(1) (in-place)

Insertion Sort
Time:

Best case: O(n) (if already sorted)

Worst/Average case: O(n^2)

Space: O(1) (in-place)

Merge Sort
Time:

Worst/Average/Best case: O(n log n)

Space: O(n) (auxiliary space)

Quick Sort
Time:

Worst case: O(n^2)

Average/Best case: O(n log n)

Space: O(log n) (due to recursion stack)

Heap Sort
Time: O(n log n) (in all cases)

Space: O(1) (in-place)

12. Dynamic Programming (DP) Algorithms
Time Complexity: Generally O(n^2) or O(n^3), depending on the problem.

Space Complexity: Can be O(n) (for 1D DP array) or O(n^2) (for 2D DP array).

13. Breadth-First Search (BFS)
Time: O(V + E) (V is the number of vertices, E is the number of edges)

Space: O(V) (for storing the queue)
*/

/*
15. Binary Search (for sorted arrays)
Time: O(log n)

Space: O(1)

16. Backtracking Algorithms
Time Complexity: Varies based on problem; could be exponential in the worst case.

Space Complexity: Depends on the depth of recursion, typically O(n).
*/
