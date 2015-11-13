################ 需要添加修改的 ##########################
# 项目代码目标文件
EXE_OBJ = $(SRCDIR)/maxi.o $(SRCDIR)/mini.o
# 测试代码目标文件
TEST_MAIN = test_main.o
TEST_MAXI = test_maxi.o
TEST_MINI = test_mini.o
OBJS = $(TEST_MAIN) $(TEST_MAXI) $(TEST_MINI)
##########################################################

EXEC = run_test

#VPATH=../src
#vpath %.o $(SRCDIR)

SRCDIR = ../src
INC = -I$(SRCDIR)
LIBS = -lcunit
CFLAGS = -Wall -g -DUT
CC = gcc

# 目标开始
all:$(EXEC)
.PHONY:all

$(EXEC): $(OBJS) $(EXE_OBJ)
	$(CC) $(CFLAGS) $(LIBS) $^ -o $(EXEC)

$(OBJS): %.o: %.c %.h
	$(CC) -c $(CFLAGS) $< -o $@ $(INC)

$(EXE_OBJ): %.o: %.c %.h
	$(CC) -c $(CFLAGS) $< -o $@ $(INC)

# 运行单元测试
test:$(EXEC)
	@echo "--------------------------- Running Unit Test ---------------------------"
	@echo `pwd`
	@./$(EXEC)
	@echo "-------------------------------------------------------------------------"

install:
	@echo "--- no cmd now ---"

clean:
	rm -f $(OBJS) $(EXEC)
