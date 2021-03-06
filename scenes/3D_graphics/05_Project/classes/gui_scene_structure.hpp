#pragma once

// GUI parameters
struct gui_scene_structure
{
    bool surface = true;
    bool wireframe = false;
    bool skeleton = false;

    bool generate_surface = true;
    bool generate_dungeons = true;
    bool generate_trees = true;
    bool generate_river = true;

    float se = 0.32f;
    float height = 0.07f;
    float scaling = 0.55f;
    int octave = 7;
    float persistency = 0.4f;
    float frequency = 2.0f;
    float min_noise = 0.65f;

    int trees = 120;
};


