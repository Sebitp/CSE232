#include "Table.hpp"
#include <random>
using std::mt19937;
using std::uniform_int_distribution;

Table::Table(size_t width, size_t height, int val)
// PLACE A ':' HERE FOLLOWED BY ANY MEMBER VARIABLE INITIALIZIONS
{
    width_=width;
    height_ = height;
    // ADDITIONAL SETUP FOR THE CONSTRUCTOR
    
    row_t row (width,val);
    table_ = vector<row_t>(height, row);

    // for (size_t i = 0; i < table.size(); ++i) {
    //     for (size_t j = 0; j < row.size(); ++i){
    //         table[i].push_back(val);
    //     }
        
    // }

}

// WRITE THE DEFINITION FOR Table::PrintTable
void Table::PrintTable(std::ostream& oss) const{
    for (size_t i = 0; i < table_.size(); ++i) {
        for (size_t j = 0; j < table_[i].size(); ++j){
            oss << table_[i][j] << ", ";
        }
        oss << endl; 
    }
};
// WRITE THE DEFINITION FOR Table::FillRandom
 void Table::FillRandom(int low, int high, int seed) {
    mt19937 generator(seed);
    uniform_int_distribution<int> distribution(low,high);

    for (size_t i = 0; i < table_.size(); ++i) {
        for (size_t j = 0; j < table_[i].size(); ++j){
            table_[i][j] = distribution(generator);
        }
    }
 }

// WRITE THE DEFINITION FOR Table::SetValue
bool Table::SetValue(size_t col, size_t row, int val){
    try
    {
        table_.at(row).at(col) = val;
        return true;
        /* code */
    }
    catch(const std::out_of_range& e)
    //std::out_of_range ?
    {
        return false;
    }
    
}
// WRITE THE DEFINITION FOR Table::GetValue
int Table::GetValue(size_t col, size_t row) const{
    try
    {
        return table_.at(row).at(col);
        /* code */
    }
    catch(const std::out_of_range& e)
    //std::out_of_range ?
    {
        throw;
    }
}
