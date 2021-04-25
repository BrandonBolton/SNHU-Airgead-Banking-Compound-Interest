# CS-210's Airgead Banking Compound Interest

## Summarize the project and what problem it was solving.

For this project, we took the role of a junior developer at a fictional company named Chada Tech. We were tasked with developing a C++ program that could get inputs from the user. With those inputs, we had to calculate the amount of interest for two different lists. The two lists were year-end balances including the yearly interests for both with and without reoccurring monthly deposits. 

## What did you do particularly well?

One task I did well with was input validation. I completed that by using a loop for both cin.fail() and if the user input a number less than one. 

## Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

One way I could improve my code is by creating a separate function for input validation. That could have saved me from writing the code over again. Creating a new function could have allowed the code to be easily upgradeable in the future.  

## Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

The piece of code I struggled with the most was outputting "Press any key to continue..." to the user before continuing the program. I write my code on a Mac and couldn't access the necessary Windows functions. I needed a way for my code to work on multiple different operating systems. I overcame that issue by looking through C++ documentation and StackOverflow. That lead me to learn about #if, #elif, and #endif. Learning about that allowed me to create my code compatible with Windows, Linux, and Mac. 

## What skills from this project will be particularly transferable to other projects or course work?

When it comes to what I could apply to future projects, two things come to mind. I now know how to handle input validation efficiently. I also know how to create cross-compatible code in the same file.

## How did you make this program maintainable, readable, and adaptable?

I made this project maintainable by using classes and functions. Instead of updating code in multiple spots, I can update the function's code. I tried to minimize code that was rewritten as much as possible.  