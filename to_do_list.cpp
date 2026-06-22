#include <iostream> 
#include <string>
using namespace std;

int main() {
    string tasks[100];
    int count = 0, choice, index;

    do {
        cout << "\n===== *TO-DO-LIST* =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, tasks[count]);
                count++;
                cout << "Task added successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "No tasks available.\n";
                } else {
                    cout << "\nTasks:\n";
                    for (int i = 0; i < count; i++) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    cout << "No tasks to delete.\n";
                } else {
                    cout << "Enter task number to delete: ";
                    cin >> index;

                    if (index < 1 || index > count) {
                        cout << "Invalid task number!\n";
                    } else {
                        for (int i = index - 1; i < count - 1; i++) {
                            tasks[i] = tasks[i + 1];
                        }
                        count--;
                        cout << "Task deleted successfully!\n";
                    }
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!!!!!!\n";
        }

    } while (choice != 4);

    return 0;
}