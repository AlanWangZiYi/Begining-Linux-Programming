#include <unistd.h>
#include <linux/kd.h>



void main(void)
{
    ioctl(tty_fd, KDSETLED, LED_NUM);
}