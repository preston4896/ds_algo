# object variables.
objs := test_list.o list.o

# dependency tracking.
deps := $(patsubst %.o,%.d,$(objs))
-include $(deps)

# flags
COMPILER := g++
FLAGS := -Wall -Werror
FLAGS += -g # debug
DEPFLAGS = -MMD -MF $(@:.o=.d)

# set V = 1 to debug.
ifneq ($(V), 1)
Q = @
endif

list:$(objs)
	$(Q)$(COMPILER) $(FLAGS) -o $@ $^
	@echo "Code compiled succesfully. Ready to execute..."

%.o: %.cpp list.h
	$(Q)$(COMPILER) $(FLAGS) -c $< $(DEPFLAGS)

clean: 
	$(Q)rm -f list $(objs) $(deps)
	@echo "Cleaning complete."