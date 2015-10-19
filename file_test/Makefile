
default:plain_file_write.out plain_file_read.out mmap_file_read.out

plain_file_write.out:plain_file_write.o
	g++ -g -o $@ $^

plain_file_read.out:plain_file_read.o
	g++ -g -o $@ $^

mmap_file_read.out:mmap_file_read.o
	g++ -g -o $@ $^

plain_file_write.o:plain_file_write.cpp
	g++ -g -c $^

plain_file_read.o:plain_file_read.cpp
	g++ -g -c $^

mmap_file_read.o:mmap_file_read.cpp
	g++ -g -c $^

clean:
	rm -rf *.o *.out
