#include <vector>

using namespace std;

namespace cards {
  template <class T>
    class Stack {
    private:
    vector<T> items;

    public:
    void shuffle();
    int addToTop(T);
    int size();
    T drawFromTop();
    vector<T> drawFromTop(int number);
  };
}
