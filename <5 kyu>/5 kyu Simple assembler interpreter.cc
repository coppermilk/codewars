#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

typedef std::unordered_map<std::string, int> f;

static int &getReg(std::unordered_map<std::string, int> &regs, std::string name) {
    auto search = regs.find(name);
    if (search != regs.end()) {
        return search->second;
    } else {
        std::cout << "Not found\n";
    }
}

std::unordered_map<std::string, int> assembler(const std::vector<std::string> &program) {
    std::unordered_map<std::string, int> regs;
    for (unsigned int i = 0; i < program.size(); ++i) {
        {
            std::cout << program[i] << std::endl;
            std::cout << "{";
            for (auto j: regs) {
                std::cout << j.first << " : " << j.second << "; ";
            }
            std::cout << "}" << std::endl;

            char com[4];
            char name[4];

            int value;
            char ch_value[4];
            int jnz = 0;

            switch (program[i][0]) {
                // mov <reg> <value> or mov <reg> <reg>
                case 'm' :
                    sscanf(program[i].c_str(), "%s %s %s", com, name, ch_value);
                    if (atoi(ch_value) != 0) {
                        if (regs.find(name) != regs.end()) {
                            regs.at(name) = atoi(ch_value);
                        } else {
                            regs.insert(f::value_type(name, atoi(ch_value)));
                        }
                    } else {
                        if (regs.find(name) != regs.end()) {
                            regs.at(name) = getReg(regs, ch_value);

                        } else {
                            regs.insert(f::value_type(name, getReg(regs, ch_value)));
                        }
                    }

                    break;
               // inc <reg>
                case 'i':
                    sscanf(program[i].c_str(), "%s %s", com, name);
                    value = (int &) (getReg(regs, name));
                    regs.at(name) = ++value;
                    break;
                    // dec <reg>
                case 'd':
                    sscanf(program[i].c_str(), "%s %s", com, name);
                    value = (int &) (getReg(regs, name));
                    regs.at(name) = --value;
                    break;
                    // jnz <reg> <location> or jnk <int> <location>
                case 'j':
                    if (sscanf(program[i].c_str(), "%s %s %d", com, name, &jnz) == 3) {

                        if (regs.find(name) != regs.end()) {
                            value = (int &) (getReg(regs, name));
                            if (value) {
                                if (jnz > 0) {
                                    i += jnz;
                                } else if (jnz < 0) {
                                    i += jnz;
                                }
                                // because for is autoincrement too.
                                i--;
                            }
                        } else if (0 != atoi(name)) {
                            if (jnz > 0) {
                                i += jnz;
                            } else if (jnz < 0) {
                                i += jnz;
                            }
                            // because for is autoincrement too.
                            i--;
                        }
                    }

                default:;
            }
        }
    }
    return regs;
}

int main() {
    std::vector<std::string> program{"mov a 1",
                                     "mov b 1",
                                     "mov c 0",
                                     "mov d 26",
                                     "jnz c 2",
                                     "jnz 1 5",
                                     "mov c 7",
                                     "inc d",
                                     "dec c",
                                     "jnz c -2",
                                     "mov c a",
                                     "inc a",
                                     "dec b",
                                     "jnz b -2",
                                     "mov b c",
                                     "dec d",
                                     "jnz d -6",
                                     "mov c 18",
                                     "mov d 11",
                                     "inc a",
                                     "dec d",
                                     "jnz d -2",
                                     "dec c",
                                     "jnz c -5"};


    assembler(program);
}
