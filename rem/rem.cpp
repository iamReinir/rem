#include <iostream>

enum class Arguments
{
    show_schedule,
    show_note,
    show_diary,
    add_schedule,
    add_note,
    add_diary,
    done,
    setting,
    none,
    invalid
};

Arguments type_of(int argc, char* argv[])
{
    if (argc == 0) return Arguments::none;
    if (argv[1] == "add") return Arguments::add_schedule;
    if (argv[1] == "note") return Arguments::add_note;       
    if (argv[1] == "done") return Arguments::done;
    if (argv[1] == "diary") return Arguments::add_diary;
    if (argv[1] == "setting") return Arguments::setting;

    if (argv[1] == "show")
    {
        if (argc < 2)
            return Arguments::none;
        if (argv[2] == "schedule")
            return Arguments::show_schedule;
        if (argv[2] == "note")
            return Arguments::show_note;
        if (argv[2] == "diary")
            return Arguments::show_diary;
    }

    return Arguments::invalid;
    
}

void pause()
{
    std::cout << "Press any key to quit...";
    std::cin.get();
}

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << " ";
    }
    std::cout << "\n";
    if (type_of(argc, argv) == Arguments::show_note)
        std::cout << "Show note" << "\n";
    pause();
}


