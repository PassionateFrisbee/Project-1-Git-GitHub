# Project-1-Git-GitHub
###### Violet Shi

### Steps to resolve merge conflicts:
- Use `git checkout main` to switch to the branch that has the merge conflicts.
- Execute `open project0.cpp` to open the file that contains the conflicting code.
- Choose from the following options to keep either the incoming changes or the original code:
  - *Accept Current Changes*
  - *Accept Incoming Changes*
- After clearing all the highlighted conflicts, use `git status` to check if all the conflicts are resolved.
- Use `git add project0.cpp` to stage the new updated file
- To finalize merging the branch, use `git commmit -m "Merge branch 'another-branch"`
