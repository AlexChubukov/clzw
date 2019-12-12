lzw: clzw
#all: clzw
	g++ -o clzw sources/main.cpp sources/LZW.cpp
#filter_blum: main.o
#	g++ -g main.o -o filter_blum

tests: clzw_tests
	g++ -o clzw_tests tests/basic_test.cpp

clean:
	rm -f *.o clzw	

