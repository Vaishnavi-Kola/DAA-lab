#include <iostream>
using namespace std;

// Function to find fake coin index
int findFakeCoin(int coins[], int low, int high) {
    // If only one coin
    if (low == high)
        return low;

    int mid = (low + high) / 2;

    int leftSum = 0, rightSum = 0;

    // Sum left half
    for (int i = low; i <= mid; i++)
        leftSum += coins[i];

    // Sum right half
    for (int i = mid + 1; i <= high; i++)
        rightSum += coins[i];

    // Fake coin is in the lighter half
    if (leftSum < rightSum)
        return findFakeCoin(coins, low, mid);
    else
        return findFakeCoin(coins, mid + 1, high);
}

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    int coins[n];
    cout << "Enter coin weights:\n";
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    int index = findFakeCoin(coins, 0, n - 1);

    cout << "Fake coin found at index: " << index << endl;
    cout << "Weight of fake coin: " << coins[index] << endl;

    return 0;
}
