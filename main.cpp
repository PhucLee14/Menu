#include "Button.h"

using namespace std;
using namespace sf;

int check;

int main() {
	RenderWindow window;
	Vector2i centerWindow((VideoMode::getDesktopMode().width /2) - 445, (VideoMode::getDesktopMode().height / 2) - 480);
	window.create(VideoMode(1020,600), "SFML project", Style::Titlebar | Style::Close);
	window.setPosition(centerWindow);
	window.setKeyRepeatEnabled(true);
	Font font;
	font.loadFromFile("upheavtt.ttf");
	Text nameGame;
	
	Texture texture;
	texture.loadFromFile("img/space.png");
	Sprite sprite(texture);
	
	nameGame.setString("SPACE INVADERS");
	nameGame.setPosition({210,100});
	nameGame.setFont(font);
	nameGame.setCharacterSize(80);
	nameGame.setColor(Color::Red);

	Button btn1("PLAY", {200,50}, 30, Color::Cyan, Color::Red);
	btn1.setPosition({410, 300});
	btn1.setFont(font);
	
	Button btn2("ABOUT", {200,50}, 30, Color::Cyan, Color::Red);
	btn2.setPosition({410, 400});
	btn2.setFont(font);
	
	Button btn3("EXIT", {200,50}, 30, Color::Cyan, Color::Red);
	btn3.setPosition({410, 500});
	btn3.setFont(font);
	
	while(window.isOpen()) {
		Event Event;
		if(Keyboard::isKeyPressed(Keyboard::Return)) {
			
		}
		while (window.pollEvent(Event)) {
			switch (Event.type) {
				case Event::Closed:
					window.close();
				case Event::MouseMoved:
					//btn1
					if(btn1.isMouseOver(window)) {
						btn1.setBackColor(Color::Cyan);
					}
					else {
						btn1.setBackColor(Color::White);
					}
					//btn2
					if(btn2.isMouseOver(window)) {
						btn2.setBackColor(Color::Cyan);
					}
					else {
						btn2.setBackColor(Color::White);
					}
					//btn3
					if(btn3.isMouseOver(window)) {
						btn3.setBackColor(Color::Cyan);
					}
					else {
						btn3.setBackColor(Color::White);
					}
				case Event::MouseButtonPressed:
					if(btn1.isMouseOver(window)) {
						check = 1;
					}
					if(btn2.isMouseOver(window)) {
						check = 2;
					}
					if(btn3.isMouseOver(window)) {
						check = 0;
					}
			}
		}///
		window.clear();
		window.draw(sprite);
		window.draw(nameGame);
		btn1.drawTo(window);
		btn2.drawTo(window);
		btn3.drawTo(window);
		window.display();
	}
}
