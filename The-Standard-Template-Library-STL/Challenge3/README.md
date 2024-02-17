# Challenge 3: Using std::set and std::map

## Part 1

In this part of the challenge, you are required to read words from a text file named 'words.txt,' which contains the first few paragraphs from the book, "The Wonderful Wizard of Oz" by L. Frank Baum. Your task is to display each unique word in the file and immediately follow each word with the number of times it occurs in the text file. The words should be displayed in ascending order.

Here is a sample listing of the first few words:

```
Word Count
Aunt 5
Dorothy 8
Dorothy's 1
Em 5
Even 1
From 1
```


To accomplish this task, you should use a `std::map` with `<string, int>` key/value pairs.

**Part 1** of the challenge requires you to read the text file and display each unique word along with the number of times it appears in the file. This information should be presented in ascending order. To achieve this, you are instructed to use a std::map with <string, int> key-value pairs.

## Part 2

In this part of the challenge, you are required to display each unique word in the file and immediately follow each word with the line numbers in which that word appears. The words should be displayed in ascending order, and the line numbers for each word should also be displayed in ascending order. If a word appears more than once on a line, the line number should only appear once.

Here is a sample listing of the first few words:

```
Word Occurrences
Aunt [ 2 7 25 29 48 ]
Dorothy [ 1 7 15 29 39 43 47 51 ]
Dorothy's [ 31 ]
Em [ 2 7 25 30 48 ]
Even [ 19 ]
From [ 50 ]
```


To accomplish this task, you should use a `std::map` of `<string, set<int>>` key/value pairs.


**Part 2** of the challenge asks you to display each unique word along with the line numbers on which each word appears in the text. The words and line numbers should be displayed in ascending order. If a word appears multiple times on the same line, the line number should be listed only once. In this case, you are instructed to use a `std::map` of `<string, set<int>>` key-value pairs.

---

### Hint

Consider using stringstream to process words once you read in a line from the file.

---

### Note

The basic shell for your program has been provided, including the functions that display the maps as well as the function that cleans the words read. Remember to call the `clean_string` function for every word you read from the file.

Good luck and have fun! Don't overthink this one—use the STL!