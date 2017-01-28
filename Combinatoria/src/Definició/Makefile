
testDefine: testDefine.o define.o Makefile
	gcc define.o testDefine.o -o testDefine

testDefine.o: testDefine.c Makefile
	gcc testDefine.c -c -Wall -g

define.o: define.c define.h Makefile
	gcc define.c -c -Wall -g
