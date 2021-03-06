/*
 * Copyright (c) 2020 Bitdefender
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _VERSION_H_
#define _VERSION_H_

// driver version
#define INTROVECORE_VERSION_HIGH        1
#define INTROVECORE_VERSION_LOW         0
#define INTROVECORE_VERSION_REVISION    0
#define INTROVECORE_VERSION_BUILD       1


#define INTROVECORE_BUILD_DATE              __DATE__
#define INTROVECORE_BUILD_TIME              __TIME__
#define INTROVECORE_VERSIONSTAMP            ((((DWORD)INTROVECORE_VERSION_REVISION) << 16) | ((DWORD)INTROVECORE_VERSION_BUILD))

#ifdef VER_INTERNALNAME_STR
#undef VER_INTERNALNAME_STR
#endif
#define VER_INTERNALNAME_STR    "INTROVECORE.SYS"

#ifdef VER_MODULE_REVISION
#undef VER_MODULE_REVISION
#endif
#define VER_MODULE_REVISION     INTROVECORE_VERSION_REVISION

#ifdef VER_FILEVERSION
#undef VER_FILEVERSION
#endif
#define VER_FILEVERSION         INTROVECORE_VERSION_HIGH,INTROVECORE_VERSION_LOW,INTROVECORE_VERSION_REVISION,INTROVECORE_VERSION_BUILD

#ifdef DBG
#define BDVER_FILEVERSION_MAJORMINORREVBLD2(x,y,z,w) #x "." #y "." #z "." #w ", DEBUG"
#else
#define BDVER_FILEVERSION_MAJORMINORREVBLD2(x,y,z,w) #x "." #y "." #z "." #w ", RELEASE"
#endif
#define BDVER_FILEVERSION_MAJORMINORREVBLD1(x,y,z,w) BDVER_FILEVERSION_MAJORMINORREVBLD2(x, y, z, w)

#ifdef VER_FILEVERSION_STR
#undef VER_FILEVERSION_STR
#endif
#define VER_FILEVERSION_STR     BDVER_FILEVERSION_MAJORMINORREVBLD1(INTROVECORE_VERSION_HIGH, INTROVECORE_VERSION_LOW, INTROVECORE_VERSION_REVISION, INTROVECORE_VERSION_BUILD)

#endif // _VERSION_H_
