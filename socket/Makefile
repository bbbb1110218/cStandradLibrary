
all:$(patsubst %.c,build/%.out,$(wildcard *.c))

build/%.out:%.c
	gcc $< -o $@

clean:
	rm -rf build 

.PHONY:CLEAN

