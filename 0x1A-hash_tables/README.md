#0x19 C Hash Tables

Hash tables are a data structure used to implement associative arrays. This allows for keys to be mapped to values. A hash function is used to compute an index in the array to store the associated value. Each element of the array is a pointer that may or may not point to a linked list depending on if any of the keys collide with each other. They are used to help reduce search times when looking for specific values.

Usage
To use the hash table functions be sure to include the hash_tables.h header file in your C program files. Compile all .c files in this repository with your main file, or create a library of these files to use in your program.

TASKS
0-hash_table_create.c: Create the hash table data structure containing an array of pointers.
1-djb2.c: Uses the djb2 hashing function to give a hash value based on a given key (as a string)
2-key_index.c: Using the djb2 hash function and the array size find an index in the array to store the key/value pair
3-hash_table_set.c: Using the index found using the key_index function add a node to the list at that index to store the key/value pair, if the list exists add the node to the front of the list
4-hash_table_get.c: Find the value associated with a given key in the hash table
5-hash_tables.h: Header file necessary for all .c files to work, contains data structures for the hash table and linked lists to store in the array in the hash table. Also contains all function prototype
6-hash_table_delete.c: C function that deletes a hash_table_t hash table.
7-100-sorted_hash_table.c: C functions that define a sorted hash table shash_table_t.
Identical in function to a hash_table_t hash table except key/value pairs are inserted in alphabetical order according to the ASCII value of the key.
