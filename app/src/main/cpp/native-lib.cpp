#include <jni.h>
#include <string>

extern "C"
jstring
Java_lamp_1on_jokenpo_1legue_menu_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
