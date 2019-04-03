
import Foundation

let file = FileHandle(forUpdatingAtPath: "todo.lst")
file!.write("test TODOS".data(using: .utf8)!)
file!.closeFile()
