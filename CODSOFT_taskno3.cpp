#include <iostream>
#include <vector>

using namespace std;

struct Task {
  string description;
  bool completed;
};

vector<Task> tasks;

void addTask() {
  string description;
  cout << "Enter task description: ";
  cin>>description;

  Task task;
  task.description = description;
  task.completed = false;

  tasks.push_back(task);
}

void viewTasks() {
    cout<<endl;
  cout << "** To-Do List **" << endl;
  for (int i = 0; i < tasks.size(); i++) {
    string status = tasks[i].completed ? "Completed" : "Pending";
    cout << i + 1 << ". " << tasks[i].description << " (" << status << ")" << endl;
  }
}

void markCompleted() {
  int taskNumber;
  cout << "Enter the task number to mark as completed: ";
  cin >> taskNumber;

  if (taskNumber <= 0 || taskNumber > tasks.size()) {
    cout << "Invalid task number!" << endl;
    return;
  }

  tasks[taskNumber - 1].completed = true;
}

void removeTask() {
  int taskNumber;
  cout << "Enter the task number to remove: ";
  cin >> taskNumber;

  if (taskNumber <= 0 || taskNumber > tasks.size()) {
    cout << "Invalid task number!" << endl;
    return;
  }

  tasks.erase(tasks.begin() + (taskNumber - 1));
}

int main() {
  int option;

  do {
    cout << endl;
    cout << "1. Add task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Mark task as completed" << endl;
    cout << "4. Remove task" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your option: ";
    cin >> option;

    switch (option) {
      case 1: 
        addTask(); 
        break;
      case 2: 
        viewTasks(); 
        break;
      case 3: 
        markCompleted(); 
        break;
      case 4: 
        removeTask(); 
        break;
      case 5: 
        break;
      default: cout << "Invalid option!" << endl;
    }
  } while (option != 5);

  return 0;
}