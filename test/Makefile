CFLAGS += "-I.."

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

debugger.c: ../debugger.lua

debugger.c: ../debugger.c.lua
	cd ..; lua debugger.c.lua
	mv ../debugger.c .

embed-lua: embed.o debugger.o
	$(CC) $^ -llua -o $@

test-%: embed-%
	./$<

clean:
	-rm *.o debugger.c

.PHONY: test-% clean
