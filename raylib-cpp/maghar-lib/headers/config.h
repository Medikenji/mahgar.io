#include <iostream>
#include <raylib.h>
#include <cstdint>

#ifndef CONFIG_H
#define CONFIG_H

#define screen_width 800  // Width of the screen in pixels
#define screen_height 600 // Height of the screen in pixels
#define fullscreen 0      // Configure for fullscreen: 0 for windowed mode, 1 for fullscreen
#define vsync 1           // Vertical sync: 1 to enable, 0 to disable
#define msaa 1            // Multi-sample anti-aliasing: 1 to enable, 0 to disable
#define debug 1           // Debug mode: 1 to enable, 0 to disable

/**
 * @class Config
 * @brief Represents a configuration class for settings related to the window.
 */
class Config
{
public:
    Config() = delete;                                  // Disable default constructor
    inline static void configurePreInit();              // Function to configure settings before initialization of window
    inline static void configurePostInit();             // Function to configure settings after initialization of window
    const static uint16_t SWIDTH = screen_width;        // Screen width assigned to SWIDTH
    const static uint16_t SHEIGHT = screen_height;      // Screen height assigned to SHEIGHT
    const static uint16_t HSWIDTH = screen_width / 2;   // Half screen width assigned to HSWIDTH
    const static uint16_t HSHEIGHT = screen_height / 2; // Half screen height assigned to HSHEIGHT
};

void Config::configurePreInit()
{
    // Enable multi-sample anti-aliasing if msaa is enabled
#if msaa
    SetWindowState(FLAG_MSAA_4X_HINT);
#endif
}

void Config::configurePostInit()
{
    // Apply vertical synchronization based on vsync setting
#if vsync
    SetWindowState(FLAG_VSYNC_HINT);
#else
    SetTargetFPS(999); // Set target FPS to maximum if vsync is disabled
#endif

    // Configure fullscreen mode based on the fullscreen setting
#if fullscreen
    SetWindowState(FLAG_FULLSCREEN_MODE);
#endif
}

#endif /* CONFIG_H */