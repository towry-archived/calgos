TARGET := $(target)
TARGETCPP := $(TARGET).cpp
TARGETTEST := test-$(TARGETCPP)
OUTPUT=$(TARGET)
ifeq ($(OS), Windows_NT)
	OUTPUT = $(TARGET).exe
endif
CC := c++
CFLAGS := --std=gnu++11 -o $(OUTPUT)

ifndef TARGET 
$(error target is not set)
endif

all: $(TARGETCPP) $(TARGETTEST)
	$(CC) $^ $(CFLAGS)

