#include <iostream>
#include <string>
int main() {
    std::string prev_word, word;
    bool first_word = true;
    while (true){
        std::cout <<"������һ�����ʣ�����'exit'��������";
        std::cin >> word;
        if (word =="exit"){
            break;
        }
        if (!first_word && word ==prev_word){
            std::cout <<"�����ظ����ֵĵ����ǣ�"<<word << std::endl;
            break;
        }
        prev_word = word;
        first_word = false;
    }
    if(first_word || prev_word != word){
        std::cout <<"û���κε����������ظ����ֵġ�"<< std::endl;
    }
    return 0;
}