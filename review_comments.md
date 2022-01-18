# Review Comments 18/01/2022

## README.md

* This could do more details. What is this project about? Where is the source learning material? How did you compile it? Steps? Issues? Something to describe this. Think about your future self when they read this, will they remember how to set everything up? What arguments does the software take?

# main.cpp

* Nice main, details what you are doing. So you have different variable types here... so I have a few questions!

1. How many bits or bytes are each type? For example, an int is 32 bits. What is a double, bool, char, string etc.?
2. You have a double type. In your comments, you say floating point number (with decimals). Can you think of another floating point type? What is the difference between this and double?
3. What is the difference between char and string?
4. What does const mean, on line 22?

Knowing your types is really important, it's VERY important in C++. You can't get away with duck typing like Python so these questions, although they seem basic, are very important to know!

# calculatortest.cpp

* I realise you have another main function here (). Two main functions in one checkout? That's confusing!
* What happens if I enter a string or a char instead of a number for num1 and num2?
* Can you split this into functions instead of one uber function?
* What answer do you expect if num1 = 1 and num2 = 2?

## Miscellaneous

* I wouldn't recommend committing the exe file. What if the person looking at this code is running Linux or a Mac? That won't work for them. Also exe files can be big (Mbs or even Gbs!) which means checking out this project will be expensive.
* I've added a CMakeLists.txt file. I can explain this later but if you like writing C++, this is a thing to learn that'll help in the long run!