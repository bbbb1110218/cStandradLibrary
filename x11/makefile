# 目标
target =x11.out

# pkg-config 找包
PKG-CONFIG = `pkg-config --cflags --libs x11`


x11.out:x11_sample.c
	gcc $< $(PKG-CONFIG) -v -o $@

clean:x11.out
	rm $< 
.PHONY:clean

# 显示 pkg-config 生成的编译器内容
# -I/opt/homebrew/Cellar/libx11/1.8.7/include -I/opt/homebrew/Cellar/libxcb/1.16/include -I/opt/homebrew/Cellar/libxau/1.0.11/include -I/opt/homebrew/Cellar/libxdmcp/1.1.4/include -I/opt/homebrew/Cellar/xorgproto/2023.2/include -L/opt/homebrew/Cellar/libx11/1.8.7/lib -lX1
show:
	echo $(PKG-CONFIG)


run:$(target)
	./$<

.PHONY:clean show