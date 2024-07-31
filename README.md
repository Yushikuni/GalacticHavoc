# GalacticHavoc
### TODO List

-   [ ]  Update course description.
-   [ ]  Update course schedule.
-   [ ]  Make this game in C++ + blueprint as a Toon tanks
    * - [ ]  * Project hirachy*
    * - [ ]  * Base level*
-   [ ]  Add game project specifications (rolling ball collecting coins).
-   [ ]  Add a mechanic to change the ball into a spaceship.
-   [ ]  Design a new level inspired by the movie Interstellar.
-   [X]      -> Make a ocean level DONE
-   [ ]      -> Make a waves
-   [ ]          -> small
-   [ ]          -> too much bigger
-   [ ]  Clean your project
-   [ ]  Include technical details and requirements.
-   [ ]  Add testing and distribution plan.

  - [ ] Add critical Features
  - - - [X] Coins 
  - - - [ ] Transform to space ship
  - - - [ ] UI
* * * * *
Project Hirachy
---------------------------------------------
### Directory Details

#### Private

This directory contains the implementation (.cpp) files for the game:

- **BasePawn.cpp**: Implementation of the BasePawn class, which is likely the base class for all pawn actors in the game.
- **Coin.cpp**: Implementation of the Coin class, responsible for the game's coin objects.
- **GalacticHavocGameMode.cpp**: Implementation of the game mode, defining the rules and flow of the game.
- **GalacticHavocPlayerController.cpp**: Implementation of the player controller, handling player inputs and interactions.

#### Public

This directory contains the header (.h) files for the game:

- **BasePawn.h**: Header file for the BasePawn class.
- **Coin.h**: Header file for the Coin class.
- **GalacticHavocGameMode.h**: Header file for the GalacticHavocGameMode class.
- **GalacticHavocPlayerController.h**: Header file for the GalacticHavocPlayerController class.

## Getting Started

To get started with the GalacticHavoc project, follow these steps:

1. **Clone the repository**:
    ```bash
    git clone <repository_url>
    ```

2. **Navigate to the project directory**:
    ```bash
    cd GalacticHavoc
    ```

3. **Build the project**:
    Follow the instructions for your specific build system (e.g., CMake, Makefile, etc.).

4. **Run the game**:
    Execute the generated binary to start playing GalacticHavoc.

## Contributing

If you would like to contribute to the project, please follow these steps:

1. Fork the repository.
2. Create a new branch.
3. Make your changes and commit them.
4. Push your changes to your fork.
5. Create a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Thanks to all the contributors who helped in the development of this project.
- Special thanks to the open-source community for providing valuable resources and tools.

* * * * *
Design Document for Coin function
---------------------------------------------
Coins will be visible by shining and rotating
+  Why?
 Player must see them, this is critical Feature, without this coins is not possible to finish this game
+ How?
 Coin must be golden yellow and shining and rotating by Y axis
+ When?
 In the beginging of the levels and coins will be showing the way into end of level

 * * * * *
Design Document for PickUp Coin function
---------------------------------------------
Coins must be pickable items.
+  Why?
This is critical feature for the game. 
Player must pick up 20 Coins to be able transform from ball to ship to be able to leave from enemy planet back to home.
 + How?
This Coint must be an actor and with overlaping function, player should be able to pick them up.
 + When?
Every time when coin will be overlaping with only player.

* * * * *
Design Document for PopUp window
---------------------------------------------
+ Why?
This sloud give a summary of how much coins does player have
+ Where?
This pop up window must be visible every time when player reach the end of level as a widget with option go to another level (continue) 
or exith the game. If player choose exit the game, all coins shoudl be added to list of score in score screen. 
When player want to play again, player will start with 0 coins and I can reapeat only level 1
+ When?
In the end of every level



* * * * *
Design Document for 
---------------------------------------------



* * * * *
Design Document for Unreal Engine 5 L2 Course
---------------------------------------------

### 1\. Course Overview

Course: Unreal Engine 5 L2\
Duration: April 11, 2024 - June 20, 2024\
Goal: Teach students advanced game development techniques in Unreal Engine 5, including gameplay mechanics, level design, physics, particles, UI, NPCs, backend integration, and project finalization.

### 2\. Schedule

#### Lesson 01 - Course Introduction and Software Setup

Date: April 11, 2024\
Content: Introduction to the course, and familiarization with the software to be used throughout the course.

#### Lesson 02 - Project Setup

Date: April 18, 2024\
Content: Installation of Unreal Engine 5, basic setup of sourcetree, installation of plugins (Async Loading Screen).

#### Workshop 01 - Creating Gameplay Mechanics, Level (Greyboxing), and Game Loop

Date: April 20, 2024 - April 21, 2024\
Day 1:

-   Gameplay Mechanics: Creation of core functionality.

    -   Game Structure: Loading screen, intro level (Warning Screen), loading the next level.
    -   Note: The initial level will be the Main Menu when creating the UI.
-   Level Design (Greyboxing):

    -   Requirements: A downhill level for the ball to roll down, an environment with rocks and stones, a basic skybox, and materials for the level.
    -   Assets: Rocks, skybox, player (ball).

Day 2:

-   Game Loop:
    -   Functions: Player spawns in the level, collects points (golden coins), completes the level, saves score, returns to Main Menu / replay.
    -   Spawn Position: Predefined location.

#### Lesson 03 - Destruction and Physics

Date: April 25, 2024\
Content:

-   Introduction to Unreal Engine Chaos physics.
-   Fracture destruction using Quixel assets.
-   Implementation of exploding barrels or crates for additional points.

#### Lesson 04 - Particle System Niagara

Date: May 2, 2024\
Content: Introduction to the Niagara Particle System, creating basic effects (smoke, dust, snow).

#### Workshop 02 - UI, Localization, and Feature Completion

Date: May 11, 2024 - May 12, 2024\
Day 1:

-   Main Menu and HUD: Creation of the main menu, fonts, game settings (resolution, quality, localization), buttons, and active UI elements.

Day 2:

-   Game Localization and Translations:
-   Feature Completion: Free time to finish tasks from previous lessons.

#### Lesson 05 - Game Enhancement

Date: May 16, 2024\
Content: Dedicated lesson for improving the project and completing unfinished tasks.

#### Lesson 06 - Cutscenes with Unreal Sequencer

Date: May 23, 2024\
Content: Adding cutscenes, working with Unreal Sequencer, creating a sequence that plays while navigating a corridor.

#### Lesson 07 - Sounds

Date: May 30, 2024\
Content: Adding sound to the level, ambient sounds, SFX for the environment (impacts, destruction, jumps).

#### Lesson 08 - NPCs

Date: June 6, 2024\
Content: Introduction to Navmesh and basic NPC logic using Behavior Tree. Creating an NPC that tries to push the player off the platform.

#### Lesson 09 - Backend with Playfab

Date: June 13, 2024\
Content: Implementing Playfab backend for saving scores and player results, introduction to the platform.

#### Lesson 10 - Build and Game Release

Date: June 20, 2024\
Content: Finalizing the game, creating the build, and preparing for distribution as an executable file. Opportunity for additional adjustments (audio, graphics, UI).

### 3\. Game Project Specifications

#### Basic Mechanics

-   Player: A ball that rolls through multiple maps.
-   Objective: Collect golden coins scattered throughout the map.

#### Game Loop

-   Player Spawn: At a predetermined location on the map.
-   Point Collection: Coins add points.
-   Level Completion: After collecting a certain number of coins.
-   Score Saving: Scores are saved upon level completion.
-   Return to Main Menu or Replay: After level completion.

#### Mechanic to Change Ball into Spaceship

-   Requirement: The player must collect 20 golden coins.
-   Object Change: After collecting 20 coins, the ball can change into a spaceship.

#### New Level Inspired by Interstellar

-   Environment: Planet near a black hole, where waves look like mountains.
-   Objective: Navigate the spaceship in challenging terrain and land on the planet.

### 4\. Technical Details

-   Engine: Unreal Engine 5
-   Assets: Custom and Unreal Marketplace (e.g., Quixel)
-   Plugins: Async Loading Screen, Chaos Physics, Niagara
-   Backend: Playfab for saving scores

### 5\. Testing and Debugging

-   Internal Testing: Regular testing during development.
-   External Testing: Beta testing after all main features are completed.
-   Debugging: Bug fixing and performance optimization before the final build.

### 6\. Distribution

-   Platform: PC (Windows)
-   Format: Executable file
-   Distribution: Online platforms (e.g., Steam, Itch.io)

### 7\. Conclusion

The Unreal Engine 5 L2 course will provide students with the comprehensive knowledge and skills needed to create a fully functional game with advanced gameplay mechanics, realistic effects, and backend support. Expanding the project to include a spaceship and a new level will add an interesting element to the game and challenge students in design and implementation.
