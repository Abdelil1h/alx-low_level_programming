
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    int len = 59;
    int fd = 2; // File descriptor for standard error

    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    ssize_t bytes_written = write(fd, msg, len);

    if (bytes_written != len)
        return (EXIT_FAILURE);

    return (EXIT_SUCCESS);
}
