#pragma once

#include "physfs.h"

PHYSFS_uint32 crc32buf(const char* buf, unsigned int len);

PHYSFS_uint32 nonzerocrc32buf(const char* buf, unsigned int len);