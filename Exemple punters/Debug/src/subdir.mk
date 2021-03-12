################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Exemple\ punters.cpp 

OBJS += \
./src/Exemple\ punters.o 

CPP_DEPS += \
./src/Exemple\ punters.d 


# Each subdirectory must supply rules for building sources it contributes
src/Exemple\ punters.o: ../src/Exemple\ punters.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Exemple punters.d" -MT"src/Exemple\ punters.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


