#ifndef __TEMPLATES_EXAMPLE_HPP__
#define __TEMPLATES_EXAMPLE_HPP__

template<class T>
class Singleton
{
private:
    static T* m_instance = nullptr;
    Singleton() {};
public:
    static T* getInstance()
    {
        if (!m_instance) { m_instance = new T(); }
        return m_instance;
    }
};

template<class T>       
T* Singleton<T>::m_instance = nullptr;   
class MyClass : public Singleton<MyClass> //clase Singleton T = MyClass
{

}; 


#endif //TEMPLATES_EXAMPLE_HPP
