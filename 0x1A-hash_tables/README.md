# C - Hash tables

In this project, I learned about hashing by implementing hash functions and hash tables in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files.

## Header File :file_folder:

* [hash_tables.h](./hash_tables.h): Header file containing definitions and prototypes for all types and functions written for the project.

Data Structures:
```
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;
```

Function Prototypes:

| File | Prototype |
| --- | --- |
| `0-hash_table_create.c` | `hash_table_t *hash_table_create(unsigned long int size);` |
| `1-djb2.c` | `unsigned long int hash_djb2(const unsigned char *str);` |
| `2-key_index.c` | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` |
| `3-hash_table_set.c` | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` |
| `4-hash_table_get.c` | `char *hash_table_get(const hash_table_t *ht, const char *key);` |
| `5-hash_table_print.c` | `void hash_table_print(const hash_table_t *ht);` |
| `6-hash_table_delete.c` | `void hash_table_delete(hash_table_t *ht);` |
| `100-sorted_hash_table.c` | `shash_table_t *shash_table_create(unsigned long int size);` |
| | `int shash_table_set(shash_table_t *ht, const char *key, const char *value);` |
| | `char *shash_table_get(const shash_table_t *ht, const char *key);` |
| | `void shash_table_print(const shash_table_t *ht);` |
| | `void shash_table_print_rev(const shash_table_t *ht);` |
| | `void shash_table_delete(shash_table_t *ht);` |

## Tasks :page_with_curl:

* **0. >>> ht = {}**
  * [0-hash_table_create.c](./0-hash_table_create.c): C function that creates a `hash_table_t` hash table.
    * If the function fails - returns `NULL`.
    * Otherwise - returns a pointer to the new hash table.

* **1. djb2**
  * [1-djb2.c](./1-djb2.c): C function that implements the djb2 hashing algorithm.

* **2. key -> index**
  * [2-key_index.c](./2-key_index.c): C function that returns the index at which a key/value pair should be stored in the array of a `hash_table_t` hash table.

* **3. >>> ht['betty'] = 'holberton'**
  * [3-hash_table_set.c](./3-hash_table_set.c): C function that adds an element to a `hash_table_t` table.
    * The parameter `key` cannot be an empty string.
    * Returns `1` on success, `0` otherwise.

* **4. >>> ht['betty']**
  * [4-hash_table_get.c](./4-hash_table_get.c): C function that retrieves a value associated with a key in a `hash_table_t` hash table.
    * If `key` cannot be matched - returns `NULL`.
    * Otherwise - returns the value associated with `key`.

* **5. >>> print(ht)**
  * [5-hash_table_print.c](./5-hash_table_print.c): C function that prints a `hash_table_t` hash table.
    * Prints each `key`/`value` pair in the order they appear in the array of the hash table.
    * Does not print anything if the hash table is `NULL`.

* **6. >>> del ht**
  * [6-hash_table_delete.c](./6-hasb_table_delete.c): C function that deletes a `hash_table_t` hash table.

* **7. $ht['Betty'] = 'Holberton'**
  * [100-sorted_hash_table.c](./100-sorted_hash_table.c): C functions that define a sorted hash table `shash_table_t`.
    * Identical in function to a `hash_table_t` hash table except key/value pairs are inserted in alphabetical order according to the ASCII value of the key.
    * Key/value pairs are printed in the order they are sorted.
    * Includes a function `shash_table_print_rev()` that prints the hash table in reverse order.

---
## Description
What you should learn from this project:

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

---

### [0. >>> ht = {}](./0-hash_table_create.c)
* Write a function that creates a hash table.


### [1. djb2](./1-djb2.c)
* Write a hash function implementing the djb2 algorithm.


### [2. key -> index](./2-key_index.c)
* Write a function that gives you the index of a key.


### [3. >>> ht['betty'] = 'holberton'](./3-hash_table_set.c)
* Write a function that adds an element to the hash table.


### [4. >>> ht['betty']](./4-hash_table_get.c)
* Write a function that retrieves a value associated with a key.


### [5. >>> print(ht)](./5-hash_table_print.c)
* Write a function that prints a hash table.


### [6. >>> del ht](./6-hash_table_delete.c)
* Write a function that deletes a hash table.


### [7. $ht['Betty'] = 'Holberton'](./100-sorted_hash_table.c)
* In PHP, hash tables are ordered. Wait… WAT? How is this even possible?

---

## Author
* **Prince Solomon** - [princexz](https://github.com/princexz)
## Acknowledgements :pray:

All work contained in this project was completed as part of the curriculum for ALX Africa SE. ALX Africa is an online full-stack software engineering program that prepares students for careers in the tech industry using project-based peer learning. For more information, visit [this link](https://www.alxafrica.com//).


<p align="center">
  <img src="http://www.alxafrica.com/wp-content/uploads/2022/01/header-logo.png"
    alt="ALX Africa Logo"
  >
  </p>

