header.h and lib.c are necessary files in each directory question from here.
Such that:

    *header.h* Is a file containing data structures type definition and their rescpective prototypes functions.

    *lib.c* Is a file containing functions defintions.

That way, to each source directory question use theses files, header.h is included at each main.c file, as `#include "../header.h"`.

And on time to compile the main.c file, it is necessary to pass `../lib.c` to *gcc*; then, as an example:

    `gcc main.c ../lib.c`

That it does main.c can uses thoses functions contained in lib.c file.  