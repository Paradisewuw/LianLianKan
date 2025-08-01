@echo off
chcp 65001 >nul
REM 后面接脚本内容


REM =========================================
REM Git 跨项目智能推送脚本
REM 适用：Windows
REM 功能：自动检测远程仓库，若无则提示输入
REM =========================================

REM 检查当前是否为 Git 仓库
git rev-parse --is-inside-work-tree >nul 2>&1
if errorlevel 1 (
    echo ❌ 当前目录不是 Git 仓库，请先执行 git init
    pause
    exit /b
)

REM 检查远程仓库是否已配置
for /f "tokens=*" %%i in ('git remote') do set remote=%%i

if "%remote%"=="" (
    echo ⚠️ 检测到当前项目未配置 GitHub 远程仓库
    set /p url=请输入 GitHub 仓库链接（例如：https://github.com/xxx/xxx.git）:
    git remote add origin %url%
    echo ✅ 已添加远程仓库：%url%
)

REM 获取当前分支名
for /f "tokens=*" %%i in ('git rev-parse --abbrev-ref HEAD') do set branch=%%i

REM 提交信息
set /p msg=请输入本次提交说明（commit message）:

REM 添加、提交、推送
git add .
git commit -m "%msg%"
git push origin %branch%

echo ✅ 推送完成！分支：%branch%
pause
