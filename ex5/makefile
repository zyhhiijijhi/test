CC=gcc
obj:=ex5
src:=ex5.c

CFLAG= -Wall -g
all : $(obj)

$(obj): $(obj).o
	$(CC) $(CFLAG) -o $@ $^

%.o:%.c
	$(CC) $(CFLAG) -c -o $@ $<

.PHONY:clean

clean:
	-rm  $(obj) $(obj).o
