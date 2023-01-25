# C - Doubly linked lists

In this project, I learned about using doubly-linked lists in C.

## Tests :heavy_check_mark:

## Header File :file_folder:

* [lists.h](./lists.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File           | Definition/Prototype           |
| ------------------- | ------------------------------ |
| `struct dlistint_s`    | <ul><li>`int n`</li><li>`struct dlistint_s *prev`</li><li>`struct dlistint_s *new`</li></ul> |
| `typedef dlistint_t`   | `struct dlistint_s`                                                                          |
| `0-print_dlistint.c`   | `size_t print_dlistint(const dlistint_t *h);`                                                |
| `1-dlistint_len.c`     | `size_t dlistint_len(const dlistint_t *h);`                                                  |
| `2-add_dnodeint.c`  | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`                                     |
| `3-add_dnodeint_end.c` | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`                              |
| `4-free_dlistint.c`    | `void free_dlistint(dlistint_t *head);`                                                      |
| `5-get_dnodeint.c`     | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`                   |
| `6-sum_dlistint.c`     | `int sum_dlistint(dlistint_t *head);`                                                        |
| `7-insert_dnodeint.c`  | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`             |
| `8-delete_dnodeint.c`  | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`                       |

## Tasks :page_with_curl:

* **0. Print list**
  * [0-print_dlistint.c](./0-print_dlinstint.c): C function that prints all the elements
  of a doubly-linked `dlistint_t` list.
  * Returns the number of nodes in the list.

* **1. List length**
  * [1-dlistint_len.c](./1-dlistint_len.c): C function that returns the number of nodes in
  a doubly-linked `dlistint_t` list.

* **2. Add node**
  * [2-add_dnodeint.c](./2-add_dnodeint.c): C function that adds a new node at the
  beginning of a doubly-linked `dlistint_t` list.
  * If the function fails - returns `NULL`.
  * Otherwise - returns the address of the new element.

* **3. Add node at the end**
  * [3-add_dnodeint_end.c](./3-add_dnodeint_end.c): C function that adds a new
  node at the end of a doubly-linked `dlistint_t` list.
  * If the function fails - returns `NULL`.
  * Otherwise - returns the address of the new element.

* **4. Free list**
  * [4-free_dlistint.c](./4-free_dlistint.c): C function that frees a
  doubly-linked `dlistint_t` list.

* **5. Get node at index**
  * [5-get_dnodeint.c](./5-get_dnodeint.c): C function that locates a given node of a
  doubly-linked `dlistint_t` list.
  * The parameter `index` is the index of the node to locate - indices start at `0`.
  * If the node does not exist - returns `NULL`.
  * Otherwise - returns the address of the located node.

* **6. Sum list**
  * [6-sum_dlistint.c](./6-sum_dlistint.c): C function that sums all the data (`n`)
  of a doubly-linked `dlistint_t` list.
  * If the list is empty - returns `0`.
  * Otherwise - returns the sum of all the data (`n`).

* **7. Insert at index**
  * [7-insert_dnodeint.c](./7-insert_dnodeint.c): C function that inserts a new node at a
  given position.
  * The parameter `idx` is the index of the list where the new node should
  be added - indices start at `0`.
  * If the function fails - returns `NULL`.
  * Otherwise - returns the address of the new element.
  * Requires compilation with functions defined in [2-add_dnodeint.c](./2-add_dnodeint.c)
  and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c).

* **8. Delete at index**
  * [8-delete_dnodeint.c](./8-delete_dnodeint.c): C function that deletes the node at
  index `index` of a doubly-linked `dlistint_t` list.
  * The paramter `index` is the index of the node to delete - indices start at `0`.
  * If the function fails - returns `-1`.
  * Otherwise - returns `1`.

* **9. Crackme4**
  * [100-password](./100-password): Text file containing the password for the
  [crackme4](https://github.com/holbertonschool/0x16.c) executable.

* **10. Palindromes**
  * [102-result](./102-result): Text file containing the largest palindrome made from a
  product of two three-digit numbers.

* **11. Crackme5**
  * [103-keygen.c](./103-keygen.c): C function that generates passwords for the
  [crackme5](https://github.com/holbertonschool/0x16.c) executable.
  * Usage of the crackme: `./crackme5 username key`
  * Usage of the keygen: `./keygen5 username`

---

* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

---

### [0. Print list](./0-print_dlistint.c)
* Write a function that prints all the elements of a dlistint_t list.


### [1. List length](./1-dlistint_len.c)
* Write a function that returns the number of elements in a linked dlistint_t list.


### [2. Add node](./2-add_dnodeint.c)
* Write a function that adds a new node at the beginning of a dlistint_t list.


### [3. Add node at the end](./3-add_dnodeint_end.c)
* Write a function that adds a new node at the end of a dlistint_t list.


### [4. Free list](./4-free_dlistint.c)
* Write a function that free a dlistint_t list.


### [5. Get node at index](./5-get_dnodeint.c)
* Write a function that returns the nth node of a dlistint_t linked list.


### [6. Sum list](./6-sum_dlistint.c)
* Write a function that returns the sum of all the data (n) of a dlistint_t linked list.


### [7. Insert at index](./7-insert_dnodeint.c)
* Write a function that inserts a new node at a given position.


### [8. Delete at index](./8-delete_dnodeint.c)
* Write a function that deletes the node at index index of a dlistint_t linked list.


### [9. Crackme4](./100-password)
* Find the password for crackme4.


### [10. Palindromes](./102-result)
* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. Find the largest palindrome made from the product of two 3-digit numbers.


### [11. crackme5](./103-keygen.c)
* Write a keygen for crackme5.

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

