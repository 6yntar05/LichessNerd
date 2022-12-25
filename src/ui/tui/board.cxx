#include "ui/tui/board.hxx"

namespace ui {
namespace tui {

using namespace ftxui;

// struct boardColors {
//     Color whiteCage   = Color::NavajoWhite1;
//     Color blackCage   = Color::LightSalmon3;
//     Color whiteFigure = Color::White;
//     Color blackFigure = Color::White;
// };

ftxui::Element boardGen(void) {
    Element board = vbox({
            hbox({
                text("▄▄▄▄▄") | color(Color::NavajoWhite1),
                text("▄▄▄▄▄") | color(Color::LightSalmon3),
                text("▄▄▄▄▄") | color(Color::NavajoWhite1),
                text("▄▄▄▄▄") | color(Color::LightSalmon3),
                text("▄▄▄▄▄") | color(Color::NavajoWhite1),
                text("▄▄▄▄▄") | color(Color::LightSalmon3),
                text("▄▄▄▄▄") | color(Color::NavajoWhite1),
                text("▄▄▄▄▄") | color(Color::LightSalmon3)
            }),
            hbox({
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
            }),
            hbox({
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
            }),
            hbox({
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
            }),
            hbox({
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
            }),
            hbox({
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
            }),
            hbox({
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
            }),
            hbox({
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::Black)|center, text("▄▄▄▄▄") }) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
            }),
            hbox({
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, Constraint::GREATER_THAN, 5)}) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, GREATER_THAN, 5)}) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, GREATER_THAN, 5)}) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, GREATER_THAN, 5)}) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, GREATER_THAN, 5)}) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, GREATER_THAN, 5)}) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, GREATER_THAN, 5)}) | bgcolor(Color::LightSalmon3) | color(Color::NavajoWhite1),
                vbox({ text("K")|color(Color::White)|center|size(WIDTH, GREATER_THAN, 5)}) | bgcolor(Color::NavajoWhite1) | color(Color::LightSalmon3),
            }),
            hbox({
                text("▀▀▀▀▀") | color(Color::LightSalmon3),
                text("▀▀▀▀▀") | color(Color::NavajoWhite1),
                text("▀▀▀▀▀") | color(Color::LightSalmon3),
                text("▀▀▀▀▀") | color(Color::NavajoWhite1),
                text("▀▀▀▀▀") | color(Color::LightSalmon3),
                text("▀▀▀▀▀") | color(Color::NavajoWhite1),
                text("▀▀▀▀▀") | color(Color::LightSalmon3),
                text("▀▀▀▀▀") | color(Color::NavajoWhite1)
            })
        });
    return board;
}

} // namespace tui

} // namespace ui