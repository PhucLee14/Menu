//Cai nay nhap
#pragma once

#include<iostream>
#include<SFML/Graphics.hpp>
#include<sstream>

#define DELETE_KEY 8
#define ENTER_KEY 13
#define ESCAPE_KEY 27

using namespace std;
using namespace sf;

class Textbox {
	public:
		Textbox() {
			
		}
		Textbox(int size, Color color, bool sel) {
			textbox.setCharacterSize(size);
			textbox.setColor(color);
			isSelected = sel;
		}
	private:
		Text textbox;
		ostringstream text;
		bool isSelected = false;
		bool hasLimit = false;
		int limit;
		
		void inputLogic(int charTyped) {
			
		}
};
