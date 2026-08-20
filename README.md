# cub3D

A compact raycasting engine inspired by the first generation of first-person games and built in C as a School 21 project.

The project turns a `.cub` map into a navigable pseudo-3D scene. It includes map parsing and validation, textured walls, player movement, sprites, and a minimap вЂ” without relying on a game engine.

## Highlights

- DDA-style ray casting and perspective projection;
- configurable maps and texture paths;
- collision-aware player movement and camera rotation;
- sprite rendering and minimap overlay;
- explicit resource management in C;
- strict compilation with `-Wall -Wextra -Werror`.

## Build

The included Makefile targets macOS and links MiniLibX through OpenGL and AppKit.

```bash
make
./cub3D map.cub
```

## Controls

| Action | Key |
| --- | --- |
| Move forward/backward | `W` / `S` |
| Strafe left/right | `A` / `D` |
| Rotate camera | Arrow keys |
| Exit | `Esc` |

## What I learned

This project was an exercise in translating geometry into pixels: vector math, field of view, ray intersections, texture sampling, input handling, parsing, and memory ownership all meet in one small renderer.

## Project status

Learning project preserved as part of my School 21 portfolio. The current Makefile is macOS-specific.
