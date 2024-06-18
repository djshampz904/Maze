# Maze Project

## Project Requirements

This project aims to create a 3D game using raycasting. The game will be a maze where the player can navigate through the walls. The project will be developed using SDL2 and will be compiled on Ubuntu 14.04 LTS using gcc.

- All files will be compiled on Ubuntu 14.04 LTS, using gcc (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4
- We will use the gcc flags -Wall -Werror -Wextra and -pedantic
- All functions must be commented
- Functions should be maximum 40 lines long (one statement per line)
- Functions should be maximum 80 columns long
- No more than 5 functions per file
- The entire repository will be checked using Betty
- No object files .o or temporary files *~, or any unused source file should be pushed
- It is advised to always keep a clear organisation in the repository. For example, store all your sources in a `src` directory, and all your headers in a `inc`, `headers` or `dependencies` folder

## Project Tasks

1. **Walls**: Create a window with SDL2 and use raycasting to draw walls on your window. The color of the walls must be different from the color of the ground/ceil.
2. **Orientation**: Draw a different color depending on the orientation of the walls.
3. **Rotation**: Provide a way to rotate the camera during the execution.
4. **Move**: Provide a way to move the camera during the execution.
5. **Ouch**: Handle the collisions of the player with the walls.
6. **Parser**: Implement a parser to get the map from a file.
7. **Draw the map**: Draw the map on the window.
8. **Coding style + Documentation**: Check if you code fits the Holberton School coding style and if your code is well documented.
9. **Textures**: Add textures on your walls.
10. **Multi task**: Add a way to move on several directions and rotate in the same time.
11. **Ground textures**: Add textures on the ground and/or on the ceiling.
12. **Weapons**: Add weapons textures.
13. **Enemies**: Add some enemies.
14. **Make it rain**: Add rain and a possibility to stop / start the rain with a key.
15. **Extra option**: Shadows, special lightning, etc… get creative!