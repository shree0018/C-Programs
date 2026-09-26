# Script to commit and push Day 1 to Day 40 with matching challenge dates
# Repository: https://github.com/shree0018/C-Programs

$repoUrl = "https://github.com/shree0018/C-Programs.git"
$startDate = [DateTime]::Parse("2026-08-10 18:30:00")

if (-not (Test-Path .git)) {
    git init
    git branch -M main
    git remote add origin $repoUrl
}

# Initial commit for hello.c
if (Test-Path "hello.c") {
    $env:GIT_AUTHOR_DATE = "2026-08-09T18:00:00"
    $env:GIT_COMMITTER_DATE = "2026-08-09T18:00:00"
    git add hello.c
    git commit -m "Add hello program"
}

# Commits for Day 1 to Day 40
1..40 | ForEach-Object {
    $day = $_
    $folder = "Day $day"
    $q1 = ($day - 1) * 2 + 1
    $q2 = ($day - 1) * 2 + 2
    $dateStr = $startDate.AddDays($day - 1).ToString("yyyy-MM-ddTHH:mm:ss")

    if (Test-Path $folder) {
        $env:GIT_AUTHOR_DATE = $dateStr
        $env:GIT_COMMITTER_DATE = $dateStr
        git add $folder
        git commit -m "Day ${day}: Add Q${q1} and Q${q2}"
        Write-Host "Committed $folder with date $dateStr"
    }
}

Write-Host "`nAll 40 days committed with matching challenge dates!"
Write-Host "To push to GitHub, run:"
Write-Host "git push -u origin main --force"
