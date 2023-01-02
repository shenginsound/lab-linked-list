# Lab / In-Class Activity

Whenever you need to quickly add and remove items, but those items are always in order - a Linked List is a good option for the data structure. In this Lab, we will explore how to write a **Singly Linked List**

For this lab, you will be working in pairs. One person will be programming, while the other will be guiding, and then you will switch roles. The goal is to make it so you **both** understand the content, in a co-teaching/learning environment.  

**Precondition**: Make sure to review the page on structs, iterators, linked lists, and nodes in Canvas if you haven't!

👉🏽 **Task**: If you haven't already, have one person in your group clone this repository, so you can either work on your local machine or the Khoury servers.


## Specifications
You will build a linked list that stores year and number of wins for a team. Additionally, you will be able to iterate over the list to printing out the results. Your final printout should look similar to the following:

```text
2018, 108 wins
2017, 93 wins
2016, 93 wins
2015, 78 wins
2014, 71 wins
```

You will want to practice creating an empty list, and then adding elements to the list. For this lab, we will focus on writing a *singly* linked list, meaning we only add items to one end of the list, and we only go 'one direction' for the nodes. 


## Step 1: Create Nodes (5 minutes)

For this step, you should create your struct. It will have three values to it, the year, the wins, and a pointer to another node!

You will then want to keep a 'head' reference variable, that always points to the head of your list. For example


```c
// node defined above, assume defined as node_t

node_t* new_node(int wins, int year, node_t* next) {

   node_t* newNode = // allocate a new node, we have to put it on the heap! 

   newNode->num_wins = wins;
   newNode->year = year;
   newNode->next = next; 

   return newNode;
}


int main() {
   head = new_node(10, 5, NULL)
}
```

### Testing Create Struct
How would you go about testing this? Could you take a couple nodes and then figure out how to print the contents of those two nodes? We suggest you do that now!

## Step 2: Build List (15 minutes)
Now, using our sample data, think about how you can write a loop to go through the two arrays adding new nodes. Write a function that is `node_t* build_list(int* wins, int* years, int size)` that uses the build node to build an entire list. Return the 'head' of the list.

### Testing Build List
How would you test this? Would using some of the testing tools help?


## Step 3: Print List (15 minutes)
Now write a function that takes in a node, and prints out the entire list based the first node entered.  Then, of course, print out your list!
 
## Step 4: Free List (10 minutes)
Write a function traverses a list, freeing every node you allocated. Use Valgrind to make sure you don't have a memory leak. 


## Step 5: Find Year (15 minutes)
Write a function that finds a node by the year, and returns a  pointer to that node.  

Discussion questions
* is there a risk in doing this? What is that risk?
* What would be some options to minimize the risk if you were building an actual application? (Spoiler: you  may need two struct types!) 


## Step 6: Insert Year (20 minutes)
Write a function that based on a 'given year', it adds a node after that year. The function would probably look like
`insert_year(int year_to_find, int year, int wins)`, with returning true if that insertion was successful or false if the year_to_find didn't exist.

Discussion:
* what is the BigO for this operation compared to adding to the front of the list?


## Step 7: Remove Year (30 minutes)
Write a function that removes a node based on a given year - without breaking the entire list! It may help to draw this one out. 



## Further Practice

Here are some ideas for extra practice (and if you have time)

* Make it a doubly linked list!
* Use curl and awk to grab the data from the CSV, and parse the columns into two different files
  * Then modify the application to take in the files data (or take in input from stdin, and use a redirect to pass in the data!)
  * There are a variety of ways you can wrangle the data
  



## 📝 Grading Rubric

This activity is manually graded via TA during class time. It requires both attendance and working through the lab. 


## 📚 Resources
* [Red Sox Data Source](http://www.espn.com/mlb/history/teams/_/team/Bos)
* [Red Sox Data (CSV)]( https://www.ccs.neu.edu/home/awjacks/cs3650f18/Labs/2/red_sox_history.csv)
* [C LinkedList Tutorial](https://www.learnc.net/c-data-structures/c-linked-list/)
* [Crash Course on C Linked Lists](https://www.youtube.com/watch?v=SB9si64asSk&index=8&list=PLvv0ScY6vfd8qupx0owF78ZcbvySvbWfx)
* [C Struct Tutorials Point](https://www.tutorialspoint.com/cprogramming/c_structures.htm)
* [C Pointers Tutorials Point](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
* [Another C LinkedList tutorial](https://www.cprogramming.com/tutorial/c/lesson15.html)
* [More on Typedef](https://en.wikipedia.org/wiki/Typedef)