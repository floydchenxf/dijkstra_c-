CC      = g++
CFLAGS  = -Wall -O
INCLUDEFLAGS = 
LDFLAGS = 
OBJS    =
TARGETS = test 
## –L：指明动态库所在的目录
## -l：指明动态库的名称，该名称是处在头lib和后缀.so中的名称，如上动态库libtest.so的l参数为-l test。  
## nm hello.o 对象api
##-L . -l z
test: test.o graph.o
	 g++ $^ -o $@ 
graph.o: graph.h vertex.h
clean:
	rm -f $(TARGETS) *.o *.d *.d.*
