# UE4-ID-System-for-actors
This simple project was created as a test-task for company.
It works on different levels and you don't need to re-set-up all IDs after project the re-run.

# HOW TO RUN THE PROJECT
## First step
You have to create a new C++ based project.

## Second step
Add all needed headers and cpp files to the project.

## Third step
Choose ``GI_ID_System`` as a new Game instance class.

## Fourth step
Add an "ID" component to needed actor. You have to set proper ID for an actor inside of UE4 Editor.

## TIP:
Be careful, the system won't let you to create two duplicate IDs. 
In case of duplicate, the program will stop and a proper log will be written.
