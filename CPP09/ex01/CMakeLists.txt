
# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(MyProject)

# Add source fileFILE(GLOB_RECURSE MyCSources ./*.c)
FILE(GLOB_RECURSE MySources src/*.cpp)

# Add linker flags globally
add_link_options(--std=c++98 -Wall -Werror -Wextra -g)

# Add compiler flags globally
add_compile_options(--std=c++98 -Wall -Wextra -Werror -g -O0)

# Add an executable target
add_executable(RPN ${MySources})

# Add extra targets
add_custom_target(re
	COMMAND make clean
	COMMAND  make
	VERBATIM
)

add_custom_target(fclean
	COMMAND ${CMAKE_COMMAND} -E echo "Cleaning..."
	COMMAND make clean
	VERBATIM
	)
