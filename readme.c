TITLE :  Dining Philosopher 

DESCRIPTION: 

The Dining Philosopher Problem states that K philosophers seated around a circular table with one chopstick between each pair of philosophers. There is one chopstick between each philosopher. A philosopher may eat if he can pickup the two chopsticks adjacent to him. One chopstick may be picked up by any one of its adjacent followers but not both.

There are three states of philosopher : THINKING, HUNGRY and EATING. Here there are two semaphores : Mutex and a semaphore array for the philosophers. Mutex is used such that no two philosophers may access the pickup or putdown at the same time. The array is used to control the behavior of each philosopher. But, semaphores can result in deadlock due to programming errors.


CONDITIONS :  

Philosopher0 is eating Philosopher1 is thinking Philosopher2 is thinking Philosopher3 is eating Philosopher4 is thinking

Philosopher0 is thinking Philosopher1 is thinking Philosopher2 is thinking Philosopher3 is eating Philosopher4 is thinking

Philosopher0 is thinking Philosopher1 is thinking Philosopher2 is eating Philosopher3 is thinking Philosopher4 is thinking

Philosopher0 is thinking Philosopher1 is eating Philosopher2 is thinking Philosopher3 is thinking Philosopher4 is thinking

Philosopher0 is eating Philosopher1 is thinking Philosopher2 is thinking Philosopher3 is thinking Philosopher4 is thinking


HOW TO RUN CODE : 


The program should be compiled using 

" gcc diningp.c - lpthread "

run the code using 

" ./a.out "

Code runs sucessfully 


To check make file is upto date 

Give command "make" 




BADGES 


![CI](https://github.com/99002483/linux-project-/workflows/CI/badge.svg)
