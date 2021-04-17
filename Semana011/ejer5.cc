class super{
    private:
    int x,y;
    public:
    virtual void mostrar()=0;
}; 
class sub:super{ 
        public:
        void mostrar(){ 
        }
    };
int main(){ 
        sub obj;
        obj.mostrar();
    }       