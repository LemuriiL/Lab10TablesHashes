#ifndef INCLUDE_CREATOR_HPP_
#define INCLUDE_CREATOR_HPP_
#include <rocksdb/db.h>

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "rocksdb/options.h"
#include "rocksdb/slice.h"

using rocksdb::ColumnFamilyDescriptor;
using rocksdb::ColumnFamilyHandle;
using rocksdb::ColumnFamilyOptions;

class Creator {
 public:
  ~Creator();

  void create_new_random_db(const std::string& path_to_new_db);

  int get_column_families_names_size();

  int get_values_size();

  void set_values(const std::string& value);

 private:
  rocksdb::DB* db_ptr;
  std::vector<std::string> column_families_names;
  std::vector<ColumnFamilyHandle*> handles;
  std::vector<std::string> values;
};
#endif  // INCLUDE_CREATOR_HPP_
