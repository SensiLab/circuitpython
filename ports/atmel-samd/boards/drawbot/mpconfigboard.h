// LEDs

#define MICROPY_HW_BOARD_NAME "SensiLab DrawBot"
#define MICROPY_HW_MCU_NAME "samd21j18"

#define MICROPY_HW_NEOPIXEL (&pin_PB04)

#define SPI_FLASH_MOSI_PIN          &pin_PA08
#define SPI_FLASH_MISO_PIN          &pin_PA10
#define SPI_FLASH_SCK_PIN           &pin_PA09
#define SPI_FLASH_CS_PIN            &pin_PA12

#define MICROPY_PORT_A        (0)
#define MICROPY_PORT_B        (0)
#define MICROPY_PORT_C        (0)

#define BOARD_HAS_CRYSTAL 1

#define DEFAULT_I2C_BUS_SCL (&pin_PA23)
#define DEFAULT_I2C_BUS_SDA (&pin_PA22)

#define DEFAULT_SPI_BUS_SCK (&pin_PB11)
#define DEFAULT_SPI_BUS_MOSI (&pin_PB10)
#define DEFAULT_SPI_BUS_MISO (&pin_PA12)

#define DEFAULT_UART_BUS_RX (&pin_PA11)
#define DEFAULT_UART_BUS_TX (&pin_PA10)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
