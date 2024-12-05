CC := clang
CFLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic

LIBMX := libmx.a
OBJ_DIR := obj
SRC_DIR := src

.PHONY: all
all: $(LIBMX)

.PHONY: clean
clean:
	$(RM) -r $(OBJ_DIR)

.PHONY: uninstall
uninstall: clean
	$(RM) $(LIBMX)

.PHONY: reinstall
reinstall: uninstall all

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIBMX): $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(wildcard $(SRC_DIR)/*.c))
	$(AR) -rcs $(LIBMX) $?

