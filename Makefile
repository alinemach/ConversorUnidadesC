CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRCDIR = src
INCDIR = include
BINDIR = bin
OBJDIR = obj

# Fontes “principais” (excluindo o teste)
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SOURCES))

# Executável principal
EXECUTABLE = $(BINDIR)/ConversorUnidades

# ------------------------------------------------
#  Alvo "all": compila o programa principal
# ------------------------------------------------
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) | $(BINDIR)
	$(CC) $(OBJECTS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Cria os diretórios de binários/objetos, caso não existam
$(BINDIR) $(OBJDIR):
	mkdir -p $@

# ------------------------------------------------
#  Alvo "clean": remove diretórios de binários/objetos
# ------------------------------------------------
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# ------------------------------------------------
#  TESTES
#
#  1) Defina o(s) arquivo(s) de teste
#  2) Gere o objeto do teste
#  3) Linke gerando o executável do teste
#  4) Crie um alvo "test" que:
#      - Compila o teste
#      - Executa o teste
# ------------------------------------------------

TEST_SRC = tests/testConversorPotencia.c
TEST_OBJ = $(OBJDIR)/testConversorPotencia.o
TEST_EXE = $(BINDIR)/testConversorPotencia

# 1) Compila o arquivo de teste (gera .o)
$(TEST_OBJ): $(TEST_SRC) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# 2) Linka (une) o objeto do teste + objeto(s) da potência
#    Adicione aqui outros .o referentes aos testes
$(TEST_EXE): $(TEST_OBJ) $(OBJDIR)/conversorPotencia.o | $(BINDIR)
	$(CC) $(CFLAGS) $^ -o $@

# 3) Alvo "test": compila e executa o teste
test: $(TEST_EXE)
	@echo "==> Executando testes..."
	@./$(TEST_EXE)
	@echo "==> Testes finalizados com sucesso."

.PHONY: all clean test