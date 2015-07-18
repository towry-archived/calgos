TARGET := $(target)
TARGETCPP := $(TARGET).cpp
TARGETTEST := test-$(TARGETCPP)
OUTPUT=bin/$(TARGET)
ifeq ($(OS), Windows_NT)
	OUTPUT = bin/$(TARGET).exe
endif
CC := c++
CFLAGS := -g -o $(OUTPUT)

ifndef TARGET 
$(error target is not set)
endif

all: $(TARGETCPP) $(TARGETTEST)
	$(CC) $^ $(CFLAGS)

