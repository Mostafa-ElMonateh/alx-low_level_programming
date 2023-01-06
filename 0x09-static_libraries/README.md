# **0x09-static_libraries**
## **Description**
What you should learn from this project:
- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm
## **Projects**
### **[libmy.a](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x09-static_libraries/libmy.a)**
- Create the static library libmy.a containing all the functions listed below:
	- 0-isupper.o
	- 0-memset.o
	- 0-strcat.o
	- 1-isdigit.o
	- 1-memcpy.o
	- 1-strncat.o
	- 100-atoi.o
	- 2-strchr.o
	- 2-strlen.o
	- 2-strncpy.o
	- 3-islower.o
	- 3-puts.o
	- 3-strcmp.o
	- 3-strspn.o
	- 4-isalpha.o
	- 4-strpbrk.o
	- 5-strstr.o
	- 6-abs.o
	- 9-strcpy.o
	- _putchar.o
### **[main.h](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x09-static_libraries/main.h)**
- The header file contains all the prototypes of the functions in above files.
### **[create_static_lib.sh](https://github.com/Mostafa-ElMonateh/alx-low_level_programming/blob/main/0x09-static_libraries/create_static_lib.sh)**
- Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
## **Author**
**[Mostafa ElMonateh](https://github.com/Mostafa-ElMonateh)**
