# **0x06-pointers_arrays_strings**

## **Description**
What you should learn from this project:
- Everything from **[0x05-pointers_arrays_strings](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/tree/main/0x05-pointers_arrays_strings)**

## **Projects**
### **[0-strcat.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/0-strcat.c)**
- Write a function that concatenates two strings.
  - Prototype: char *_strcat(char *dest, char *src);
  - This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
  - Returns a pointer to the resulting string dest
### **[1-strncat.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/1-strncat.c)**
- Write a function that concatenates two strings.
  - Prototype: char *_strncat(char *dest, char *src, int n);
  - The _strncat function is similar to the _strcat function, except that
    - it will use at most n bytes from src; and
    - src does not need to be null-terminated if it contains n or more bytes
  - Return a pointer to the resulting string dest
### **[2-strncpy.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/2-strncpy.c)**
- Write a function that copies a string.
  - Prototype: char *_strncpy(char *dest, char *src, int n);
  - Your function should work exactly like strncpy
### **[3-strcmp.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/3-strcmp.c)**
- Write a function that compares two strings.
  - Prototype: int _strcmp(char *s1, char *s2);
  - Your function should work exactly like strcmp
### **[4-rev_array.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/4-rev_array.c)**
- Write a function that reverses the content of an array of integers.
  - Prototype: void reverse_array(int *a, int n);
  - Where n is the number of elements of the array
### **[5-string_toupper.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/5-string_toupper.c)**
- Write a function that changes all lowercase letters of a string to uppercase.
  - Prototype: char *string_toupper(char *);
### **[6-cap_string.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/6-cap_string.c)**
- Write a function that capitalizes all words of a string.
  - Prototype: char *cap_string(char *);
  - Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
### **[7-leet.c](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/7-leet.c)**
- Write a function that encodes a string into 1337.
  - Letters a and A should be replaced by 4
  - Letters e and E should be replaced by 3
  - Letters o and O should be replaced by 0
  - Letters t and T should be replaced by 7
  - Letters l and L should be replaced by 1
  - Prototype: char *leet(char *);
  - You can only use one if in your code
  - You can only use two loops in your code
  - You are not allowed to use switch
  - You are not allowed to use any ternary operation
  
## **Author**
**[Mostafa ElMonateh](https://github.com/Mostafa-ElMonateh)**
