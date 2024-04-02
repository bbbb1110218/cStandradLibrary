#include <X11/Xlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    Display *d;
    Window w;
    XEvent e;
    const char *msg = "Hello, World!";
    const char *msg2=   "Hello  Kitty";
    int s;

    d = XOpenDisplay(NULL);
    if (d == NULL) {
        fprintf(stderr, "Cannot open display\n");
        exit(1);
    }

    s = DefaultScreen(d);
    w = XCreateSimpleWindow(d, RootWindow(d, s), 500, 500, 400, 400, 1, BlackPixel(d, s), WhitePixel(d, s));
    XSelectInput(d, w, ExposureMask | KeyPressMask);
    XMapWindow(d, w);

    while (1) {
        XNextEvent(d, &e);
        if (e.type == Expose) {
            XFillRectangle(d, w, DefaultGC(d, s), 20, 20, 10, 10);
            XDrawString(d, w, DefaultGC(d, s), 50, 50, msg, strlen(msg));
            // XDrawString(d, w, DefaultGC(d, s), 50, 50+100, msg2, strlen(msg2));
            int n=10;
            for(;n<100;n+=10){
                XDrawString(d, w, DefaultGC(d, s), 50, 50+n, msg2, strlen(msg2));
            }
        }
        if (e.type == KeyPress)
            break;
    }

    XCloseDisplay(d);
    return 0;
}
