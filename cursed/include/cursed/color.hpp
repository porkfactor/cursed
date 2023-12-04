#ifndef CURSED_COLOR_HPP_
#define CURSED_COLOR_HPP_

#include <cstdint>

namespace cursed
{
    class Color
    {
    public:
        using color_type = uint32_t;

        constexpr color_type rgb(uint8_t r, uint8_t g, uint8_t b) 
        {
            return static_cast<color_type>((r << 16) | (g << 8) | b);
        }

        color_type const red = rgb(0xff, 0, 0);
        color_type const green = rgb(0, 0xff, 0);
        color_type const blue = rgb(0, 0, 0xff);
        color_type const cyan = rgb(0, 0, 0);
        color_type const magenta = rgb(0, 0, 0);
        color_type const yellow = rgb(0, 0, 0);
        color_type const black = rgb(0, 0, 0);
        color_type const white = rgb(0xff, 0xff, 0xff);
    };
}

#endif
