################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Prova1.cpp 

OBJS += \
./src/Prova1.o 

CPP_DEPS += \
./src/Prova1.d 


# Each subdirectory must supply rules for building sources it contributes
src/Prova1.o: ../src/Prova1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/Prova1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


