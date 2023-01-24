// Modify this file
// compile with: gcc linkedlist.c -o linkedlist.out

#include <stdio.h>
#include <stdlib.h> // contains the functions free/malloc

// TODO: Create your node_t type here

// TODO: Write your functions here
// There should be 1.) create_list 2.) print_list 3.) free_list
// You may create as many helper functions as you like.

// node defined above, assume defined as node_t

node_t* new_node(int wins, int year, node_t* next) {

   node_t* newNode = (node_t*)malloc(sizeof(node_t);
   // allocate a new node, we have to put it on the heap! 
   if(newNode == NULL){
       return NULL;
   }

   newNode->num_wins = wins;
   newNode->year = year;
   newNode->next = next; 

   return newNode;
}


int main() {
   head = new_node(10, 5, NULL)
}

int main()
{
    int test_years[5] = {2018, 2017, 2016, 2015, 2014};
    int test_wins[5] = {108, 93, 93, 78, 71};

    // TODO: Implement me!

    return 0;
}
