SRCDIR = ./src
UTDIR = ./unit_test

SUBDIRS = $(SRCDIR) $(UTDIR)

# 定义函数
define make_subdir
@for subdir in $(SUBDIRS) ; \
	do \
	(cd $$subdir && make $1) \
	done;
endef

# 目标开始
all:
	$(call make_subdir, all)

install:
	$(call make_subdir, install)

# 运行应用程序
app:
	cd $(SRCDIR) && $(MAKE) app

# 运行单元测试
test:
	cd $(UTDIR) && $(MAKE) test

clean:
	$(call make_subdir, clean)

