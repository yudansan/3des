// d3des_test.c
//

#include "stdio.h" 
#include "stdlib.h"   
#include "d3des.h"

int main()   
{      
    char *file_Out = "out.txt";
    char *file_tmp = "des.dat";
    char *key = "asdfghjklzxcvbnmqwertyui";
    char **p; 
    int ln;
    p = (char **)malloc(sizeof(char *));

    //3重DES解密
    int count = D3DES_Decrypt_Str(file_tmp,key,p);
    printf("%s",*p);
	
    return 0;   
}   
