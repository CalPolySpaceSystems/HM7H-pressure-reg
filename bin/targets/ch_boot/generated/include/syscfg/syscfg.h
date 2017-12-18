/**
 * This file was generated by Apache Newt version: 1.2.0
 */

#ifndef H_MYNEWT_SYSCFG_
#define H_MYNEWT_SYSCFG_

/**
 * This macro exists to ensure code includes this header when needed.  If code
 * checks the existence of a setting directly via ifdef without including this
 * header, the setting macro will silently evaluate to 0.  In contrast, an
 * attempt to use these macros without including this header will result in a
 * compiler error.
 */
#define MYNEWT_VAL(x)                           MYNEWT_VAL_ ## x



/*** apps/boot */
#ifndef MYNEWT_VAL_BOOT_LOADER
#define MYNEWT_VAL_BOOT_LOADER (1)
#endif

#ifndef MYNEWT_VAL_BOOT_SERIAL
#define MYNEWT_VAL_BOOT_SERIAL (0)
#endif

/*** boot/bootutil */
#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_EC
#define MYNEWT_VAL_BOOTUTIL_SIGN_EC (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_EC256
#define MYNEWT_VAL_BOOTUTIL_SIGN_EC256 (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_SIGN_RSA
#define MYNEWT_VAL_BOOTUTIL_SIGN_RSA (0)
#endif

#ifndef MYNEWT_VAL_BOOTUTIL_VALIDATE_SLOT0
#define MYNEWT_VAL_BOOTUTIL_VALIDATE_SLOT0 (0)
#endif

/*** hw/bsp/arduino_zero */
/* Overridden by targets/ch_boot (defined by hw/bsp/arduino_zero) */
#ifndef MYNEWT_VAL_BSP_ARDUINO_ZERO
#define MYNEWT_VAL_BSP_ARDUINO_ZERO (1)
#endif

#ifndef MYNEWT_VAL_BSP_ARDUINO_ZERO_PRO
#define MYNEWT_VAL_BSP_ARDUINO_ZERO_PRO (0)
#endif

#ifndef MYNEWT_VAL_TIMER_0
#define MYNEWT_VAL_TIMER_0 (1)
#endif

#ifndef MYNEWT_VAL_TIMER_1
#define MYNEWT_VAL_TIMER_1 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_2
#define MYNEWT_VAL_TIMER_2 (0)
#endif

#ifndef MYNEWT_VAL_UART_0
#define MYNEWT_VAL_UART_0 (1)
#endif

/*** hw/mcu/atmel/samd21xx */
#ifndef MYNEWT_VAL_I2C_5
#define MYNEWT_VAL_I2C_5 (0)
#endif

#ifndef MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE
#define MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE (1)
#endif

#ifndef MYNEWT_VAL_SPI_0
#define MYNEWT_VAL_SPI_0 (0)
#endif

#ifndef MYNEWT_VAL_SPI_0_TYPE
#define MYNEWT_VAL_SPI_0_TYPE (HAL_SPI_TYPE_MASTER)
#endif

#ifndef MYNEWT_VAL_SPI_1
#define MYNEWT_VAL_SPI_1 (0)
#endif

#ifndef MYNEWT_VAL_SPI_1_TYPE
#define MYNEWT_VAL_SPI_1_TYPE (HAL_SPI_TYPE_MASTER)
#endif

#ifndef MYNEWT_VAL_SPI_2
#define MYNEWT_VAL_SPI_2 (0)
#endif

#ifndef MYNEWT_VAL_SPI_2_TYPE
#define MYNEWT_VAL_SPI_2_TYPE (HAL_SPI_TYPE_MASTER)
#endif

#ifndef MYNEWT_VAL_SPI_3
#define MYNEWT_VAL_SPI_3 (0)
#endif

#ifndef MYNEWT_VAL_SPI_3_TYPE
#define MYNEWT_VAL_SPI_3_TYPE (HAL_SPI_TYPE_MASTER)
#endif

/*** kernel/os */
#ifndef MYNEWT_VAL_FLOAT_USER
#define MYNEWT_VAL_FLOAT_USER (0)
#endif

/* Overridden by apps/boot (defined by kernel/os) */
#ifndef MYNEWT_VAL_MSYS_1_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_1_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_1_BLOCK_SIZE (292)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_2_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_2_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_MSYS_3_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_3_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_3_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_3_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_MSYS_4_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_4_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_4_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_4_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_MSYS_5_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_5_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_5_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_5_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_OS_CLI
#define MYNEWT_VAL_OS_CLI (0)
#endif

#ifndef MYNEWT_VAL_OS_COREDUMP
#define MYNEWT_VAL_OS_COREDUMP (0)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_FREQ
#define MYNEWT_VAL_OS_CPUTIME_FREQ (1000000)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_TIMER_NUM
#define MYNEWT_VAL_OS_CPUTIME_TIMER_NUM (0)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_STACK_SIZE
#define MYNEWT_VAL_OS_MAIN_STACK_SIZE (1024)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_PRIO
#define MYNEWT_VAL_OS_MAIN_TASK_PRIO (127)
#endif

/* Overridden by apps/boot (defined by kernel/os) */
#ifndef MYNEWT_VAL_OS_SCHEDULING
#define MYNEWT_VAL_OS_SCHEDULING (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW
#define MYNEWT_VAL_OS_SYSVIEW (0)
#endif

#ifndef MYNEWT_VAL_SANITY_INTERVAL
#define MYNEWT_VAL_SANITY_INTERVAL (15000)
#endif

#ifndef MYNEWT_VAL_WATCHDOG_INTERVAL
#define MYNEWT_VAL_WATCHDOG_INTERVAL (30000)
#endif

/*** libc/baselibc */
#ifndef MYNEWT_VAL_BASELIBC_ASSERT_FILE_LINE
#define MYNEWT_VAL_BASELIBC_ASSERT_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_BASELIBC_PRESENT
#define MYNEWT_VAL_BASELIBC_PRESENT (1)
#endif

/*** sys/console/stub */
#ifndef MYNEWT_VAL_CONSOLE_UART_BAUD
#define MYNEWT_VAL_CONSOLE_UART_BAUD (115200)
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_DEV
#define MYNEWT_VAL_CONSOLE_UART_DEV ("uart0")
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL
#define MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL (UART_FLOW_CTL_NONE)
#endif

/*** sys/flash_map */
#ifndef MYNEWT_VAL_FLASH_MAP_MAX_AREAS
#define MYNEWT_VAL_FLASH_MAP_MAX_AREAS (10)
#endif

/*** sys/sysinit */
/* Overridden by apps/boot (defined by sys/sysinit) */
#ifndef MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT
#define MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT (0)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_MESSAGE
#define MYNEWT_VAL_SYSINIT_PANIC_MESSAGE (0)
#endif

#endif
