# Project-1-Git-GitHub
###### Violet Shi

### Steps to resolve merge conflicts:
- Use `git checkout main` to swtch to the branch that has the merge conflicts.
- Type `open project0.cpp` to open the file that contains the conflicting code.
- Choose from the following options to keep either the incoming changes or the original code:
> Accept Current Changes

> Accept Incoming Changes
- After clearing all the highlighted conflicts, use `git status` to check whether all the conflicts are resolved.
- Then use `git add .` to stage the new updated file
- To finialize the merge use `git commmit -m "Merge conflicts resolved"`
