#include "ui/ui.hxx"
#include "ui/tui/board.hxx"

#include <ftxui/dom/elements.hpp>

#include <iostream>

namespace ui {

using namespace ftxui;

void demo() {
    auto chatBox = [&](){
        auto content = vbox({
            hbox({text(L"- You: TEXT"), text(L"3") | bold}) | color(Color::NavajoWhite1)
        });
        return window(text(L" Chat "), content);
    };

    auto boardBox = window(text(L""), ui::tui::boardGen());

    auto commandBox = [&](){
        auto content = vbox({
            hbox({text(L"- Youmuve:  "), text(L"") | bold}) | color(Color::Red),
        });
        return window(text(""), content);
    };

    auto document = hbox({
        chatBox() | flex,
        vbox({
            boardBox,
            commandBox()
        }),
    });

    document = document | size(WIDTH, LESS_THAN, 80);

    auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
    Render(screen, document);

    std::cout << screen.ToString() << '\n';
}

} // namespace ui