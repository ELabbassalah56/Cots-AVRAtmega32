################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
KPAD_TEST.lss \

FLASH_IMAGE += \
KPAD_TEST.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: KPAD_TEST.elf secondary-outputs

# Tool invocations
KPAD_TEST.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,KPAD_TEST.map -mmcu=atmega32 -o "KPAD_TEST.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

KPAD_TEST.lss: KPAD_TEST.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S KPAD_TEST.elf  >"KPAD_TEST.lss"
	@echo 'Finished building: $@'
	@echo ' '

KPAD_TEST.hex: KPAD_TEST.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex KPAD_TEST.elf  "KPAD_TEST.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: KPAD_TEST.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 KPAD_TEST.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) KPAD_TEST.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
