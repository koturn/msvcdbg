msvcdbg
=======

Memory debugger for msvc

This header enables heap management.
Simply including this header, you will be able to detect memory leaks.

If you compile with not MSVC compiler, this header will be ignored.


## Usage

Define ```_CRTDBG_MAP_ALLOC``` in your C/C++ source code.
And after that, write following line in your C/C++ source code.

```c
#include "msvcdbg.h"
```


## LICENSE

This software is released under the MIT License, see [LICENSE](LICENSE).
