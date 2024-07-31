#include<bits/stdc++.h>
using namespace std;

class toDo{
    private:
    vector<string> tasks;
    vector<string> status;
    int total_tasks=0;

    public:
    void addTask(){
        cout<<"Enter number of tasks to add: ";
        int n;
        cin>>n;
        cin.ignore();
        string task;
        for(int i=0;i<n;i++){
            cout<<"Enter Task "<<i+1<<":";
            getline(cin, task);
            tasks.push_back(task);
            status.push_back("pending");
            total_tasks++;
            }
        cout<<"Tasks inserted\n\n"<<endl;
    }

    void viewTasks(){
        if(total_tasks==0){
        cout<<"No task in List\n\n"<<endl;
        return;
        }
        cout<<"Tasks List"<<endl;
        cout<<"No\tTask\tstatus"<<endl;
        for(int i=0;i<total_tasks;i++){
            cout<<i+1<<"\t"<<tasks[i]<<"\t"<<status[i]<<endl;
        }
        cout<<"\n\n";
    }

    void markDone(){
        if(total_tasks==0){
        cout<<"No task in List\n\n"<<endl;
        return;
        }
        viewTasks();
        int i;
        cout<<"Enter task number: ";
        cin>>i;
         if (i > 0 && i <= total_tasks) {
            status[i - 1] = "completed";
            cout << "Task " << i << " marked as completed.\n\n" << endl;
        } else {
            cout << "Invalid task number.\n\n" << endl;
        }
    }

    void removeTask(){
        if(total_tasks==0){
        cout<<"No task in List\n\n"<<endl;
        return;
        }
        viewTasks();
        int i;
        cout<<"Enter task number: ";
        cin>>i;
        if (i > 0 && i <= total_tasks) {
            tasks.erase(tasks.begin() + (i - 1));
            status.erase(status.begin() + (i - 1));
            total_tasks--;
            cout << "Task " << i << " removed.\n\n" << endl;
        } else {
            cout << "Invalid task number.\n\n" << endl;
        }
    }
};

int main(){
    toDo User;
    int choice;
    vector<string> Menu={"Add task","View tasks","Remove task","Mark completed","Exit"};
    while(1){
        cout<<"   MENU   "<<endl;
        for(int i=0;i<5;i++){
            cout<<i+1<<" "<<Menu[i]<<endl;
        }
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1: User.addTask();
                    break;
            case 2: User.viewTasks();
                    break;
            case 3: User.removeTask();
                    break;
            case 4: User.markDone();
                    break;
            case 5: cout<<"Exiting...";
                    exit(0);
                    break;
            default: cout<<"Invalid choice!!\n\n"<<endl;
        }
    }
}