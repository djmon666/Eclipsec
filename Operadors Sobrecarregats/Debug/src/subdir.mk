################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Operadors\ Sobrecarregats.cpp 

OBJS += \
./src/Operadors\ Sobrecarregats.o 

CPP_DEPS += \
./src/Operadors\ Sobrecarregats.d 


# Each subdirectory must supply rules for building sources it contributes
src/Operadors\ Sobrecarregats.o: ../src/Operadors\ Sobrecarregats.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Operadors Sobrecarregats.d" -MT"src/Operadors\ Sobrecarregats.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


