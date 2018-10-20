#include "pch.h"
#include "AES.h"
#include "EncryptCore.h"

void encrypt(unsigned char* mw, unsigned char* key) {
	AES aes(key);
	aes.Cipher(mw);
}

void unencrypt(char* mw, unsigned char* key) {
	AES aes(key);
	aes.InvCipher((void *)mw, strlen(mw));
}