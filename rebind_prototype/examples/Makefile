DIRS = \
	actor \
	adapter \
	async \
	async_ops \
	for_each \
	hints \
	inline \
	invoke \
	nested \
	simple

.PHONY: all clean

all:
	$(foreach DIR,$(DIRS),make -C $(DIR) $(MAKEFLAGS) && )true

clean:
	$(foreach DIR,$(DIRS),make -C $(DIR) $(MAKEFLAGS) clean && )true
