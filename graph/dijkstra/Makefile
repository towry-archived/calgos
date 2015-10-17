TARGET := $(target)
TARGETCPP := $(TARGET).cc
TARGETTEST := test-$(TARGETCPP)
OUTPUT=bin/$(TARGET)
ifeq ($(OS), Windows_NT)
	OUTPUT = bin/$(TARGET).exe
endif
CC := c++
CFLAGS := -g --std=gnu++11 -o $(OUTPUT)

ifndef TARGET 
$(error target is not set)
endif

all: $(TARGETCPP) $(TARGETTEST)
	$(CC) $^ $(CFLAGS)

