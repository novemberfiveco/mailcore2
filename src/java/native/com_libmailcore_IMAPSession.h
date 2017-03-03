/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_IMAPSession */

#ifndef _Included_com_libmailcore_IMAPSession
#define _Included_com_libmailcore_IMAPSession
#ifdef __cplusplus
extern "C" {
#endif
#undef com_libmailcore_IMAPSession_serialVersionUID
#define com_libmailcore_IMAPSession_serialVersionUID 1LL
/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setHostname
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setHostname
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    hostname
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_IMAPSession_hostname
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setPort
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setPort
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    port
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_IMAPSession_port
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setUsername
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setUsername
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    username
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_IMAPSession_username
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setPassword
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setPassword
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    password
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_IMAPSession_password
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setOAuth2Token
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setOAuth2Token
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    OAuth2Token
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_IMAPSession_OAuth2Token
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setAuthType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setAuthType
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    authType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_IMAPSession_authType
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setConnectionType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setConnectionType
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    connectionType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_IMAPSession_connectionType
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setTimeout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setTimeout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    timeout
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_IMAPSession_timeout
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setCheckCertificateEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setCheckCertificateEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    isCheckCertificateEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_libmailcore_IMAPSession_isCheckCertificateEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setDefaultNamespace
 * Signature: (Lcom/libmailcore/IMAPNamespace;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setDefaultNamespace
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    defaultNamespace
 * Signature: ()Lcom/libmailcore/IMAPNamespace;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_defaultNamespace
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setAllowsFolderConcurrentAccessEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setAllowsFolderConcurrentAccessEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    allowsFolderConcurrentAccessEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_libmailcore_IMAPSession_allowsFolderConcurrentAccessEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setMaximumConnections
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setMaximumConnections
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    maximumConnections
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_IMAPSession_maximumConnections
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    isOperationQueueRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_libmailcore_IMAPSession_isOperationQueueRunning
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    cancelAllOperations
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_cancelAllOperations
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    serverIdentity
 * Signature: ()Lcom/libmailcore/IMAPIdentity;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_serverIdentity
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    clientIdentity
 * Signature: ()Lcom/libmailcore/IMAPIdentity;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_clientIdentity
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    gmailUserDisplayName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_IMAPSession_gmailUserDisplayName
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    folderInfoOperation
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/IMAPFolderInfoOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_folderInfoOperation
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    folderStatusOperation
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/IMAPFolderStatusOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_folderStatusOperation
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchSubscribedFoldersOperation
 * Signature: ()Lcom/libmailcore/IMAPFetchFoldersOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchSubscribedFoldersOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchAllFoldersOperation
 * Signature: ()Lcom/libmailcore/IMAPFetchFoldersOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchAllFoldersOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    renameFolderOperation
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_renameFolderOperation
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    deleteFolderOperation
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_deleteFolderOperation
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    createFolderOperation
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_createFolderOperation
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    subscribeFolderOperation
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_subscribeFolderOperation
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    unsubscribeFolderOperation
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_unsubscribeFolderOperation
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    customCommand
 * Signature: (Ljava/lang/String;Z)Lcom/libmailcore/IMAPCustomCommandOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_customCommand
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    appendMessageOperation
 * Signature: (Ljava/lang/String;[BILjava/util/List;)Lcom/libmailcore/IMAPAppendMessageOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_appendMessageOperation
  (JNIEnv *, jobject, jstring, jbyteArray, jint, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    copyMessagesOperation
 * Signature: (Ljava/lang/String;Lcom/libmailcore/IndexSet;Ljava/lang/String;)Lcom/libmailcore/IMAPCopyMessagesOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_copyMessagesOperation
  (JNIEnv *, jobject, jstring, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    expungeOperation
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_expungeOperation
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchMessagesByUIDOperation
 * Signature: (Ljava/lang/String;ILcom/libmailcore/IndexSet;)Lcom/libmailcore/IMAPFetchMessagesOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchMessagesByUIDOperation
  (JNIEnv *, jobject, jstring, jint, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchMessagesByNumberOperation
 * Signature: (Ljava/lang/String;ILcom/libmailcore/IndexSet;)Lcom/libmailcore/IMAPFetchMessagesOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchMessagesByNumberOperation
  (JNIEnv *, jobject, jstring, jint, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    syncMessagesByUIDOperation
 * Signature: (Ljava/lang/String;ILcom/libmailcore/IndexSet;J)Lcom/libmailcore/IMAPFetchMessagesOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_syncMessagesByUIDOperation
  (JNIEnv *, jobject, jstring, jint, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchMessageByUIDOperation
 * Signature: (Ljava/lang/String;JZ)Lcom/libmailcore/IMAPFetchContentOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchMessageByUIDOperation
  (JNIEnv *, jobject, jstring, jlong, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchMessageAttachmentByUIDOperation
 * Signature: (Ljava/lang/String;JLjava/lang/String;IZ)Lcom/libmailcore/IMAPFetchContentOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchMessageAttachmentByUIDOperation
  (JNIEnv *, jobject, jstring, jlong, jstring, jint, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchMessageByNumberOperation
 * Signature: (Ljava/lang/String;JZ)Lcom/libmailcore/IMAPFetchContentOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchMessageByNumberOperation
  (JNIEnv *, jobject, jstring, jlong, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchMessageAttachmentByNumberOperation
 * Signature: (Ljava/lang/String;JLjava/lang/String;IZ)Lcom/libmailcore/IMAPFetchContentOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchMessageAttachmentByNumberOperation
  (JNIEnv *, jobject, jstring, jlong, jstring, jint, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchParsedMessageByUIDOperation
 * Signature: (Ljava/lang/String;JZ)Lcom/libmailcore/IMAPFetchParsedContentOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchParsedMessageByUIDOperation
  (JNIEnv *, jobject, jstring, jlong, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchParsedMessageByNumberOperation
 * Signature: (Ljava/lang/String;JZ)Lcom/libmailcore/IMAPFetchParsedContentOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchParsedMessageByNumberOperation
  (JNIEnv *, jobject, jstring, jlong, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    storeFlagsByUIDOperation
 * Signature: (Ljava/lang/String;Lcom/libmailcore/IndexSet;IILjava/util/List;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_storeFlagsByUIDOperation
  (JNIEnv *, jobject, jstring, jobject, jint, jint, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    storeFlagsByNumberOperation
 * Signature: (Ljava/lang/String;Lcom/libmailcore/IndexSet;IILjava/util/List;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_storeFlagsByNumberOperation
  (JNIEnv *, jobject, jstring, jobject, jint, jint, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    storeLabelsByUIDOperation
 * Signature: (Ljava/lang/String;Lcom/libmailcore/IndexSet;ILjava/util/List;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_storeLabelsByUIDOperation
  (JNIEnv *, jobject, jstring, jobject, jint, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    storeLabelsByNumberOperation
 * Signature: (Ljava/lang/String;Lcom/libmailcore/IndexSet;ILjava/util/List;)Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_storeLabelsByNumberOperation
  (JNIEnv *, jobject, jstring, jobject, jint, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    searchOperation
 * Signature: (Ljava/lang/String;ILjava/lang/String;)Lcom/libmailcore/IMAPSearchOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_searchOperation__Ljava_lang_String_2ILjava_lang_String_2
  (JNIEnv *, jobject, jstring, jint, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    searchOperation
 * Signature: (Ljava/lang/String;Lcom/libmailcore/IMAPSearchExpression;)Lcom/libmailcore/IMAPSearchOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_searchOperation__Ljava_lang_String_2Lcom_libmailcore_IMAPSearchExpression_2
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    idleOperation
 * Signature: (Ljava/lang/String;J)Lcom/libmailcore/IMAPIdleOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_idleOperation
  (JNIEnv *, jobject, jstring, jlong);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    fetchNamespaceOperation
 * Signature: ()Lcom/libmailcore/IMAPFetchNamespaceOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_fetchNamespaceOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    identityOperation
 * Signature: (Lcom/libmailcore/IMAPIdentity;)Lcom/libmailcore/IMAPIdentityOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_identityOperation
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    connectOperation
 * Signature: ()Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_connectOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    checkAccountOperation
 * Signature: ()Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_checkAccountOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    disconnectOperation
 * Signature: ()Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_disconnectOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    capabilityOperation
 * Signature: ()Lcom/libmailcore/IMAPCapabilityOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_capabilityOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    quotaOperation
 * Signature: ()Lcom/libmailcore/IMAPQuotaOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_quotaOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    noopOperation
 * Signature: ()Lcom/libmailcore/IMAPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_noopOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    htmlRenderingOperation
 * Signature: (Lcom/libmailcore/IMAPMessage;Ljava/lang/String;)Lcom/libmailcore/IMAPMessageRenderingOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_htmlRenderingOperation
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    htmlBodyRenderingOperation
 * Signature: (Lcom/libmailcore/IMAPMessage;Ljava/lang/String;)Lcom/libmailcore/IMAPMessageRenderingOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_htmlBodyRenderingOperation
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    plainTextRenderingOperation
 * Signature: (Lcom/libmailcore/IMAPMessage;Ljava/lang/String;)Lcom/libmailcore/IMAPMessageRenderingOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_plainTextRenderingOperation
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    plainTextBodyRenderingOperation
 * Signature: (Lcom/libmailcore/IMAPMessage;Ljava/lang/String;Z)Lcom/libmailcore/IMAPMessageRenderingOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPSession_plainTextBodyRenderingOperation
  (JNIEnv *, jobject, jobject, jstring, jboolean);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setupNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setupNative
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    finalizeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_finalizeNative
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setupNativeOperationQueueListener
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setupNativeOperationQueueListener
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPSession
 * Method:    setupNativeConnectionLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPSession_setupNativeConnectionLogger
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
