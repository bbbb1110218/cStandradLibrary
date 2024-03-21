

# open_path=/opt/homebrew/Cellar/openssl@1.1/1.1.1w
open_path=/opt/homebrew/Cellar/openssl@3/3.2.1
include_dir = $(open_path)/include
lib_dir = $(open_path)/lib
lib_name = crypto 



cflags =  -std=c11 -I$(include_dir) -L$(lib_dir) -l$(lib_name)


all: aes.out

%.out: %.c
	gcc $<  $(cflags) -o $@

clean:
	rm *.out 
.PHONY:clean


