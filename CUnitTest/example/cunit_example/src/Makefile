################ 需要添加修改的 ##########################
# 项目模块目标文件
MAXI = maxi.o
MINI = mini.o
MAIN = main.o
UTOBJS = $(MAXI) $(MINI)
OBJS = $(MAXI) $(MAIN) $(MINI)
# 库目标文件
AR_OBJS = $(MAXI) $(MINI)
##########################################################

EXEC = demo
ARLIB = pro.a

UT_DIR = ../unit_test

CC = gcc
CFLAGS = -Wall -g
LIBS = 

# 目标开始
all:$(EXEC)
.PHONY:all

ar:$(ARLIB)
.PHONY:ar

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) $^ -o $(EXEC)

$(OBJS): %.o: %.c %.h
	$(CC) $(INC) -c $(CFLAGS) $< -o $@

app: $(EXEC)
	@echo "--------------------------- Running Application -------------------------"
	@echo `pwd`
	@./$(EXEC)
	@echo "-------------------------------------------------------------------------"

$(ARLIB):$(AR_OBJS)
	ar r $(ARLIB) $^
	#mv $(ARLIB) $(UT_DIR)

install:
	@echo "--- no cmd now ---"

clean:
	rm -f $(OBJS) $(EXEC) $(ARLIB)
