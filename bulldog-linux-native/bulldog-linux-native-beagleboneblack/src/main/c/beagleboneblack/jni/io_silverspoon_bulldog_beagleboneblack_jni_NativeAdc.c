/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc.h"
#include "../BBBIOlib/BBBiolib_ADCTSC.h"

/*
 * Class:     io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc
 * Method:    setup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc_setup
  (JNIEnv * env, jclass clazz) {
	return BBBIO_ADCTSC_Init();
}

/*
 * Class:     io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc
 * Method:    teardown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc_teardown
  (JNIEnv * env, jclass clazz) {

}

/*
 * Class:     io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc
 * Method:    fetchSamples
 * Signature: (I)[F
 */
JNIEXPORT void JNICALL Java_io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc_fetchSamples
  (JNIEnv * env, jclass clazz, jint amountSamples) {
	BBBIO_ADCTSC_work(amountSamples);
}

/*
 * Class:     io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc
 * Method:    configureModule
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc_configureModule
  (JNIEnv * env, jclass clazz, jint workType, jint clockDivisor) {
	BBBIO_ADCTSC_module_ctrl(workType, clockDivisor);
}

/*
 * Class:     io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc
 * Method:    configureChannel
 * Signature: (IIIIILjava/nio/FloatBuffer;I)V
 */
JNIEXPORT void JNICALL Java_io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc_configureChannel
  (JNIEnv * env, jclass clazz, jint channelId, jint mode, jint openDelay, jint sampleDelay, jint sampleAvg, jobject buffer, jint bufferSize) {
	unsigned int* pDst = (unsigned int*) (*env)->GetDirectBufferAddress(env, buffer);
	BBBIO_ADCTSC_channel_ctrl(channelId, mode, openDelay, sampleDelay, sampleAvg, pDst, bufferSize);
}

/*
 * Class:     io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc
 * Method:    enableChannel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc_enableChannel
  (JNIEnv * env, jclass clazz, jint channelId) {
	BBBIO_ADCTSC_channel_enable(channelId);
}

/*
 * Class:     io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc
 * Method:    disableChannel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_io_silverspoon_bulldog_beagleboneblack_jni_NativeAdc_disableChannel
  (JNIEnv * env, jclass clazz, jint channelId) {
	BBBIO_ADCTSC_channel_disable(channelId);
}