#include <iostream>
#include <string>
int main() {
    std::string prev_word, word;
    bool first_word = true;
    while (true){
        std::cout <<"请输入一个单词（输入'exit'结束）：";
        std::cin >> word;
        if (word =="exit"){
            break;
        }
        if (!first_word && word ==prev_word){
            std::cout <<"连续重复出现的单词是："<<word << std::endl;
            break;
        }
        prev_word = word;
        first_word = false;
    }
    if(first_word || prev_word != word){
        std::cout <<"没有任何单词是连续重复出现的。"<< std::endl;
    }
    return 0;
}