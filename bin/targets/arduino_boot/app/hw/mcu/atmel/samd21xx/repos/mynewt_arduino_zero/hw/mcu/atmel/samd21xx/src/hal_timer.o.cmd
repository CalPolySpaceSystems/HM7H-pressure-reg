arm-none-eabi-gcc
-DAC_CALLBACK_MODE=true
-DAPP_NAME=boot
-DAPP_boot
-DARCH_NAME=cortex_m0
-DARCH_cortex_m0
-DBSP_NAME=arduino_zero
-DBSP_arduino_zero
-DCONF_SPI_MASTER_ENABLE=true
-DEVENTS_INTERRUPT_HOOKS_MODE=true
-DEXTINT_CALLBACK_MODE=true
-DI2S_CALLBACK_MODE=true
-DRTC_CALENDAR_ASYNC=true
-DRTC_COUNT_ASYNC=true
-DSPI_CALLBACK_MODE=true
-DUSART_CALLBACK_MODE=true
-DWDT_CALLBACK_MODE=true
-D__SAMD21G18A__
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/include
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/include/mcu
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/common/utils
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/dac
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/dac/dac_sam_d_c
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/extint
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/sercom/i2c
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/sercom/spi
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/sercom/spi/module_config
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/tc
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/tc/tc_sam_d_r
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/tcc
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/drivers/wdt
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/ac
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/adc
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/adc/adc_sam_d_r
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/bod
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/bod/bod_sam_d_r
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/dac
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/dac/dac_sam_d_c
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/dma/module_config
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/events
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/extint
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/extint/module_config
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/i2s
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/nvm
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/pac
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/port
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/rtc
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/sercom
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/sercom/i2c
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/sercom/spi
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/sercom/spi/module_config
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/sercom/spi_master_vec/module-config
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/sercom/usart
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/clock
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/clock/clock_samd21_r21_da
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/clock/clock_samd21_r21_da/module_config
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/interrupt
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/interrupt/system_interrupt_samd21
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/pinmux
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/power
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/power/power_sam_d_r
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/reset
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/system/reset/reset_sam_d_r
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/tc
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/drivers/wdt
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/utils
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/utils/cmsis/samd21/include
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/utils/header_files
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/sam0/utils/preprocessor
-Os
-Wall
-Werror
-fdata-sections
-ffunction-sections
-fno-exceptions
-fomit-frame-pointer
-ggdb
-mcpu=cortex-m0
-mthumb
-mthumb-interwork
-std=c99
-Ibin/targets/arduino_boot/generated/include
-Irepos/apache-mynewt-core/apps/boot/include
-Irepos/apache-mynewt-core/apps/boot/include/boot/arch/cortex_m0
-Irepos/apache-mynewt-core/apps/boot/src
-Irepos/apache-mynewt-core/apps/boot/src/arch/cortex_m0
-Irepos/apache-mynewt-core/boot/bootutil/include
-Irepos/apache-mynewt-core/boot/bootutil/include/bootutil/arch/cortex_m0
-Irepos/apache-mynewt-core/crypto/mbedtls/include
-Irepos/apache-mynewt-core/crypto/mbedtls/include/mbedtls/arch/cortex_m0
-Irepos/apache-mynewt-core/hw/cmsis-core/include
-Irepos/apache-mynewt-core/hw/cmsis-core/include/cmsis-core/arch/cortex_m0
-Irepos/apache-mynewt-core/hw/cmsis-core/src/ext
-Irepos/apache-mynewt-core/hw/drivers/uart/include
-Irepos/apache-mynewt-core/hw/drivers/uart/include/uart/arch/cortex_m0
-Irepos/apache-mynewt-core/hw/drivers/uart/uart_hal/include
-Irepos/apache-mynewt-core/hw/drivers/uart/uart_hal/include/uart_hal/arch/cortex_m0
-Irepos/apache-mynewt-core/hw/hal/include
-Irepos/apache-mynewt-core/hw/hal/include/hal/arch/cortex_m0
-Irepos/apache-mynewt-core/kernel/os/include
-Irepos/apache-mynewt-core/kernel/os/include/os/arch/cortex_m0
-Irepos/apache-mynewt-core/libc/baselibc/include
-Irepos/apache-mynewt-core/libc/baselibc/include/baselibc/arch/cortex_m0
-Irepos/apache-mynewt-core/sys/console/stub/include
-Irepos/apache-mynewt-core/sys/console/stub/include/stub/arch/cortex_m0
-Irepos/apache-mynewt-core/sys/defs/include
-Irepos/apache-mynewt-core/sys/defs/include/defs/arch/cortex_m0
-Irepos/apache-mynewt-core/sys/flash_map/include
-Irepos/apache-mynewt-core/sys/flash_map/include/flash_map/arch/cortex_m0
-Irepos/apache-mynewt-core/sys/mfg/include
-Irepos/apache-mynewt-core/sys/mfg/include/mfg/arch/cortex_m0
-Irepos/apache-mynewt-core/sys/sysinit/include
-Irepos/apache-mynewt-core/sys/sysinit/include/sysinit/arch/cortex_m0
-Irepos/apache-mynewt-core/util/mem/include
-Irepos/apache-mynewt-core/util/mem/include/mem/arch/cortex_m0
-Irepos/mynewt_arduino_zero/hw/bsp/arduino_zero/include
-Irepos/mynewt_arduino_zero/hw/bsp/arduino_zero/include/arduino_zero/arch/cortex_m0
-Irepos/mynewt_arduino_zero/hw/bsp/arduino_zero/include/bsp
-Irepos/mynewt_arduino_zero/hw/bsp/arduino_zero/src
-Irepos/mynewt_arduino_zero/hw/bsp/arduino_zero/src/arch/cortex_m0
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/include
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/include/samd21xx/arch/cortex_m0
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src
-Irepos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/arch/cortex_m0
-Itargets/arduino_boot/include
-Itargets/arduino_boot/include/arduino_boot/arch/cortex_m0
-Itargets/arduino_boot/src
-Itargets/arduino_boot/src/arch/cortex_m0
-c
-o
/home/pchizek/dev/press-reg/bin/targets/arduino_boot/app/hw/mcu/atmel/samd21xx/repos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/hal_timer.o
repos/mynewt_arduino_zero/hw/mcu/atmel/samd21xx/src/hal_timer.c