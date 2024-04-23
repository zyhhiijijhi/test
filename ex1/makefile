CC=gcc
obj:=ex1
src:=ex1.c

CFLAG= -Wall -g
all : $(obj)

$(obj): $(obj).o
	$(CC) $(CFLAG) -o $@ $^

%.o:%.c
	$(CC) $(CFLAG) -c -o $@ $<

.PHONY:clean

clean:
	-rm  $(obj) $(obj).o
