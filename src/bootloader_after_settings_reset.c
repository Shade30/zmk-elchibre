#include <zephyr/init.h>
#include <zephyr/sys/reboot.h>

#include <dt-bindings/zmk/reset.h>

static int enter_bootloader_after_settings_erase(void) {
    sys_reboot(RST_UF2);
    return 0;
}

SYS_INIT(enter_bootloader_after_settings_erase, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
