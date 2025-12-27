zephyr_library()

zephyr_library_sources(custom_text.c)
zephyr_library_sources(custom_status_screen.c)

zephyr_library_include_directories(${CMAKE_CURRENT_SOURCE_DIR})
