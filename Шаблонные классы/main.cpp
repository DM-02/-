//
//  main.cpp
//  Шаблонные классы
//
//  Created by Дмитрий Сергеевич on 28.02.2024.
//

#include <iostream>
#include <string>


template <typename T>
class DynamicColection {
private:
    std::vector<T> elements; //! Хранение элементов вектора
public:
    //! Добавление элемента в коллекцию
    void addElement(const T& element) {
        elements.push_back(element);
    }
    //! Удаление элемента по индексу из коллекции
    void removeElement (int index){
        if (index >= 0 && index < elements.size ()){
            elements.erase(elements.begin() +index);
        }
    }
    //! Получение элемента  индексу из коллекции
    T& getElement (int index){
        return elements[index];
    }
    //! Возвращает размер коллекции
    size_t size() {
        return elements.size;
    }
    //! Поддержка диапозонного for для итерации по коллекции
    auto begin() {
        return elements.end();
    }
    //! Поддержка диапозонного for для итерации по колекции
    auto end(){
        return elements.end();
    }
};

int main(int argc, const char * argv[]) {
    DynamicColection <int> intCollection;
    
    intCollection.addElement(10);
    intCollection.addElement(15);
    intCollection.addElement(20);
    
    //! Итерация по коллекци и вывод элементов
    for (int element : intCollection){
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    
    
    return 0;
}

