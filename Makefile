CPP = g++
src_dir = jetus
build_dir = build
name = Jetus

cpp_files := $(shell find $(src_dir) -name '*.cpp')
obj_files := $(patsubst $(src_dir)/%.cpp,$(build_dir)/%.o,$(cpp_files))

build: $(obj_files)
	$(CPP) $^ -o $(build_dir)/$(name)

$(build_dir)/%.o: $(src_dir)/%.cpp
	@mkdir -p $(@D)
	$(CPP) -c $< -o $@

clean:
	rm -rf $(build_dir)

run:
	./$(build_dir)/$(name)
