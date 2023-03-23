# rem

A simple schedule and diary manager that run on the console.

First run, the app will open setup.txt. You can change the default text editor and the path where all your files is saved here.

Arguments :

<code>rem</code>: equivalent to <code>rem schedule</code>. Show the amount of pending works of the next 30 days.

<code>rem [date]</code>: Show details of pending works for the specified day.

<code>rem add [plan_name] "[detail]"</code>: Add a pending work to the schedule. The work is considered pending from added to the deadline. If detail or plan name is not specified, a text editor window will be open for editing.

<code>rem diary "[entry]"</code>: add a entry to the diary file. If there is no entry then a entry.txt file will be open for editing.

<code>rem setting</code>: open the setting file.

As I want the app to be as lightweight as possible (without hurting development time), it will be written in C++.
