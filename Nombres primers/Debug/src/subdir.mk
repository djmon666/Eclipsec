################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nombres\ primers.cpp 

OBJS += \
./src/Nombres\ primers.o 

CPP_DEPS += \
./src/Nombres\ primers.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nombres\ primers.o: ../src/Nombres\ primers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Nombres primers.d" -MT"src/Nombres\ primers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


