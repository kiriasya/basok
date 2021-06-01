#pragma once
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
#include <winuser.h>
#include <math.h>

void reserve(std::size_t n);
void arrtemp(std::size_t n, int i);
void inputelement(int i, int j, int a);
void rend(int i, int j);
System::String ^ convertarr(int i, int j);