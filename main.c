// main file.......


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>


void welcome();
int Registration();
int signin();
void  logIn();

void gotoxy(int x,int y);
void st(int in);
void Breakfast();
void lunch();
void Dinner();
void  teaDrinks();
void Others();

int loading();
int currentStatus ();
int entertainment();
int awaitingFood ();
int information();
void backMenu();
//int quiz();
int Exit ();
int payment();
int close();
void contributor();

int  returnMenu();

// gui.h
#ifndef GUI_H
#define GUI_H

// Declare the function from gui grapic.c
void createMainWindow();

#endif






struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000];


