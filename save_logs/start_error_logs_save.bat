set timestamp=%date:~-4,4%%date:~-7,2%%date:~-10,2%%time:~0,2%%time:~3,2%%time:~6,2%
adb start-server
adb logcat -s custom_logging_adb_system_E > %userprofile%\desktop\adb_android_logcat\logs\%timestamp%-error_logs.txt