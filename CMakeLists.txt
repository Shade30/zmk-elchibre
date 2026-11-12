if(CONFIG_SHIELD_SETTINGS_RESET)
  target_sources(app PRIVATE src/bootloader_after_settings_reset.c)
endif()
