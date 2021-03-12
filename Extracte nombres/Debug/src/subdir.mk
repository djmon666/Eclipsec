################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Extracte\ nombres.cpp 

OBJS += \
./src/Extracte\ nombres.o 

CPP_DEPS += \
./src/Extracte\ nombres.d 


# Each subdirectory must supply rules for building sources it contributes
src/Extracte\ nombres.o: ../src/Extracte\ nombres.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Extracte nombres.d" -MT"src/Extracte\ nombres.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


