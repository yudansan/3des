# Makefile 文件
d3des:d3des_start.o d3des.o
	gcc -o d3des d3des_start.o d3des.o
d3des_start.o:d3des_start.c d3des.h
	gcc -c d3des_start.c
d3des.o:d3des.c d3des.h
	gcc -c d3des.c
clean:
	rm d3des.o d3des_start.o
