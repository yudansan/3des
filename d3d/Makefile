# Makefile 文件

d3des:d3des_start.o d3des.o

	gcc -o d3des d3des_start.o d3des.o

d3des_start.o:d3des_start.c d3des.h

	gcc -c d3des_start.c

d3des.o:d3des.c d3des.h

	gcc -c d3des.c

lib:

	gcc d3des.c -fPIC -shared -o libd3des.so 

	gcc d3des_start.c -L. -ld3des -o d3des

clean:

	rm -f d3des.o d3des_start.o

cllib:

	rm -f libd3des.so

	
