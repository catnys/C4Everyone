# Playlist Simulator
## Section 20 - Challenge 2: Using std::list


In this challenge, you will create a menu-driven application that simulates a user playing songs from a playlist of songs using C++ and the std::list container. The program will allow users to select songs from a playlist and manage the playlist by playing songs forward and backward, adding new songs, and listing the current playlist.

## Features
1. Play the first song in the playlist.
1. Play the next song in the playlist.
1. Play the previous song in the playlist.
1. Add and play a new song at the current location in the playlist.
1. List the current playlist.
1. Quit the application.


## Prerequisites
Before running this application, ensure you have the following:

1. A C++ compiler (e.g., g++, Visual C++)
2. Basic knowledge of C++ programming
3. A code editor (e.g., Visual Studio Code, Xcode, or any text editor)

## Getting Started
Clone or download the provided starting project.
Open the project in your C++ development environment.
Build and run the program.

## Usage
Upon running the program, you will be presented with a menu to interact with the playlist:


```
F - Play First Song
N - Play Next Song
P - Play Previous Song
A - Add and Play a New Song at Current Location
L - List the Current Playlist
Q - Quit
Enter a selection:
```



Choose one of the menu options by entering the corresponding letter. You can navigate through the playlist, play songs, add new songs, and list the current playlist.

## Playlist
The available playlist is modeled as a std::list of Song objects. The following songs are initially included in the playlist:



| Song Name           | Artist                  | Rate |
| ------------------- | ----------------------- | ---- |
| Dance The Night     | Dua Lipa                | 5    |
| Circles             | Post Malone             | 4    |
| Whatever It Takes   | Imagine Dragons         | 3    |
| Levitating          | Dua Lipa                | 5    |
| Save Your Tears     | The Weeknd              | 4    |
| I Wanna Be Yours    |  Arctic Monkeys | 5    |
| Never Be The Same   | Camila Cabello          | 4    |
| Middle of the Night | Elley Duhé              | 5    |
| God's Plan          | Drake                   | 5    |



You can modify this initial playlist with your preferred songs.

## Note
If you encounter issues reading input, you can clear the input buffer using the following code:

```cpp
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```


Ensure you include the `<limits>` header to use this code.

## Have Fun!

Thank youu for dropping off :)