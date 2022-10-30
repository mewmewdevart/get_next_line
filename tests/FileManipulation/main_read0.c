#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void read_files(int fd);

int main (void)
{
    char buf[50];
    int fd,fd2,fd3;
    int index;
    int count;

    //	Open the cat.txt file in read only mode
    fd = open("cat.txt", O_RDONLY);
    if(fd == -1)
        {
            printf("open() error\n");
            return (1);
        }

    //	Initialize the count variables
    index = -1;
    count = 0;
    //	Loop as long as read does not return 0 (which would mean that
    //	there is nothing more to read in the file)]
    while(index != 0)
    {
		// Read 100 characters with read from the
		// opened file descriptor
        index = read(fd, buf, 50);
        if (index == -1)
        {
            printf("read(0) error\n");
            return (1);
        }
        // Read does not add the terminating \0
		// We can use the number of read characters as the index
		// of the last character in the string
        buf[index] = '\0';
        // Print the buffer contents after read
        printf("%s \n%d\n\n", buf, count);
        count++;
    }

    //fd2 = open("cat.txt", O_RDONLY);
    //fd3 = open("cat.txt", O_RDONLY);

    read_files(fd);
    //read_files(fd2);
    //read_files(fd3);
    //	Close the opened file descriptor
    close(fd);
        if(fd == -1)
        {
            printf("close() error\n");
            return (1);
        }
    return (0);
}

void read_files(int fd)
{
    char buf[50];
    int index;

    index = read(fd, buf, 50);
    if (index == -1)
	{
		printf("Read error!\n");
		return;
	}
    buf[index] = '\0';
    printf("%s \n%d\n\n", buf, fd);
    return;
}
