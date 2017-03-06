set timestamp=%date:~-4,4%%date:~-7,2%%date:~-10,2%%time:~0,2%%time:~3,2%%time:~6,2%
adb start-server
adb logcat > %userprofile%\desktop\adb_android_logcat\logs\%timestamp%-general_logs.txt