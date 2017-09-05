#ifndef ANDROID_GEN_GPIO_INTERFACE_H
#define ANDROID_GEN_GPIO_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <sys/types.h>

#include <hardware/hardware.h>

__BEGIN_DECLS

# define GEN_GPIO_HARDWARE_MODULE_ID "gen_gpio"

struct gen_gpio_device_t {

    struct hw_device_t common;
    int (*read)(char* buffer, int length, int gpio_pin);
    int (*write)(char* buffer, int length, int gpio_pin);
    //int (*test)(int value) I dont think we need this method
};

__END_DECLS

#endif // ANDROID_GPIO_INTERFACE_H

