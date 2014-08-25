/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_bulldog_beagleboneblack_jni_NativeGpio */

#ifndef _Included_org_bulldog_beagleboneblack_jni_NativeGpio
#define _Included_org_bulldog_beagleboneblack_jni_NativeGpio
#ifdef __cplusplus
extern "C" {
#endif
#undef org_bulldog_beagleboneblack_jni_NativeGpio_DIRECTION_OUT
#define org_bulldog_beagleboneblack_jni_NativeGpio_DIRECTION_OUT 1L
#undef org_bulldog_beagleboneblack_jni_NativeGpio_DIRECTION_IN
#define org_bulldog_beagleboneblack_jni_NativeGpio_DIRECTION_IN 0L
#undef org_bulldog_beagleboneblack_jni_NativeGpio_HIGH
#define org_bulldog_beagleboneblack_jni_NativeGpio_HIGH 1L
#undef org_bulldog_beagleboneblack_jni_NativeGpio_LOW
#define org_bulldog_beagleboneblack_jni_NativeGpio_LOW 0L
/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    setup
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_setup
  (JNIEnv *, jclass);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    teardown
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_teardown
  (JNIEnv *, jclass);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    pinMode
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_pinMode
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    digitalRead
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_digitalRead
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    digitalWrite
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_digitalWrite
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    enableGpio
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_enableGpio
  (JNIEnv * env, jclass clazz);

#ifdef __cplusplus
}
#endif
#endif
