################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Hello.cpp \
../src/cordia.cpp \
../src/newplace.cpp \
../src/support.cpp 

OBJS += \
./src/Hello.o \
./src/cordia.o \
./src/newplace.o \
./src/support.o 

CPP_DEPS += \
./src/Hello.d \
./src/cordia.d \
./src/newplace.d \
./src/support.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


