#include <iostream>
#include <string> 
#include <cstring>

class MyString {
public:
    MyString(const char* str) {
        m_size = strlen(str);
        m_data = new char[m_size + 1];
        memcpy(m_data, str, m_size + 1);
        std::cout << "Constructed: " << m_data <<  std::endl;
    }

    MyString(const MyString& other){
        m_size = other.m_size;
        m_data = new char[m_size + 1];
        memcpy(m_data, other.m_data, m_size+1);
        std::cout << "Copied: " << m_data << std::endl;
    }

    MyString(MyString&& other){
        m_data = other.m_data;
        m_size = other.m_size;
        other.m_data = nullptr;
        other.m_size = 0;
        std::cout << "Moved!" << std::endl;
    }

    MyString& operator=(MyString&& other){
        if(this == &other) return *this;

        delete[] m_data;

        m_data = other.m_data;
        m_size = other.m_size;
        other.m_data = nullptr;
        other.m_size = 0;
        
        std::cout << "Move Assigned!" << std::endl;
        return *this;
    }

    ~MyString()
    {
        delete[] m_data;
    }

    void print(){
        if(m_data) std::cout << m_data << std::endl;
        else std::cout << "Empty" << std::endl;
    }

private:
    char* m_data;
    size_t m_size;

};

int main() {
    MyString a("Hello");
    MyString b = a;
    MyString c("World");
    MyString d("World");
    d = std::move(a);
    
    std::cout << "\na: "; a.print();
    std::cout << "b: "; b.print();
    std::cout << "c: "; c.print(); 
    std::cout << "d: "; d.print();

    return 0;
}