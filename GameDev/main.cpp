#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({640, 480}), "Hello World");

    while (window.isOpen())
    {
        // В SFML 3.x pollEvent() возвращает std::optional<sf::Event>
        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            // Проверяем тип события через метод is<>
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}
