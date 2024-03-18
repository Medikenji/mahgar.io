// uielement.cpp

#include "uielement.h"

UIElement::UIElement(std::vector<UITextLine> lines) : Entity()
{
    _lines = lines;
}

UIElement::~UIElement()
{
}

void UIElement::update(float deltaTime)
{
    for (UITextLine line : _lines)
    {
        // Draw the text on the screen at a changing position. Dependant on the size of the text and amount of lines.

        DrawText(TextFormat(line.text, *line.fvariable), line.position.x, line.position.y, line.fontSize, line.color);
    }
}
