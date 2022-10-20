<h1 align="center">
 get_next_line [⚠️ In Development] 
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
* ```get_next_line.c```
	Function implementation.

* ```get_next_line_utils.c``` 
	Auxiliary functions (project requirement).

* ```get_next_line.h``` 
	Header file.

* ```main.c``` 
	Printing loop iterating over the file : calls get_next_line to fetch each line, then prints.

## 🛠️ Usage

### Requirements
The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run. <br>
❗️| Make sure you have all the required tools installed on your local machine then continue with these steps.

### Instructions

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

**2. Run the program**

 When compiling your code, add the source files and the required flag:

```shell
$ gcc get_next_line_utils.c get_next_line.c main.c -D BUFFER_SIZE=<size> -o get_next_line
```
Here `BUFFER_SIZE` determines the size of the buffer used to read the file (in other words, how manny chars shall be read at once with every `read()` call).
To run the program, enter the following in the command prompt:

```shell
$ ./get_next_line
```




## 📋 Credits

* [Acelera/Rodsmade](https://github.com/rodsmade/Projets_42_SP/)
* [gnlTester/Tripouille](https://github.com/Tripouille/gnlTester)

<p align="center"> Developed with love 💜 by Larissa Cristina Benedito (Mewmew/Larcrist). </p>
