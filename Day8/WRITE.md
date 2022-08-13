# Some use cases

- using `write`

write(fd, buf, nbytes)
- fd: file descriptor
- buf: points to character array, with contetnt to be written to by `fd`
- nbytes: specifies number of bytes to be written from the character array pointed to by fd.

write(1, msg, len_of_msg_to_disp)
```
#include <stdio.h>

/** betty goes here **/

int main(void)
{
	...
	return (0);
}
```
