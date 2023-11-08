# Hash Tables in C
A hash table, also known as a hash map, is a data structure used in computer science and programming to store and retrieve data efficiently.
Hash Tables are based on the concept of a hash function and is designed to provide fast access to data, making it an essential tool for optimizing data retrieval operations. Hash tables are commonly used in various software applications and are particularly useful when you need to associate keys with values.
## components of a hash table
- `Hash Function:` Converts given keys into index in a data structure. The `index` is used to store and retrieve associated value.
	- Characteristic of hash function:
		- It should be deterministic
		- It should converts same results for same input
- `Array or Bucket Array:` This is the data structure to implement the hash table. Commonly implemented using an `array` or `Array of Linked Lists`
	- The size of the array is called `Hash Table capacity` and determines efficiency of retrieval operations
- `Key-Value Pairs:` Data is stored in the hash table as key-value pairs.
	- `Key` is used as input to the hash function to generate index
	- The resulting index in the array is where the corresponding value is stored.
## Other operations of hash tables
- Collisions: They occur when different keys produce same `hash value`. This means it leads to same index in the array/ hash table
	### Handling Collision
	- `Chaining:` Involves using linked list at each index to store multiple key value-pair
	- `Open addressing:` This involves searching for then next available slot in the array to store data
- `Retrieval and Insertion:` The same hash function is applied to compute the index for retrieving and storing values stored at a given index
- `Performance:` Under ideal conditions, a hash function has constant time complexty (O(1)) for insertion and retrieval operations
	### Performance degrades due:
		- Many collisions
		- Hash table becoming too full
	### How to maintain performance
		- Choosing a good hash function
		- Resizing hashtable to when necessary
## Applications of Hash Tables
1. `Dictionary and Sets:` Used to implement dictionaries (associative arrays) for easy retrieval. Can be used to check for element existence in sets
2. `Caches:` Used in caching mechanisms to store frequently accessed data.
3. `Symbol Tables:` Compilers and interpreters use hash tables as symbol tables to store information about variables, functions, and other symbols in a program. 
4. `Database Indexing:`in databases, they are used for: indexing and quick data retrieval
5. `Routers and Switches:`Network routers and switches use hash tables for IP address routing. Hashing the IP address helps determine the appropriate path or port for data packets to travel, improving the efficiency of network routing.
6. `Natural Language Processing (NLP):` NLP applications can use hash tables to store word frequencies, language models, and other linguistic data for efficient text processing and analysis.
