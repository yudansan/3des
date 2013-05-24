// d3des.h : Data Encryption Standard
// 2013.5.24 v1.0

#include "stdio.h"   
#include "memory.h"    
#include "stdlib.h"   
  
#define PLAIN_FILE_OPEN_ERROR -1   
#define KEY_FILE_OPEN_ERROR -2   
#define CIPHER_FILE_OPEN_ERROR -3   
#define DES_OK 1  
#define BUFFER_SIZE 1024
#define ROUND 16//迭代次数，16次以上破解时只能使用穷举法

typedef char ElemType;  

int ByteToBit(ElemType ch,ElemType bit[8]);//字节转换成二进制  
int BitToByte(ElemType bit[8],ElemType *ch);//二进制转换成字节 
int Char8ToBit64(ElemType ch[8],ElemType bit[64]);//将长度为8的字符串转为二进制位串  
int Bit64ToChar8(ElemType bit[64],ElemType ch[8]);//将二进制位串转为长度为8的字符串  
int DES_MakeSubKeys(ElemType key[64],ElemType subKeys[16][48]);//生成子密钥  
int DES_PC1_Transform(ElemType key[64], ElemType tempbts[56]);//密钥置换1
int DES_PC2_Transform(ElemType key[56], ElemType tempbts[48]);//密钥置换2
int DES_ROL(ElemType data[56], int time);//循环左移
int DES_IP_Transform(ElemType data[64]);//IP置换   
int DES_IP_1_Transform(ElemType data[64]);//IP逆置换  
int DES_E_Transform(ElemType data[48]);//扩展置换 
int DES_P_Transform(ElemType data[32]);//P置换  
int DES_SBOX(ElemType data[48]);//S盒置换   
int DES_XOR(ElemType R[48], ElemType L[48],int count);//异或 
int DES_Swap(ElemType left[32],ElemType right[32]);//交换 
int DES_DecryptBlock(ElemType cipherBlock[8], ElemType subKeys[16][48], ElemType plainBlock[8]);//解密单个分组   
//DES算法
int DES_Decrypt(ElemType *cipherBuffer, ElemType *keyBuffer, ElemType *plainBuffer, int n);//解密数据 
int DES_Decrypt_File(char *cipherFile, char *keyStr,char *plainFile);//解密文件 
//3DES算法据 
int D3DES_Decrypt(ElemType *cipherBuffer, ElemType *keyBuffer, ElemType *plainBuffer, int n);//解密数据   
int D3DES_Decrypt_File(char *cipherFile, char *keyStr, char *plainFile);//解密文件 
int D3DES_Decrypt_Str(char *cipherFile, char *keyStr, char **plainBuffer);//返回长度
