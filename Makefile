CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRCDIR = src
INCDIR = include
BINDIR = bin
OBJDIR = obj


SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SOURCES))
EXECUTABLE = $(BINDIR)/ConversorUnidades


all: $(EXECUTABLE)


$(EXECUTABLE): $(OBJECTS) | $(BINDIR)
   $(CC) $(OBJECTS) -o $@


$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
   $(CC) $(CFLAGS) -c $< -o $@


$(BINDIR) $(OBJDIR):
   mkdir -p $@


clean:
   rm -rf $(OBJDIR) $(BINDIR)


.PHONY: all clean
