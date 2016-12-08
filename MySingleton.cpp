class MySingleton
{
public:
    static MySingleton *Instance()
    {
        if(_instance == 0)
        {
            _instance = new MySingleton();
        }
        
        return _instance;
    }
    
protected:
    MySingleton();
    
private:
    static MySingleton *_instance;

}

MySingleton* MySingleton::_instance = 0;