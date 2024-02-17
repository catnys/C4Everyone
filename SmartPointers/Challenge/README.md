# Sparkling Code Adventure 🌟
`Get ready for a magical journey in the world of code! 🪄`

## Challenge Overview
Let's create a program that's as delightful as a unicorn's dance! ✨

We have a function named make that creates and returns a unique_ptr to a vector of shared_ptrs to Test objects. 🎈

Another enchanting function named fill expects a vector of shared pointers to Test objects and a charming int representing the number of Test objects to create. 🌟✨ It will ask you to enter a magical number, and it will create a shared_ptr to a Test object filled with your number, adding that shared pointer to the vector.

And ofc, we have a lovely function named display. It's like opening a treasure chest and finding the hidden gems! It expects a vector of shared_ptrs to Test objects and reveals the precious data inside each Test object. 💎

Our magical adventure starts with the main driver program. It looks like this:

```cpp
int main() {
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter, my dear? ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}
```
## A Glimpse of the Enchantment
Picture yourself as the hero of this story. You're about to embark on a quest filled with magic! 🧙

Here's a sneak peek:

```bash
How many data points do you want to enter, my dear? 3
Enter data point [1] : 10
        Test constructor (10)
Enter data point [2] : 20
        Test constructor (20)
Enter data point [3] : 30
        Test constructor (30)
Displaying the enchanted data
=======================
10
20
30
=======================
        Test destructor (10)
        Test destructor (20)
        Test destructor (30)
```
## How to Begin Your Adventure
1. Clone this magical repository to your enchanted device:

```bash
git clone {baseurl}/Cpp-Playlist-Resources.git
```
2. Use your spell (compiler) to bring the code to life. You can do it like this:

```c
g++ -std=c++11 main.cpp -o magic_app
```
3. Cast your spell (run the program):

```bash
./magic_app
```
4. Follow the guidance in your magical console.

## so, to sum up ... 
Feel free to create your own magic in the code! Modify and experiment to create your own enchanted spells, and remember please feel free 2 contact me via github or mail. Have fun on this sparkling and coding stuff ^-^ C U again 


- ✨Magic ✨
