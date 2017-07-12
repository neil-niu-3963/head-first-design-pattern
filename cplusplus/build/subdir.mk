################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += observer.cpp\

OBJS += observer.o\


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp 
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -fPIC --std=c++11 -O3 -Wall -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

