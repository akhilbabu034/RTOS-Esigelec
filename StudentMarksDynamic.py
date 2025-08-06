#To take 5 students name and marks, store in a dictionary and print toppers name
studMarks = {}
for i in range(5):
    name = input("Enter the name:");
    mark = input("Enter the mark:");
    studMarks[name] = mark
print(max(studMarks))