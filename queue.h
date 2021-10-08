//Vector class implementation

using namespace std;

class queue{
  private: //Member variables
    int size; //Size of vector
    int * a; //Pointer to dynamically allocate array
    bool empty;
    void ppush(int x){
      reservepush(size + 1);
      a[size - 1] = x;
    }
    int ppop(){
      //get last index
      int first = a[size - (size - 1)];
      reservepop(size - 1);
      return first;
    }
    //Pre allocate array with space
    void reservepop(int s){
      int * bigger, *temp;
      bigger = new int [s];
      for(int i = 0; i < size; i++){
        bigger[i] = a[i + 1];
      }
      temp = a;
      a = bigger;
      bigger = temp;
      size = s;
      if(size == 0){
        empty = true;
      }
      else{
        empty = false;
      }
    }
    void reservepush(int s){
      int * bigger, *temp;
      bigger = new int [s];
      for(int i = 0; i < size; i++){
        bigger[i] = a[i];
      }
      temp = a;
      a = bigger;
      bigger = temp;
      size = s;
      if(size == 0){
        empty = true;
      }
      else{
        empty = false;
      }
    }
  public:
    //Default constructor
    queue(){
      size = 0;
      a = new int [size];
      empty = true;
    }
    int getSize(){
      return size;
    }
    void push(int num){
      ppush(num);
    }
    int pop(){
      return ppop();
    }
    bool isEmpty(){
      return empty;
    }
};