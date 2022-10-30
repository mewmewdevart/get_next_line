#include <stdio.h> 
#include <fcntl.h> 
#include <unistd.h> 
#include "get_next_line.h" 

int    main(void)
{
    int    fd;

    fd = open("../tests/archive_music.txt", O_RDWR);
    
    if (fd == -1)
        return (-1);

    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd)); //chama-se varias veze
    printf("%s", get_next_line(fd));
    close(fd);

    printf("%i", fd);
    return (0);
}
