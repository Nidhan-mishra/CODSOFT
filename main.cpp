#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(720, 720), "Calculator");


    sf::RectangleShape cal1;
    sf::RectangleShape cal2;
    sf::RectangleShape cal3;
    sf::RectangleShape cal4;
    sf::RectangleShape cal5;
    sf::RectangleShape cal6;
    sf::RectangleShape cal7;
    sf::RectangleShape cal8;
    sf::RectangleShape cal9;
    sf::RectangleShape cal0;

    sf::RectangleShape plus;
    sf::RectangleShape minus;
    sf::RectangleShape multiply;
    sf::RectangleShape divide;

    sf::RectangleShape equal;
    sf::RectangleShape cancle;
    

    void init();
    {
        cal1.setSize(sf::Vector2f(150,100));
        cal1.setPosition(5, 250);
        cal1.setFillColor(sf::Color(50, 50, 50));

        cal2.setSize(sf::Vector2f(150,100));
        cal2.setPosition(165,250);
        cal2.setFillColor(sf::Color(50, 50, 50));

        cal3.setSize(sf::Vector2f(150,100));
        cal3.setPosition(325,250);
        cal3.setFillColor(sf::Color(50, 50, 50));

        cal4.setSize(sf::Vector2f(150, 100));
        cal4.setPosition(5,360);
        cal4.setFillColor(sf::Color(50, 50, 50));

        cal5.setSize(sf::Vector2f(150, 100));
        cal5.setPosition(165,360);
        cal5.setFillColor(sf::Color(50, 50, 50));

        cal6.setSize(sf::Vector2f(150, 100));
        cal6.setPosition(325,360);
        cal6.setFillColor(sf::Color(50, 50, 50));

        cal7.setSize(sf::Vector2f(150, 100));
        cal7.setPosition(5, 470);
        cal7.setFillColor(sf::Color(50, 50, 50));

        cal8.setSize(sf::Vector2f(150, 100));
        cal8.setPosition(165,470);
        cal8.setFillColor(sf::Color(50, 50, 50));

        cal9.setSize(sf::Vector2f(150, 100));
        cal9.setPosition(325,470);
        cal9.setFillColor(sf::Color(50, 50, 50));

        cal0.setSize(sf::Vector2f(150, 100));
        cal0.setPosition(165, 580);
        cal0.setFillColor(sf::Color(50, 50, 50));

        equal.setSize(sf::Vector2f(150, 100));
        equal.setPosition(5, 580);
        equal.setFillColor(sf::Color(50, 50, 50));

        cancle.setSize(sf::Vector2f(150, 100));
        cancle.setPosition(325, 580);
        cancle.setFillColor(sf::Color(50, 50, 50));

        plus.setSize(sf::Vector2f(150, 100));
        plus.setPosition(525, 250);
        plus.setFillColor(sf::Color(50, 50, 50));

        minus.setSize(sf::Vector2f(150, 100));
        minus.setPosition(525, 360);
        minus.setFillColor(sf::Color(50, 50, 50));

        multiply.setSize(sf::Vector2f(150, 100));
        multiply.setPosition(525, 470);
        multiply.setFillColor(sf::Color(50, 50, 50));

        divide.setSize(sf::Vector2f(150, 100));
        divide.setPosition(525, 580);
        divide.setFillColor(sf::Color(50, 50, 50));

    }
    int num1;
    int num1final = 0;
    int s;

    int num2;
    int k = 0;
    int num2final=0;

    int presstimer = 0;
    int d = 3000;

    int r = 0;
    int h = 0;

    std::string plu = "+";
    std::string min = "-";
    std::string multi = "*";
    std::string div = "/";


    sf::Font font;
    sf::Text text;
    sf::Text text2;

    sf::Text text3;
    sf::Text text4;
    sf::Text text5;
    sf::Text text6;

    sf::Text text7;


    sf::Text textp;
    sf::Text textm;
    sf::Text textmm;
    sf::Text textd;
    sf::Text texte;
    sf::Text textc;



    sf::Text c1;
    sf::Text c2;
    sf::Text c3;
    sf::Text c4;
    sf::Text c5;
    sf::Text c6;
    sf::Text c7;
    sf::Text c8;
    sf::Text c9;
    sf::Text c0;


    if (!font.loadFromFile("Assests_game/Font/Arialfont/arial.ttf"))
    {
        std::cout << "Error font not loaded";
    }
    else
    {
        std::cout << "Font load!" << "\n";
    }

    text.setFont(font);
    text.setPosition(10, 50);
    text.setCharacterSize(50);

    text2.setFont(font);
    text2.setPosition(400,50);
    text2.setCharacterSize(50);

    text3.setFont(font);
    text3.setPosition(350, 50);
    text3.setCharacterSize(50);

    text4.setFont(font);
    text4.setPosition(350, 50);
    text4.setCharacterSize(50);

    text5.setFont(font);
    text5.setPosition(350, 50);
    text5.setCharacterSize(50);

    text6.setFont(font);
    text6.setPosition(350, 50);
    text6.setCharacterSize(50);
    
    c0.setFont(font);
    c0.setPosition(cal0.getPosition());
    c0.setCharacterSize(50);
    c0.setString("0");

    c1.setFont(font);
    c1.setPosition(cal1.getPosition());
    c1.setCharacterSize(50);
    c1.setString("1");

    c2.setFont(font);
    c2.setPosition(cal2.getPosition());
    c2.setCharacterSize(50);
    c2.setString("2");


    c3.setFont(font);
    c3.setPosition(cal3.getPosition());
    c3.setCharacterSize(50);
    c3.setString("3");

    c4.setFont(font);
    c4.setPosition(cal4.getPosition());
    c4.setCharacterSize(50);
    c4.setString("4");

    c5.setFont(font);
    c5.setPosition(cal5.getPosition());
    c5.setCharacterSize(50);
    c5.setString("5");

    c6.setFont(font);
    c6.setPosition(cal6.getPosition());
    c6.setCharacterSize(50);
    c6.setString("6");

    c7.setFont(font);
    c7.setPosition(cal7.getPosition());
    c7.setCharacterSize(50);
    c7.setString("7");

    c8.setFont(font);
    c8.setPosition(cal8.getPosition());
    c8.setCharacterSize(50);
    c8.setString("8");

    c9.setFont(font);
    c9.setPosition(cal9.getPosition());
    c9.setCharacterSize(50);
    c9.setString("9");

    textp.setFont(font);
    textp.setPosition(580,250);
    textp.setCharacterSize(50);
    textp.setString("+");

    textm.setFont(font);
    textm.setPosition(580, 360);
    textm.setCharacterSize(50);
    textm.setString("-");

    textmm.setFont(font);
    textmm.setPosition(580,470);
    textmm.setCharacterSize(50);
    textmm.setString("*");

    textd.setFont(font);
    textd.setPosition(580,580);
    textd.setCharacterSize(50);
    textd.setString("/");

    textc.setFont(font);
    textc.setPosition(325, 580);
    textc.setCharacterSize(50);
    textc.setString("C");

    texte.setFont(font);
    texte.setPosition(5, 580);
    texte.setCharacterSize(50);
    texte.setString("=");

    text7.setFont(font);
    text7.setPosition(5,50);
    text7.setCharacterSize(50);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        presstimer = presstimer + 10;
        sf::Vector2f mousepos = sf::Vector2f(sf::Mouse::getPosition(window));
        void update();
        {
            //-------------------------------------------------------------------------1------------------------------------------------------
            if (cal1.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >=d && num1final>=0 && k==0 )
            {
                num1 = 1;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout <<num1final << "\n";
                presstimer = 0;
            }
            else if (cal1.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 = 1;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //-----------------------------------------------------------------------------------2--------------------------------------------
            if (cal2.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 = 2;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if(cal2.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 = 2;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //-------------------------------------------------------------------------------3--------------------------------------
            if (cal3.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 = 3;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal3.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 = 3;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //---------------------------------------------------------------------4---------------------------------------------------
            if (cal4.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 = 4;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal4.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 = 4;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
           //-----------------------------------------------------------------------5-------------------------------------------------------
            if (cal5.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 = 5;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal5.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 = 5;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //------------------------------------------------------------------------------------6-----------------------------------------
            if (cal6.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 = 6;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal6.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 = 6;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //----------------------------------------------------------------------------7-------------------------------------------------
            if (cal7.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 = 7;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal7.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 = 7;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //----------------------------------------------------------------------------8----------------------------------------------
            if (cal8.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 =8;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal8.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 =8;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //-----------------------------------------------------------------------------------9------------------------------------------
            if (cal9.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 =9;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal9.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 =9;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //--------------------------------------------------------------------------------------0---------------------------------------
            if (cal0.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k == 0)
            {
                num1 = 0;
                s = num1 % 10;
                num1final = (num1final * 10) + s;
                //std::cout << num1final << "\n";
                presstimer = 0;
            }
            else if (cal0.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0 && k != 0)
            {
                num2 =0;
                s = num2 % 10;
                num2final = (num2final * 10) + s;
                //std::cout << num2final << "\n";
                presstimer = 0;
            }
            //------------------------------------------------------------------equal--------------------------------------------------------
           
            //-------------------------------------------------------------cancle---------------------------------------------------------
            if (cancle.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0)
            {
                std::cout << "\n";
                num1final = 0;
                num2final = 0;
                presstimer = 0;
                k = 0;
                r = 0;
                h = 0;
            }
            //-------------------------------------------------------------------error-------------------------------------------------
            if (num1final<0)
            {
                num1final = 0;
            }
            if (num2final < 0)
            {
                num2final = 0;
            }

            text.setString(std::to_string(num1final));
            text2.setString(std::to_string(num2final));
            

            if (plus.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >0)
            {
                text3.setString(plu);
                presstimer = 0;
                k = 2;
                r = 1;
            }
            if (minus.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >0)
            {
                text4.setString(min);
                presstimer = 0;
                k = 2;
                r = 2;
            }
            if (multiply.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >0)
            {
                text5.setString(multi);
                presstimer = 0;
                k = 2;
                r = 3;
            }
            if (divide.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final > 0)
            {
                text6.setString(div);
                presstimer = 0;
                k = 2;
                r = 4;
            }
            float g;
            if (equal.getGlobalBounds().contains(mousepos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && presstimer >= d && num1final >= 0)
            {
                switch (r)
                {
                case 1:
                    text7.setString(std::to_string(g=num1final + num2final));
                    break;
                case 2:
                    text7.setString(std::to_string(g=num1final - num2final));
                    break;
                case 3:
                    text7.setString(std::to_string(g=num1final * num2final));
                    break;
                case 4:
                    text7.setString(std::to_string(g=num1final / num2final));
                    break;

                default: text7.setString("error");
                    break;
                }
                presstimer = 0;
                k = 0;
                num1final = 0;
                num2final = 0;
                r = 0;
                h = 1;
            }
        }

       window.clear();

       window.draw(cal1);
       window.draw(cal2);
       window.draw(cal3);
       window.draw(cal4);
       window.draw(cal5);
       window.draw(cal6);
       window.draw(cal7);
       window.draw(cal8);
       window.draw(cal9);
       window.draw(cal0);
       window.draw(equal);
       window.draw(cancle);

       window.draw(c0);
       window.draw(c1);
       window.draw(c2);
       window.draw(c3);
       window.draw(c4);
       window.draw(c5);
       window.draw(c6);
       window.draw(c7);
       window.draw(c8);
       window.draw(c9);

       if (num1final>0)
       {
           window.draw(text);
       }
       if (num2final>0)
       {
           window.draw(text2);
       }

       if (r==1)
       {
           window.draw(text3);
       }

       if (r == 2)
       {
           window.draw(text4);
       }

       if (r == 3)
       {
           window.draw(text5);
       }

       if (r == 4)
       {
           window.draw(text6);
       }
       if (h==1)
       {

           window.draw(text7);
       }

       window.draw(plus);
       window.draw(minus);
       window.draw(multiply);
       window.draw(divide);

       window.draw(textp);
       window.draw(textm);
       window.draw(textmm);
       window.draw(textd);
       window.draw(texte);
       window.draw(textc);

    

       window.display();
    }

    return 0;
}