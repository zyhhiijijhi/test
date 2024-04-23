CC=gcc
obj:=ex6
src:=ex6.c

CFLAG= -Wall -g
all : $(obj)

$(obj): $(obj).o
	$(CC) $(CFLAG) -o $@ $^

%.o:%.c
	$(CC) $(CFLAG) -c -o $@ $<

.PHONY:clean

clean:
	-rm  $(obj) $(obj).o
