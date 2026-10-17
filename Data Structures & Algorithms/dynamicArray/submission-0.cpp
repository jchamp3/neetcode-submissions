class DynamicArray {
private:
    int* arr;
    int cap;
    int size;
public:

    DynamicArray(int capacity) {
        cap = capacity;
        arr = new int[cap];
        size = 0;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (getSize() == getCapacity()) {
            resize();
        }
        arr[size] = n;
        size++;

    }

    int popback() {
        int last = arr[size-1];
        size--;
        return last;
    }

    void resize() {
        int* new_arr = new int[getCapacity() * 2];
        cap = 2 * cap;

        for (int i = 0; i < size; i++) {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;

    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return cap;
    }
};
