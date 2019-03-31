#include <jni.h>
#include <string>
#include "include/a.h"

extern "C" JNIEXPORT jstring JNICALL
Java_anter_com_cmaketest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ : " + std::to_string(add(13, 14));
    return env->NewStringUTF(hello.c_str());
}
