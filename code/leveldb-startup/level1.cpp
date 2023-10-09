#include <iostream>
#include <leveldb/db.h>

int main() {
    // Open the database
    leveldb::DB* db;
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "testdb", &db);
    if (!status.ok()) {
        std::cerr << "Unable to open/create database: " << status.ToString() << std::endl;
        return 1;
    }

    // Put key-value pairs into the database
    std::string key1 = "key1";
    std::string value1 = "value1";
    status = db->Put(leveldb::WriteOptions(), key1, value1);
    if (!status.ok()) {
        std::cerr << "Failed to put key-value pair: " << status.ToString() << std::endl;
        return 1;
    }

    std::string key2 = "key2";
    std::string value2 = "value2";
    status = db->Put(leveldb::WriteOptions(), key2, value2);
    if (!status.ok()) {
        std::cerr << "Failed to put key-value pair: " << status.ToString() << std::endl;
        return 1;
    }

    // Read values from the database
    std::string readValue1;
    status = db->Get(leveldb::ReadOptions(), key1, &readValue1);
    if (status.ok()) {
        std::cout << "Value for key " << key1 << ": " << readValue1 << std::endl;
    } else {
        std::cerr << "Failed to read value for key " << key1 << ": " << status.ToString() << std::endl;
        return 1;
    }

    std::string readValue2;
    status = db->Get(leveldb::ReadOptions(), key2, &readValue2);
    if (status.ok()) {
        std::cout << "Value for key " << key2 << ": " << readValue2 << std::endl;
    } else {
        std::cerr << "Failed to read value for key " << key2 << ": " << status.ToString() << std::endl;
        return 1;
    }

    // Close the database
    delete db;

    return 0;
}
