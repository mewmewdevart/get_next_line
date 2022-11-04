<p align="center">
  <img src="https://user-images.githubusercontent.com/50052600/200047157-53df5299-3754-421d-8f00-54db98d8f9f1.png" />
</p>

<h1 align="center">
 Get_next_line
</h1>

<p align="center">
	<b><i>This project is about programming a function that returns a line read from a file descriptor.</i></b><br>
</p>

<p align="center">
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/mewmewdevart/get_next_line?color=6272a4" />
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/mewmewdevart/get_next_line?color=6272a4" />
	<img alt="Main language" src="https://img.shields.io/github/languages/top/mewmewdevart/get_next_line?color=6272a4"/>
	<img alt="Main language" src="https://img.shields.io/github/license/mewmewdevart/get_next_line?color=6272a4"/>
</p>

## 💡 About the project

> _This project introduces the concepts of _static variables_, _dynamic memory allocation_, _file descriptors_ and _macros_ while solving one simple task: that of using the Linux standard function `read()` to scan a file for _single lines_ (i.e. strings of chars with a single trailing `\n` (new line character)).

## 📁 Files/src
* [`get_next_line.c`](src/get_next_line.c)
	Function implementation. <br>
	- ```ft_found_error``` finds an error in input <br>
	- ```ft_free``` de-allocate the memory
	- ```ft_slice``` slice the string into pieces
	- ```ft_substr``` returns a substring from a string

* [`get_next_line_utils.c`](src/get_next_line_utils.c)
	Auxiliary functions (project requirement). <br>
	- ```ft_strlen``` calculate the length of a string
	- ```ft_strchr``` locate character in string
	- ```ft_strjoin``` concatenates two strings
	- ```ft_strlcpy``` concatenate string to an specific size
	- ```ft_strdup``` creates a dupplicate for the string passed as parameter

* [`get_next_line.h`](src/get_next_line.h)
	Header file.

* [`main.c`](src/main.c)
	Printing loop iterating over the file : calls get_next_line to fetch each line, then prints.

* ```*_bonus.c``` 
	 The files is exact copies of corresponding files but with the challenge you can read from the file descriptors 3, 4 and 5, to doing able to read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another.

## 🛠️ Usage

### Requirements
The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run. <br>
❗️| Make sure you have all the required tools installed on your local machine then continue with these steps.

### Instructions
This function is not a stand-alone program, its files must be included and compiled within another project.

**0. Download the archives**

Download the archives and go to the folder directory:

```bash
# Clone the repository
$ git clone https://github.com/mewmewdevart/get_next_line

# Enter into the directory
$ cd get_next_line/src/
```

**1. Using it in your code**

To use the function in your code, simply include its header:

```c
#include "get_next_line.h"
```
And create a main with some inserts. <br>
Example ``main.c``:
```c  
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("open() error\n");
		return (1);
	}
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
	fd = close(fd);
	if (fd == -1)
	{
		printf("close() error\n");
		return (1);
	}
	printf("%d", fd);
	return (0);
}
```

**2. Compilation**

 When compiling your code, add the source files and the required flag:

```shell
$ gcc get_next_line_utils.c get_next_line.c main.c -D BUFFER_SIZE=<size> -o get_next_line
```
Here `BUFFER_SIZE` determines the size of the buffer used to read the file (in other words, how manny chars shall be read at once with every `read()` call).
To run the program, enter the following in the command prompt:

```shell
$ ./get_next_line [file.txt]
```
Output should show the entire contents of the given file followed by a newline \n.



## 📋 Credits

* [Acelera/Rodsmade](https://github.com/rodsmade/Projets_42_SP/)
* [gnlTester/Tripouille](https://github.com/Tripouille/gnlTester)
* [Resources/Mcombeau](https://github.com/mcombeau)

<p align="center"> Developed with love 💜 by Larissa Cristina Benedito (Mewmew/Larcrist). </p>
