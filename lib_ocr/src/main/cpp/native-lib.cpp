#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_lib_kalu_ocr_OcrJni_stringFromJNI(JNIEnv *env, jclass type) {

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}