//
// Created by 84746 on 2021/1/13.
//

#include<jni.h>
#include<string>
#include "people/People.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_dj_jnistudy_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
//    std::string hello = "hello from C++";
//    return env->NewStringUTF(hello.c_str()); // 返回hello from C++

    People people;
    return env->NewStringUTF(people.getString().c_str()); // 返回this is from people
}