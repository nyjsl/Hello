################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Hello.cpp \
../src/cordia.cpp \
../src/namespaces.cpp \
../src/namesps.cpp \
../src/newplace.cpp \
../src/stock00.cpp \
../src/support.cpp \
../src/usestock.cpp 

OBJS += \
./src/Hello.o \
./src/cordia.o \
./src/namespaces.o \
./src/namesps.o \
./src/newplace.o \
./src/stock00.o \
./src/support.o \
./src/usestock.o 

CPP_DEPS += \
./src/Hello.d \
./src/cordia.d \
./src/namespaces.d \
./src/namesps.d \
./src/newplace.d \
./src/stock00.d \
./src/support.d \
./src/usestock.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


