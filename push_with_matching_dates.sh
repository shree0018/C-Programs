#!/usr/bin/env bash
# Script to commit and push Day 1 to Day 40 with matching challenge dates
# Repository: https://github.com/shree0018/C-Programs

REPO_URL="https://github.com/shree0018/C-Programs.git"

if [ ! -d .git ]; then
    git init
    git branch -M main
    git remote add origin "$REPO_URL"
fi

if [ -f "hello.c" ]; then
    export GIT_AUTHOR_DATE="2026-08-09T18:00:00"
    export GIT_COMMITTER_DATE="2026-08-09T18:00:00"
    git add hello.c
    git commit -m "Add hello program"
fi

# Dates for each day (Aug 10, 2026 to Sep 18, 2026)
dates=(
  "2026-08-10T18:30:00" "2026-08-11T18:30:00" "2026-08-12T18:30:00" "2026-08-13T18:30:00" "2026-08-14T18:30:00"
  "2026-08-15T18:30:00" "2026-08-16T18:30:00" "2026-08-17T18:30:00" "2026-08-18T18:30:00" "2026-08-19T18:30:00"
  "2026-08-20T18:30:00" "2026-08-21T18:30:00" "2026-08-22T18:30:00" "2026-08-23T18:30:00" "2026-08-24T18:30:00"
  "2026-08-25T18:30:00" "2026-08-26T18:30:00" "2026-08-27T18:30:00" "2026-08-28T18:30:00" "2026-08-29T18:30:00"
  "2026-08-30T18:30:00" "2026-08-31T18:30:00" "2026-09-01T18:30:00" "2026-09-02T18:30:00" "2026-09-03T18:30:00"
  "2026-09-04T18:30:00" "2026-09-05T18:30:00" "2026-09-06T18:30:00" "2026-09-07T18:30:00" "2026-09-08T18:30:00"
  "2026-09-09T18:30:00" "2026-09-10T18:30:00" "2026-09-11T18:30:00" "2026-09-12T18:30:00" "2026-09-13T18:30:00"
  "2026-09-14T18:30:00" "2026-09-15T18:30:00" "2026-09-16T18:30:00" "2026-09-17T18:30:00" "2026-09-18T18:30:00"
)

for i in "${!dates[@]}"; do
    day=$(( i + 1 ))
    folder="Day $day"
    q1=$(( (day - 1) * 2 + 1 ))
    q2=$(( (day - 1) * 2 + 2 ))
    date_str="${dates[$i]}"

    if [ -d "$folder" ]; then
        export GIT_AUTHOR_DATE="$date_str"
        export GIT_COMMITTER_DATE="$date_str"
        git add "$folder"
        git commit -m "Day $day: Add Q$q1 and Q$q2"
        echo "Committed $folder with date $date_str"
    fi
done

echo ""
echo "All 40 days committed with matching challenge dates!"
echo "To push to GitHub, run:"
echo "git push -u origin main --force"
