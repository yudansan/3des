// des_test.c
//

#include "stdio.h" 
#include "stdlib.h"   
#include "des.h"

int main()   
{      
    char *file_In = "in.txt";
    char *file_Out = "out.txt";
    char *file_tmp = "des.dat";
    char *key = "key.txt"; 
	int ln;

    //DES加密  
    DES_Encrypt_File(file_In,key,file_tmp);   
    printf("DES_E OK!\n");

    //DES解密  
    DES_Decrypt_File(file_tmp,key,file_Out);
    if(remove(file_tmp)){}   
    printf("DES_D OK!\n");

	//3重DES加密
	D3DES_Encrypt_File(file_In,key,file_tmp);   
	printf("D3DES_E OK!\n");

	//3重DES解密  
	D3DES_Decrypt_File(file_tmp,key,file_Out);
	if(remove(file_tmp)){}   
	printf("D3DES_D OK!\n");
	
	getchar();
    return 0;   
}   