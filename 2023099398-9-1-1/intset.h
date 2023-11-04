#ifndef __INTEGERSET_H__
#define __INTEGERSET_H__

#include <vector>

class IntegerSet {
    public:
        void AddNumber(int num);
        void DeleteNumber(int num);

        int GetItem(int pos);
        std::vector<int> GetAll();

    private:
        std::vector<int> numbers_;
};

#endif //__INTEGERSET_H__