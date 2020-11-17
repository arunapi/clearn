# clearn
My experiments with C

Standard header files declared in  `<>`
```
#include <stdio.h>
```

Custom header file used in `""`
```
#include "orders.h"
```

Header files include method declaration

Compiling and running

```
gcc -o myc.o main.c orders.c
chmod a+x myc.o
./myc.o 
```

Direct Memory Access demo.

```
gcc -o dma.o dma.c
chmod a+x dma.o
./dma.o
```

Pointers are typed. Size of the pointer is determined by the data type.

Doing `ptr +=2` on a char ptr

```
ptr --> 0x55b8367b4004

ptr --> 0x55b8367b4006
```

Doing `ptr +=2` on a int ptr

```
ptr --> 0x7fff771d6190

ptr --> 0x7fff771d6198

```

To print address use `%p`
```
printf("ptr --> %p\n", ptr);
```
