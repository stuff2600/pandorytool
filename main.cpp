#include <iostream>
#include "src/CommandLineArguments.h"
#include "src/PandoryTool.h"

int main(int argc, char *argv[]) {
    PandoryTool app(argc, argv);
    app.main(argc, argv);
    return 0;
}
