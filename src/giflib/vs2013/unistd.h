#ifndef _UNISTD_H_
#define _UNISTD_H_

/* qkepia: This is just a barebones unistd.h that contains only the stuff needed to get
		   giflib 4.2.3 to compile with VS2013 */

#pragma warning(disable: 4267) // "conversion from 'size_t' to 'int', possible loss of data"
#pragma warning(disable: 4996) // "The POSIX name for this item is deprecated.Instead, use the ISO C++ conformant name"
#pragma warning(disable: 4018) // signed/unsigned mismatch

#include <io.h>
#include <process.h>
#include <stdlib.h>

#endif