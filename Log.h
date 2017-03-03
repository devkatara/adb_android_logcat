#ifndef  _LOG_H_
#define  _LOG_H_

#include <android/log.h>

#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, "devkatara_logging_application_D", __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "devkatara_logging_application_I", __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "devkatara_logging_application_E", __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, "devkatara_logging_application_W", __VA_ARGS__)

#endif // _LOG_H_