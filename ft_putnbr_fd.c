#include "libft.h"

void ft_putnbr(int n, int fd) {
  if (n == -2147483648)
    write(fd, "-2147483648", 11);
  else {
    if (n < 0) {
      ft_putchar_fd('-');
      n *= -1;
    }
    if (n >= 10) {
      ft_putnbr(n / 10, fd);
      ft_putnbr(n % 10, fd);
    } else {
      ft_putchar_fd(n + 48);
    }
  }
}
/*
int	main(void)
{
        int a = 45678;
        int fd = 1;
        ft_putnbr(a, fd);
}
*/