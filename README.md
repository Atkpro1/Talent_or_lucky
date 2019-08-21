# Lucky

This is a program can test weather lucky or talent is more important with c++

rand.h : random generator

​	MRAND_init : init with the arg(default time)

​	MRAND_BIT : create a random int 0 or 1

​	MRAND_NOR : create a random int between [1,MRAND_MAX(100)] with normal distribution

people.cpp : a class for people

​	People : class

​		People(int ablity) set the new people's ablity= arg

​		People() : People(0)

​		ablity : the people's ablity

​		test_score(round)set the people's score is a function of ablity and the random lucky,round is how many time to test;

​		score : score set by **test_score**

lucky_ablity.cpp : main program to compile

a.out: excuteable program in Linux

​	How to use:

​	input arg :pc,round,play //input after called

​	it will create **pc** people then call their test_score(**round**);

​	and output **play** people who's **ablity** is the largest's ablity and score

​	both the score is the largest;

test: ./a.out

​	1000 1000 20

testi:1000 1000 20

# End