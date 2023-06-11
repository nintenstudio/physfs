/*
 * Homebrew Nintendo Switch support routines for PhysicsFS.
 *
 * Please see the file LICENSE.txt in the source's root directory.
 *
 *  This file was written.
 */

#define __PHYSICSFS_INTERNAL__
#include "physfs_platforms.h"

#ifdef PHYSFS_PLATFORM_SWITCH

#include "physfs_internal.h"

int __PHYSFS_platformInit(void) {
	return 1;
}

void __PHYSFS_platformDeinit(void) {

}

void* __PHYSFS_platformOpenRead(const char* filename) {

}

void* __PHYSFS_platformOpenWrite(const char* filename) {

}

void* __PHYSFS_platformOpenAppend(const char* filename) {

}

PHYSFS_sint64 __PHYSFS_platformRead(void* opaque, void* buf, PHYSFS_uint64 len) {

}

PHYSFS_sint64 __PHYSFS_platformWrite(void* opaque, const void* buffer, PHYSFS_uint64 len) {

}

int __PHYSFS_platformSeek(void* opaque, PHYSFS_uint64 pos) {

}

PHYSFS_sint64 __PHYSFS_platformTell(void* opaque) {

}

PHYSFS_sint64 __PHYSFS_platformFileLength(void* handle) {

}

int __PHYSFS_platformStat(const char* fn, PHYSFS_Stat* stat, const int follow) {

}

int __PHYSFS_platformFlush(void* opaque) {

}

void __PHYSFS_platformClose(void* opaque) {

}

void __PHYSFS_platformDetectAvailableCDs(PHYSFS_StringCallback cb, void* data) {

}

char* __PHYSFS_platformCalcBaseDir(const char* argv0) {

}

char* __PHYSFS_platformCalcUserDir(void) {

}

char* __PHYSFS_platformCalcPrefDir(const char* org, const char* app) {

}

void* __PHYSFS_platformGetThreadID(void) {

}

PHYSFS_EnumerateCallbackResult __PHYSFS_platformEnumerate(const char* dirname, PHYSFS_EnumerateCallback callback, const char* origdir, void* callbackdata) {

}

int __PHYSFS_platformMkDir(const char* path) {

}

int __PHYSFS_platformDelete(const char* path) {

}

void* __PHYSFS_platformCreateMutex(void) {

}

void __PHYSFS_platformDestroyMutex(void* mutex) {

}

int __PHYSFS_platformGrabMutex(void* mutex) {

}

void __PHYSFS_platformReleaseMutex(void* mutex) {

}

#endif  /* PHYSFS_PLATFORM_SWITCH */

/* end of physfs_platform_switch.c ... */


