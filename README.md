# Algorithm_bootcamp
 算法训练营

## vscode 配置
当前项目使用`vscode`开发，下面简单介绍在`vscode`下的配置。
1. 修改编译后文件的默认目录
文件默认编译文件所在目录与源码文件在同一层级，将其修改至其他目录，方便管理
在`.vscode`目录下修改`settings.json`文件，如没有可新建。
写入如下配置，
```
{
    "files.associations": {
        "iostream": "cpp",
        "ostream": "cpp"
    }
    "code-runner.executorMap": {
        "javascript": "node",
        "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
        "c": "cd $dir && gcc $fileName -o $dir/out/$fileNameWithoutExt && $dir/out/$fileNameWithoutExt",
        "zig": "zig run",
        "cpp": "cd $dir && g++ $fileName -o $dir/out/$fileNameWithoutExt && $dir/out/$fileNameWithoutExt",
        "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "php": "php",
        "python": "python -u",
        "perl": "perl",
        "perl6": "perl6",
        "ruby": "ruby",
        "go": "go run",
        "lua": "lua",
        "groovy": "groovy",
        "powershell": "powershell -ExecutionPolicy ByPass -File",
        "bat": "cmd /c",
        "shellscript": "bash",
        "fsharp": "fsi",
        "csharp": "scriptcs",
        "vbscript": "cscript //Nologo",
        "typescript": "ts-node",
        "coffeescript": "coffee",
        "scala": "scala",
        "swift": "swift",
        "julia": "julia",
        "crystal": "crystal",
        "ocaml": "ocaml",
        "r": "Rscript",
        "applescript": "osascript",
        "clojure": "lein exec",
        "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
        "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
        "racket": "racket",
        "scheme": "csi -script",
        "ahk": "autohotkey",
        "autoit": "autoit3",
        "dart": "dart",
        "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
        "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
        "haskell": "runghc",
        "nim": "nim compile --verbosity:0 --hints:off --run",
        "lisp": "sbcl --script",
        "kit": "kitc --run",
        "v": "v run",
        "sass": "sass --style expanded",
        "scss": "scss --style expanded",
        "less": "cd $dir && lessc $fileName $fileNameWithoutExt.css",
        "FortranFreeForm": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran-modern": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran_fixed-form": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "sml": "cd $dir && sml $fileName"
    }
}
```
这个配置文件其实只需要关注两行即可
```
#初始配置
"c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
"cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
```
```
#修改后配置
"c": "cd $dir && gcc $fileName -o $dir/out/$fileNameWithoutExt && $dir/out/$fileNameWithoutExt",
"cpp": "cd $dir && g++ $fileName -o $dir/out/$fileNameWithoutExt && $dir/out/$fileNameWithoutExt",
```
```
$dir 是指当前文件夹
/out 是需要再程序文件夹下新建的文件夹
$fileNameWithoutExt 是当前运行的文件
```

2. 修改 `.gitignore` 文件
默认没有修改编译后文件的默认目录情况下，若不想将编译后的文件上传至 git，`.gitignore`需要如下配置
```
#忽略掉所有文件
*
#取消忽略所有带有后缀名的文件
!*.*
#取消忽略所有目录
!*/
```
将编译后的文件写入指定目录后，`.gitignore`只需如下配置
```
**/out
```
3. 解决 `cin` 输入问题
在使用 vscode 运行 c++ 文件，当通过`cin`获取输入时，无法获取键盘的输入，需要如下配置。
找到设置选项，输入`run in terminal`，勾选 `whether to run code in integrated terminal`
![vscode配置](images/vscode%E9%85%8D%E7%BD%AE.png)