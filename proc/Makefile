cc=gcc
bin=proc
file_list=main.o proc.o

$(bin):$(file_list)
	$(cc) -o $@ $^
%.o:%.c
	$(cc) -c $<

.PHONY:clean
clean:
	rm -f $(file_list) $(bin)
