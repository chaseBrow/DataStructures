#ifndef DOUBLEHASH_H
#define DOUBLEHASH_H

#include <iostream>
#include <vector>
#include <stdexcept>	// Added for Exception

class DoubleHash {
    // Pointer to an array containing buckets
    int* hashTable;
    int curr_size;

public:
    // function to check if hash table is full
    bool isFull()
    {

        // if hash size reaches maximum size
        return (curr_size == TABLE_SIZE);
    }

    // function to calculate first hash
    int hash1(int key)
    {
        return (key % TABLE_SIZE);
    }

    // function to calculate second hash
    int hash2(int key)
    {
        return (PRIME - (key % PRIME));
    }

    DoubleHash()
    {
        hashTable = new int[TABLE_SIZE];
        curr_size = 0;
        for (int i = 0; i < TABLE_SIZE; i++)
            hashTable[i] = -1;
    }

    // function to insert key into hash table
    void insertHash(int key)
    {
        // if hash table is full
        if (isFull())
            return;

        // get index from first hash
        int index = hash1(key);

        // if collision occurs
        if (hashTable[index] != -1) {
            // get index2 from second hash
            int index2 = hash2(key);
            int i = 1;
            while (1) {
                // get newIndex
                int newIndex = (index + i * index2) % TABLE_SIZE;

                // if no collision occurs, store
                // the key
                if (hashTable[newIndex] == -1) {
                    hashTable[newIndex] = key;
                    break;
                }
                i++;
            }
        }

        // if no collision occurs
        else
            hashTable[index] = key;
        curr_size++;
    }

    // function to search key in hash table
    void search(int key)
    {
        int index1 = hash1(key);
        int index2 = hash2(key);
        int i = 0;
        while (hashTable[(index1 + i * index2) % TABLE_SIZE] != key) {
            if (hashTable[(index1 + i * index2) % TABLE_SIZE] == -1) {
                cout << key << " does not exist" << endl;
                return;
            }
            i++;
        }
        cout << key << " found" << endl;
    }

    // function to display the hash table
    void displayHash()
    {
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (hashTable[i] != -1)
                cout << i << " --> "
                     << hashTable[i] << endl;
            else
                cout << i << endl;
        }
    }
};
