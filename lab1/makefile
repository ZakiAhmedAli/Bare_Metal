#Prebared by : Zaki Ahmed - All Rights Reserved © 2020
CC=arm-none-eabi-

CFLAGS		= -g -mcpu=arm926ej-s

INCS  		= -I .

LIBS  		=

SRC   		= $(wildcard *.c)

OBJ   		= $(SRC:.c=.o)

As    		= $(wildcard *.s)

AsOBJ 		= $(As:.s=.o)

project_Name= USART_Project

#All target
all:$(project_Name).bin
	@echo "=========build is successfully========="

# Tool invocations
startup.o:startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o:%.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(project_Name).elf:$(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linkerscript.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

$(project_Name).bin:$(project_Name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin