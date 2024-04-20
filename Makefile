COMP = gcc
OPC = -Wall -Wextra -std=c99
GTK = `pkg-config --cflags --libs gtk+-3.0`
NOME = main
START = echo "" && echo "Compilação concluida. Iniciando..." && echo "" && echo "" && ./$(NOME)

main: clear
	$(COMP) $(OPC) -o $(NOME) gtkHll.c $(GTK)
	@$(START)

compile:
	$(COMP) $(OPC) -o $(NOME) gtkHll.c $(GTK)

clear:
	rm -f $(NOME)
	clear

start:
	@$(START)
