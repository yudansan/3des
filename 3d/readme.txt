文件说明：
des.c des.h 算法
des_start.c 程序入口
in.txt 输入文件
key.txt 密钥文件 24字符

接口说明：
//DES算法
int DES_Encrypt(ElemType *plainBuffer, ElemType *keyBuffer, ElemType *cipherBuffer, int n);//加密数据 
int DES_Decrypt(ElemType *cipherBuffer, ElemType *keyBuffer, ElemType *plainBuffer, int n);//解密数据 
int DES_Encrypt_File(char *plainFile, char *keyStr,char *cipherFile);//加密文件  
int DES_Decrypt_File(char *cipherFile, char *keyStr,char *plainFile);//解密文件 
//3DES算法
int D3DES_Encrypt(ElemType *plainBuffer, ElemType *keyBuffer, ElemType *cipherBuffer, int n);//加密数据 
int D3DES_Decrypt(ElemType *cipherBuffer, ElemType *keyBuffer, ElemType *plainBuffer, int n);//解密数据 
int D3DES_Encrypt_File(char *plainFile, char *keyStr,char *cipherFile);//加密文件  
int D3DES_Decrypt_File(char *cipherFile, char *keyStr,char *plainFile);//解密文件 

其他：DES为1重算法，使用前8字节作为加密密钥；3DES为增强版的3重加密，即使用3个8字节密钥加密，相当于延长为24字节。