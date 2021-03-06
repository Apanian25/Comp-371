#pragma once
#include <glm/glm.hpp>

/** @file
 * Utility functions for dealing with colors.
*/

/**
 * Transforms hex code to float vector format
 * 
 * @param hex RRGGBB in hex, each channel ranging 0-255
 * @return An RGB float vector, each channel ranging 0-1
 */
glm::vec3 hexToFloatRGB(int hex)
{
    int r = (hex >> 16) & 255;
    int g = (hex >> 8) & 255;
    int b = hex & 255;

    return glm::vec3(
        static_cast<float>(r) / 255.0f,
        static_cast<float>(g) / 255.0f,
        static_cast<float>(b) / 255.0f
    );
}
