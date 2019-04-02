#!/usr/bin/env python3
def main():
    with open('todo.lst', 'a') as todo:
        todo.write('test TODOS')

if __name__ == "__main__":
    main()
