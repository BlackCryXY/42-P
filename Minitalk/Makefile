SERVER = server
CLIENT = client

SRC	= srcs/client.c \
		srcs/server.c
OBJS = $(SRC:.c=.o)

PRINTF = ft_printf/*.c

all:
	@make -s -C $(PRINTF)
	@cc $(FLAGS) server.c -o $(SERVER)
	@cc $(FLAGS) client.c -o $(CLIENT)
	@echo "Server And Client Are Ready!"

clean:
	@make clean -s -C $(PRINTF)

fclean: clean
	@make fclean -s -C $(PRINTF)
	@rm -f $(SERVER) $(CLIENT)
	@echo "Server and Client Have Been Cleaned Successfully"

re: fclean all

.PHONY: all clean fclean re