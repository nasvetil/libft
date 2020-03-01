# Project name
PROJECT_NAME = libft
NAME = $(PROJECT_NAME).a

# Сompiler settings
CC = gcc
FLAGS_NORME = -Wall -Wextra -Werror
FLAGS_DEBUG = -g
FLAGS = $(FLAGS_DEBUG) $(FLAGS_NORME)

# Path
SRCS_PATH = ./src/
OBJS_PATH = ./obj/

INCLUDES = -I$(HEADERS_DIRECTORY)

HEADERS_DIRECTORY = ./inc/
HEADERS_LIST = libft.h
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

# Standart color for text
CL_TX_BLACK = \033[30m
CL_TX_RED = \033[31m
CL_TX_GREEN = \033[32m
CL_TX_YELLOW = \033[33m
CL_TX_BLUE = \033[34m
CL_TX_MAGENTA = \033[35m
CL_TX_CYAN = \033[36m
CL_TX_GREY = \033[37m

# Standart color for background
CL_BG_BLACK = \033[40m
CL_BG_RED = \033[41m
CL_BG_GREEN = \033[42m
CL_BG_YELLOW = \033[43m
CL_BG_BLUE = \033[44m
CL_BG_MAGENTA = \033[45m
CL_BG_CYAN = \033[46m
CL_BG_GREY = \033[47m

# Reset all color
CL_RESET = \033[0m

# LIBC LSTTIONS
LIBC_SRCS_DIRECTORY = $(SRCS_PATH)libc/
LIBC_LIST = \
ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strcat.c \
ft_strchr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlen.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strstr.c \
ft_tolower.c \
ft_toupper.c

LIBC_OBJS_DIRECTORY = $(OBJS_PATH)
LIBC_OBJS_LIST = $(patsubst %.c, %.o, $(LIBC_LIST))
LIBC_OBJS = $(addprefix $(LIBC_OBJS_DIRECTORY), $(LIBC_OBJS_LIST))

# ADDITIONAL LSTTIONS
ADDITIONAL_SRCS_DIRECTORY = $(SRCS_PATH)additional/
ADDITIONAL_LIST = \
ft_itoa.c \
ft_memalloc.c \
ft_memdel.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putendl.c \
ft_putendl_fd.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_putstr.c \
ft_putstr_fd.c \
ft_strclr.c \
ft_strdel.c \
ft_strequ.c \
ft_striter.c \
ft_striteri.c \
ft_strjoin.c \
ft_strmap.c \
ft_strmapi.c \
ft_strnequ.c \
ft_strnew.c \
ft_strsplit.c \
ft_strsub.c \
ft_strtrim.c

ADDITIONAL_OBJS_DIRECTORY = $(OBJS_PATH)
ADDITIONAL_OBJS_LIST = $(patsubst %.c, %.o, $(ADDITIONAL_LIST))
ADDITIONAL_OBJS = $(addprefix $(ADDITIONAL_OBJS_DIRECTORY), $(ADDITIONAL_OBJS_LIST))

# LST LSTTIONS
LST_SRCS_DIRECTORY = $(SRCS_PATH)lst/
LST_LIST = \
ft_lstadd.c \
ft_lstdel.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstnew.c

LST_OBJS_DIRECTORY = $(OBJS_PATH)
LST_OBJS_LIST = $(patsubst %.c, %.o, $(LST_LIST))
LST_OBJS = $(addprefix $(LST_OBJS_DIRECTORY), $(LST_OBJS_LIST))

# SPECIAL WITH LIBC FILE
SPECIAL_SRCS_DIRECTORY = $(SRCS_PATH)special/
SPECIAL_SRCS_LIST = \
ft_abs.c \
ft_abs_null.c \
ft_memalloc_exit.c \
ft_memjoin.c \
ft_powint.c \
ft_strchr_control.c \
ft_strchr_null.c \
ft_strchr_rev.c \
ft_strclen.c \
ft_strnew_exit.c \
ft_strtolower.c \
ft_strtoupper.c \

SPECIAL_OBJS_DIRECTORY = $(OBJS_PATH)
SPECIAL_OBJS_LIST = $(patsubst %.c, %.o, $(SPECIAL_SRCS_LIST))
SPECIAL_OBJS = $(addprefix $(SPECIAL_OBJS_DIRECTORY), $(SPECIAL_OBJS_LIST))

# GNL WITH LIBC FILE
GNL_SRCS_DIRECTORY = $(SRCS_PATH)gnl/
GNL_SRCS_LIST = \
ft_lstadd_fd.c \
ft_lstnew_fd.c \
get_next_line.c

GNL_OBJS_DIRECTORY = $(OBJS_PATH)
GNL_OBJS_LIST = $(patsubst %.c, %.o, $(GNL_SRCS_LIST))
GNL_OBJS = $(addprefix $(GNL_OBJS_DIRECTORY), $(GNL_OBJS_LIST))

OBJS_COMPILE = \
$(LIBC_OBJS) \
$(ADDITIONAL_OBJS) \
$(LST_OBJS) \
$(SPECIAL_OBJS) \
$(GNL_OBJS)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS_COMPILE)
	@echo "\n$(PROJECT_NAME): $(CL_TX_GREEN)object files were created$(CL_RESET)"
	@ar rc $(NAME) $(OBJS_COMPILE)
	@echo "$(PROJECT_NAME): $(CL_TX_GREEN)$(NAME) was created$(CL_RESET)"

$(LIBC_OBJS_DIRECTORY)%.o : $(LIBC_SRCS_DIRECTORY)%.c $(HEADERS)
	@mkdir -p $(LIBC_OBJS_DIRECTORY) 2>/dev/null || echo "" > /dev/null
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(CL_TX_YELLOW).$(CL_RESET)\c"

$(ADDITIONAL_OBJS_DIRECTORY)%.o : $(ADDITIONAL_SRCS_DIRECTORY)%.c $(HEADERS)
	@mkdir -p $(ADDITIONAL_OBJS_DIRECTORY) 2>/dev/null || echo "" > /dev/null
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(CL_TX_GREY).$(CL_RESET)\c"

$(LST_OBJS_DIRECTORY)%.o : $(LST_SRCS_DIRECTORY)%.c $(HEADERS)
	@mkdir -p $(LST_OBJS_DIRECTORY) 2>/dev/null || echo "" > /dev/null
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(CL_TX_GREY).$(CL_RESET)\c"

$(SPECIAL_OBJS_DIRECTORY)%.o : $(SPECIAL_SRCS_DIRECTORY)%.c $(HEADERS)
	@mkdir -p $(SPECIAL_OBJS_DIRECTORY) 2>/dev/null || echo "" > /dev/null
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(CL_TX_MAGENTA).$(CL_RESET)\c"

$(GNL_OBJS_DIRECTORY)%.o : $(GNL_SRCS_DIRECTORY)%.c $(HEADERS)
	@mkdir -p $(GNL_OBJS_DIRECTORY) 2>/dev/null || echo "" > /dev/null
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(CL_TX_GREY).$(CL_RESET)\c"

clean:
	@rm -rf $(OBJS_PATH)
	@echo "$(PROJECT_NAME): $(CL_TX_RED)$(OBJS_PATH) was deleted$(CL_RESET)"
	@echo "$(PROJECT_NAME): $(CL_TX_RED)object files were deleted$(CL_RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(PROJECT_NAME): $(CL_TX_RED)$(NAME) was deleted$(CL_RESET)"
re:
	@$(MAKE) fclean
	@$(MAKE) all