#ifndef MYLOG_H
#define MYLOG_H
#include <stdio.h>

#ifdef _DEBUG
#define LOG(format, ...) MyLog("%s()-%s\n", __func__, format, ##__VA_ARGS__)
#else 
#define LOG __noop
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern void MyLog(const char* format, ...);
#ifdef __cplusplus
}
#endif
#endif