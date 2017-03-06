#ifndef  _LOG_H_
#define  _LOG_H_

#include <android/log.h>

#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, "custom_logging_adb_system_D", __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "custom_logging_adb_system_I", __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "custom_logging_adb_system_E", __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, "custom_logging_adb_system_W", __VA_ARGS__)

#endif // _LOG_H_