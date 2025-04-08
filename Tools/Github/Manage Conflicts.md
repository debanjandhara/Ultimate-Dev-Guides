# 🧠 Git Workflow Note: Merging Local Changes with Updated GitHub Repo

## 📌 Scenario

You have:
- A **local repo** (based on version `v1.0`)
- The **GitHub repo** has been updated to `v1.2`
- You've made local changes **without syncing first**
- Now you want to **merge your changes** and create a new version `v1.3`

---

## 🧩 Steps to Safely Merge and Upgrade

### ✅ 1. Check Local Changes
```bash
git status
```
See what files are modified. To inspect them:
```bash
git diff
```

---

### 💾 2. Stash or Commit Your Changes

#### Option 1: If uncommitted and want to save temporarily
```bash
git stash
```

#### Option 2: If ready to commit changes
```bash
git add .
git commit -m "Local changes before merge with v1.2"
```

---

### 🔄 3. Fetch and Pull Latest Changes from GitHub

```bash
git checkout main     # Make sure you're on the main branch
git fetch origin       # Fetch latest metadata from remote repo
git pull origin main   # Merge latest code (v1.2) into your local branch
```

---

### ⚙️ What is `git fetch`?

`git fetch` downloads **metadata and objects from the remote repo** but **does not merge** them into your local branch. It’s a safe way to preview what’s new without touching your code.

Use it when:
- You want to inspect remote changes before merging
- You want to compare branches
- You're working in a team and want to stay updated

---

### 🔁 4. Apply Your Changes Back (if stashed)

```bash
git stash pop
```

This will reapply your local edits on top of the freshly pulled changes. **Resolve any merge conflicts** if prompted.

---

### 🧪 5. Test the Code

Make sure everything works:
- Run the app/scripts/tests
- Check for breaking changes due to merge

---

### 🏷️ 6. Tag New Version (`v1.3`)

Once stable:
```bash
git add .
git commit -m "Merged local changes + v1.2 => version 1.3"
git tag v1.3
```

---

### 🚀 7. Push Changes to GitHub

```bash
git push origin main
git push origin v1.3
```

---

## ✅ Best Practices Checklist

| Task | Description |
|------|-------------|
| 🔍 `git fetch` | Always fetch before pulling to stay updated |
| 📦 `git stash` | Use it to prevent losing local uncommitted changes |
| 📌 Commits | Commit frequently with meaningful messages |
| 🔁 Branching | Use branches for big features instead of editing `main` |
| 🏷️ Tagging | Use semantic versioning: `v1.0`, `v1.1`, etc. |
| 🔄 `git pull --rebase` | Optional: linear history without merge commits |

---

## 🧯 Common Issues

| Problem | Solution |
|--------|----------|
| Merge conflicts | Edit the conflicting files manually, then `git add <file>` and `git commit` |
| Accidentally popped stash and lost changes | Use `git fsck --lost-found` to try to recover |
| Accidentally committed to wrong branch | `git cherry-pick`, `git rebase`, or create a patch |

---

## 🧠 Quick Reference Commands

```bash
# Save local changes
git stash

# Bring them back
git stash pop

# Pull latest changes
git fetch origin
git pull origin main

# Merge conflicts resolution
# (Edit files, then:)
git add .
git commit -m "Resolved merge conflicts"

# Tag a new version
git tag v1.3
git push origin v1.3
```

---

## 📁 Version History Example

| Version | Description |
|---------|-------------|
| `v1.0` | Initial local version |
| `v1.2` | Updated GitHub version |
| `v1.3` | Merged version with your local changes |
