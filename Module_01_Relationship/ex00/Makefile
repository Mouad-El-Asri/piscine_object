NAME = relationship

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Position.cpp \
	Statistic.cpp \
	Tool.cpp \
	Shovel.cpp \
	Hammer.cpp \
	Worker.cpp \
	Workshop.cpp \
	main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CPP) $(CPPFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY : all clean fclean re run