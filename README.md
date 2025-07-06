# Libmx

Custom C standard library with reimplemented versions of common functions. Covers string and memory handling, general utilities, and linked list operations.

## What's inside

### Utils
General-purpose helpers:
- Printing: `mx_printchar`, `mx_print_unicode`, `mx_printstr`, `mx_print_strarr`, `mx_printint`
- Char checks/conversion: `mx_isspace`, `mx_isalpha`, `mx_isdigit`, `mx_toupper`, `mx_tolower`, etc.
- Numbers & conversions: `mx_pow`, `mx_sqrt`, `mx_itoa`, `mx_nbr_to_hex`, `mx_hex_to_nbr`
- Arrays/algos: `mx_foreach`, `mx_binary_search`, `mx_bubble_sort`, `mx_quicksort`

### String
Functions for basic and advanced string manipulation:
- Length, copy, reverse, compare
- Substring, trimming, splitting, joining
- File to string, replacing substrings
- Read line with buffer

### Memory
Memory handling utilities:
- `memset`, `memcpy`, `memmove`, `memchr`, `memmem`, `realloc`, etc.
- Some GNU-like additions: `mempcpy`, `memrchr`, `rawmemchr`, etc.

### Linked List
Singly linked list utilities:
- Create node, push front/back, pop front/back
- List size
- Sort with a custom comparator

## Usage

```bash
git clone https://github.com/ovalkonia/libmx.git
cd libmx
make
```
