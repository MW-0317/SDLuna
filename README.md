# SDLuna
Creating a game/rendering engine with SDL.


For myself:
```
cmake -S . -B build
cmake --build build
build/src/SDLuna
```

# Why I'm making this
Honestly I just want to make my own game engine and I want to use it to learn lower level things. SDL makes it easy to not have to implement things that I don't really want to implement like input, video, audio, threading, and much more.

# Goals
- Focus on DOD (Data Oriented Design).
> Note that I will still use OOP, but want to limit its usage to interfaces/servers/APIs. The scene structure and how the game runs is to be built on ECS, hopefully.
- Implement ECS!
> This is my biggest goal of this project and will the the driving force of motivation.
- Particle System
- Cloud and atmosphere shaders!